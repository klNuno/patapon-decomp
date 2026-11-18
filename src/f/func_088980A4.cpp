#include "common.h"

extern "C" {

class C_088980A4 {
public:
    u8 pad_00[0x8];
    virtual void v08();
    virtual void v0C();
    virtual void v10();
    virtual void v14();
    virtual void v18();
    virtual void v1C();
    virtual void v20();
    virtual void v24();
    virtual void v28();
    virtual void v2C();
    virtual void v30();
    virtual void v34();
    virtual void v38();
    virtual void v3C();
    virtual void v40();
    virtual void v44();
    virtual void v48();
    virtual void v4C();
    virtual void v50();
    virtual void v54();
    virtual void v58();
    virtual void v5C();
    virtual void v60();
    virtual void v64();
    virtual void v68();
    virtual void v6C();
    virtual void v70();
    virtual void v74();
    virtual void v78();
    virtual void v7C(s32);
    u8 pad_0C[0x368];
    s32 unk_374;
    u8 unk_378[4];
};

s32 func_0893D40C(void *);
s32 func_0892A498(s32, s32, s32, s32, s32, s32, f32);

s32 func_088980A4(C_088980A4 *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5) {
    if (arg0->unk_374 != 0) {
        s32 r = func_0892A498(func_0893D40C(arg0->unk_378), arg1, arg2, arg3, arg5, 0, 0.0f);
        if (arg4 != 0) {
            arg0->v7C(r);
        }
    }
    return 1;
}

}
