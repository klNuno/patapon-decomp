#include "common.h"

extern "C" {

struct Obj_089377D0 {
    u8 pad_00[8];
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
    virtual void v16();
    virtual void v17();
    virtual void v18();
    virtual void v19();
    virtual void v20();
    u8 pad_0C[0x4C];
    void *unk_58;
    u8 pad_5C[0x20];
    void *unk_7C;
    u8 pad_80[0x4C];
    void *unk_CC;
    u8 pad_D0[0x2A0];
    void *unk_370;
};

void func_0880416C(void *);
void func_089676CC(void *, s32);
extern u8 D_08A47138[];
extern u8 D_08A47154[];
extern u8 D_08A4716C[];
extern u8 D_08A4717C[];
extern u8 D_08A471C8[];

Obj_089377D0 *func_089377D0(Obj_089377D0 *arg0, s16 arg1) {
    if (arg0 != NULL) {
        *(void **)&arg0->pad_00[8] = D_08A47138;
        arg0->unk_58 = D_08A47154;
        arg0->unk_7C = D_08A4716C;
        arg0->unk_CC = D_08A4717C;
        arg0->unk_370 = D_08A471C8;
        arg0->v20();
        func_089676CC(arg0, 0);
        if (arg1 > 0) {
            func_0880416C(arg0);
        }
    }
    return arg0;
}

}
