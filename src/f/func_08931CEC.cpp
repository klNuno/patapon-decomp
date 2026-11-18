#include "common.h"

extern "C" {

class V_08931CEC {
public:
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual void v6();
    virtual void v7();
    virtual s32 v8(s32);
};

typedef struct {
    s32 unk_00;
    u8 pad_04[0xC];
} E_08931CEC;

typedef struct {
    u8 pad_00[0x30];
    E_08931CEC unk_30[1];
} H_08931CEC;

typedef struct {
    u8 pad_00[0x2C];
    V_08931CEC *unk_2C;
    H_08931CEC *unk_30;
    u8 pad_34[0xC];
    u8 unk_40[0x10];
    s32 unk_50;
} T_08931CEC;

s32 func_088586E8(void);
s32 func_089B5470(s32, s32);
s32 func_08932074(T_08931CEC *, s32);
void func_088C53BC(s32, s32, void *, s32, s32, s32, void *, s32);

void func_08931CEC(s32 arg0, T_08931CEC *arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, void *arg6) {
    void *p;
    s32 a;

    if (arg6 == NULL) {
        arg6 = arg1->unk_40;
    }
    p = arg1->unk_30->unk_30[arg2].unk_00 == 0 ? NULL : (u8 *)arg1->unk_30 + arg1->unk_30->unk_30[arg2].unk_00;
    a = func_089B5470(func_088586E8(), arg1->unk_50);
    func_088C53BC(arg0, a, p, arg1->unk_2C->v8(func_08932074(arg1, arg2)), arg3, arg4, arg6, arg5);
}

}
