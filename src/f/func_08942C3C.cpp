#include "common.h"
extern "C" {
struct T {
    u8 pad_00[0x50];
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
    virtual void v21();
    virtual void v22();
};
struct U : T {
    u8 pad_54[0x167C];
    void *unk_16D0;
    u8 pad_16D4[4];
    s32 unk_16D8;
    s32 unk_16DC;
    u8 unk_16E0[4];
};
extern void func_0886E47C(void *, s32, void *, s32, s32);
extern void func_0886F33C(void *, s32, s32);
extern void func_08941CC8(void *, s32, void *);
extern void func_08945234(void *, void *, s32, s32);
extern u8 D_08A47554[];
extern u8 D_08A47598[];
U *func_08942C3C(U *arg0, s32 arg1, void *arg2) {
    func_0886E47C(arg0, arg1, arg2, 0, -1);
    func_08941CC8(arg0->pad_00 + 0x1510, arg1, arg0->unk_16E0);
    *(void **)&arg0->pad_00[0x50] = D_08A47554;
    arg0->unk_16D0 = D_08A47598;
    arg0->unk_16D8 = 0;
    arg0->unk_16DC = -1;
    func_08945234(arg0->unk_16E0, arg0, arg1, 8);
    func_0886F33C(arg0, 0, 1);
    arg0->v22();
    return arg0;
}
}
