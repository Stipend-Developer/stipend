#ifndef COINCONTROL_H
#define COINCONTROL_H

#include "core.h"

/** Coin Control Features. */
class CCoinControl
{
public:
    CTxDestination destChange;
    bool useDarkSend;
    bool useInstantX;
    bool fSplitBlock;
    int nSplitBlock;

    CCoinControl()
    {
        SetNull();
    }

    void SetNull()
    {
        destChange = CNoDestination();
        setSelected.clear();
        useInstantX = false;
        useDarkSend = true;
        fSplitBlock = false;
        nSplitBlock = 1;
    }

    bool HasSelected() const
    {
        return (setSelected.size() > 0);
    }

    bool IsSelected(const uint256& hash, unsigned int n) const
    {
        COutPoint outpt(hash, n);
        return (setSelected.count(outpt) > 0);
    }

    void Select(COutPoint& output)
    {
        setSelected.insert(output);
    }

    void UnSelect(COutPoint& output)
    {
        setSelected.erase(output);
    }

    void UnSelectAll()
    {
        setSelected.clear();
    }

    void ListSelected(std::vector<COutPoint>& vOutpoints)
    {
        vOutpoints.assign(setSelected.begin(), setSelected.end());
    }

private:
    std::set<COutPoint> setSelected;

};

#endif // COINCONTROL_H
