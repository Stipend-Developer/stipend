// Copyright (c) 2009-2012 The Bitcoin developers
// Distributed under the MIT software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#include <boost/assign/list_of.hpp> // for 'map_list_of()'
#include <boost/foreach.hpp>

#include "checkpoints.h"

#include "txdb.h"
#include "main/main.h"
#include "uint256.h"


static const int nCheckpointSpan = 5000;

namespace Checkpoints
{
    typedef std::map<int, uint256> MapCheckpoints;

    //
    // What makes a good checkpoint block?
    // + Is surrounded by blocks with reasonable timestamps
    //   (no blocks before with a timestamp after, none after with
    //    timestamp before)
    // + Contains no strange transactions
    //
    static MapCheckpoints mapCheckpoints =
        boost::assign::map_list_of
        (0,	       Params().HashGenesisBlock() )
        (100,      uint256("0x9303ef23d1a54751500c4f0d885ac2b9e0aca7774c90f8344c5fe87b110bced3"))
        (200,      uint256("0x5baf9c9ab09c74252ad2a150119c97783a8ff2eda71831827387524018178201"))
        (500,      uint256("0xde30323a3b64ab5f83c4930ec0db3816f503b4a4323ec8767ecef4de5979f6eb"))
        (1000,     uint256("0xc4d23388539f562442d403589bcc833669d39e45869ddaf87efe50340ec6eade"))
        (5000,     uint256("0xde88bc9b4d541e14e7282beda3ea6d608ae60220098b66bd77ffb6da974b4c78"))
        (10000,    uint256("0x0caee9af768534b3010192dc1412d8cc6b75fd00f8c989ebec90d470714213f8"))
        (20000,    uint256("0xeb78dd82b98f2c0709cde9c6d510edab273e7a118baaf01cbc22f8a961243c4a"))
        (30000,    uint256("0x5ff353059480cd364d38645c28e1ebb13d49a9ba286263d7252d5f6ed47d6ab2"))
        (40000,    uint256("0x26bb584a520998abe23736c45bc944102d16730823cc11ff4003cd92e3294e85"))
        (50000,    uint256("0x39b04f258dfdbff28137818d0c413f51f607bae4c6ca47e66d6c175ad4cf5781"))
        (100000,   uint256("0x50bba4178080f1077ed4b4d45a86927e56605101020f9c8ce140e593887b2fb6"))
        (150000,   uint256("0x348c6838f156b5a8bf98288dc23c2612aa6f95a14bef9c62c858c24e1a972fa5"))
        (200000,   uint256("0x0dfdfa4cad23d2dab88aa5571ce1bd12ba280f657da6e949c9622306e7692954"))

    ;

    // TestNet has no checkpoints
    static MapCheckpoints mapCheckpointsTestnet;

    bool CheckHardened(int nHeight, const uint256& hash)
    {
        MapCheckpoints& checkpoints = (TestNet() ? mapCheckpointsTestnet : mapCheckpoints);

        MapCheckpoints::const_iterator i = checkpoints.find(nHeight);
        if (i == checkpoints.end()) return true;
        return hash == i->second;
    }

    int GetTotalBlocksEstimate()
    {
        MapCheckpoints& checkpoints = (TestNet() ? mapCheckpointsTestnet : mapCheckpoints);

        if (checkpoints.empty())
            return 0;
        return checkpoints.rbegin()->first;
    }

    CBlockIndex* GetLastCheckpoint(const std::map<uint256, CBlockIndex*>& mapBlockIndex)
    {
        MapCheckpoints& checkpoints = (TestNet() ? mapCheckpointsTestnet : mapCheckpoints);

        BOOST_REVERSE_FOREACH(const MapCheckpoints::value_type& i, checkpoints)
        {
            const uint256& hash = i.second;
            std::map<uint256, CBlockIndex*>::const_iterator t = mapBlockIndex.find(hash);
            if (t != mapBlockIndex.end())
                return t->second;
        }
        return NULL;
    }

    // Automatically select a suitable sync-checkpoint
    const CBlockIndex* AutoSelectSyncCheckpoint()
    {
        const CBlockIndex *pindex = pindexBest;
        // Search backward for a block within max span and maturity window
        while (pindex->pprev && pindex->nHeight + nCheckpointSpan > pindexBest->nHeight)
            pindex = pindex->pprev;
        return pindex;
    }

    // Check against synchronized checkpoint
    bool CheckSync(int nHeight)
    {
        const CBlockIndex* pindexSync = AutoSelectSyncCheckpoint();
        if (nHeight <= pindexSync->nHeight){
            return false;
        }
        return true;
    }
}
