#!/bin/sh

# Let's compile Stipend daemon


chmod 755 src/leveldb/build_detect_platform
chmod 755 src/secp256k1/autogen.sh
cd src/leveldb
make libleveldb.a libmemenv.a
cd ..
make -f makefile.unix
strip stipendd
