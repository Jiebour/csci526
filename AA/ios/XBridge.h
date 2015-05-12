#ifndef xbridge_XBridgeViewController_h
#define xbridge_XBridgeViewController_h

#include "cocos2d.h"

class XBridge {

public:
    static void doSth();
    static void clearmy(bool animate);
    static int getCurMap();
    static void setCurMap(int cur);
    static void tobackground();
    static void tofront();
    static void startGameWithMap();
};

#endif
