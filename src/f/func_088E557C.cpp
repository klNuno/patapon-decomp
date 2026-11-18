#include "common.h"

extern "C" {

struct A_088E557C {
    u8 pad_00[0x10];
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual void v6();
    virtual void v7();
    virtual void v8();
    virtual void v9();
    virtual void v10();
    virtual void v11();
    virtual void v12();
    virtual void v13();
    virtual void v14();
    virtual void v15();
    virtual s32 v16(s32);
};

typedef struct {
    u8 pad_00[0x2AC];
    s32 unk_2AC;
} Obj_088E557C;

extern s32 D_089FC6EC[];

s32 func_088E557C(Obj_088E557C *arg0, u32 arg1) {
    s32 ret;

    ret = (*(A_088E557C **)((u8 *)arg0 + arg0->unk_2AC * 0x90 + 0x130))->v16(D_089FC6EC[arg1]);
    if (ret < 0) {
        ret = (*(A_088E557C **)((u8 *)arg0 + arg0->unk_2AC * 0x90 + 0x130))->v16(D_089FC6EC[(arg1 / 4) * 4]);
        if (ret < 0) {
            ret = 0;
        }
    }
    return ret;
}

}
