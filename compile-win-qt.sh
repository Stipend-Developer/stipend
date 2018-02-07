#!/bin/bash
MXE_PATH=$HOME/mxe
MXE_INCLUDE_PATH=$MXE_PATH/usr/i686-w64-mingw32.static/include
MXE_LIB_PATH=$MXE_PATH/usr/i686-w64-mingw32.static/lib
SECP256K1_LIB_PATH=/usr/local/lib

cd src/leveldb
make libleveldb.a libmemenv.a
cd ../..

cd ./src/secp256k1
sudo ./autogen.sh
sudo ./configure --host=i686-w64-mingw32.static --with-bignum=no --enable-module-recovery
TARGET_OS=NATIVE_WINDOWS make CC=i686-w64-mingw32.static-g++ CXX=i686-w64-mingw32.static-g++ libsecp256k1.la libsecp256k1.so
sudo make install
cd ../..

$MXE_PATH/usr/bin/i686-w64-mingw32.static-qmake-qt5 \
	BOOST_LIB_SUFFIX=-mt \
	BOOST_THREAD_LIB_SUFFIX=_win32-mt \
	BOOST_INCLUDE_PATH=$MXE_INCLUDE_PATH \
	BOOST_LIB_PATH=$MXE_LIB_PATH \
	OPENSSL_INCLUDE_PATH=$MXE_INCLUDE_PATH/openssl \
	OPENSSL_LIB_PATH=$MXE_LIB_PATH \
	BDB_INCLUDE_PATH=$MXE_INCLUDE_PATH \
	BDB_LIB_PATH=$MXE_LIB_PATH \
	MINIUPNPC_INCLUDE_PATH=$MXE_INCLUDE_PATH \
	MINIUPNPC_LIB_PATH=$MXE_LIB_PATH \
	QMAKE_LRELEASE=$MXE_PATH/usr/i686-w64-mingw32.static/qt5/bin/lrelease stipend.pro

make -f Makefile.Release
