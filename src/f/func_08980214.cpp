#include "common.h"

extern "C" {

class C_08980214 {
public:
    u8 pad_00[8];
    virtual s32 v08();
    virtual s32 v0C();
    virtual s32 v10();
    virtual s32 v14();
    virtual s32 v18();
    virtual s32 v1C();
    virtual s32 v20();
    virtual s32 v24();
    virtual s32 v28();
    virtual s32 v2C();
};

s32 func_08980214(C_08980214 *arg0, u32 *arg1) {
    switch (*arg1) {
    case 0:
        return arg0->v0C();
    case 1:
        return arg0->v10();
    case 2:
        return arg0->v14();
    case 6:
        return arg0->v18();
    case 7:
        return arg0->v1C();
    case 8:
        return arg0->v20();
    case 3:
        return arg0->v24();
    case 9:
        return arg0->v28();
    case 10:
        return arg0->v2C();
    case 4:
    case 5:
    default:
        return 0;
    }
}

}
