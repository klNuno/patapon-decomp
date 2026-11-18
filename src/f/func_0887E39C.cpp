#include "common.h"

extern "C" {

class A_0887E39C {
public:
    virtual void v08();
    virtual void v0C();
    virtual void v10(void *);
};

typedef struct T_0887E39C {
    u8 unk_00[0x10];
    s32 unk_10;
    s32 unk_14;
    s32 unk_18;
    s32 unk_1C;
    u8 unk_20[0x30];
    u8 unk_50[0x30];
    u8 unk_80[8];
    u8 unk_88[8];
    s32 unk_90;
    u8 unk_94;
} T_0887E39C;

typedef struct {
    A_0887E39C *unk_00;
    u8 unk_04;
    u8 pad_05[0x1B];
    T_0887E39C *unk_20;
    A_0887E39C *unk_24;
    u8 unk_28[0xEC - 0x28];
    void *unk_EC;
    u8 pad_F0[4];
    void *unk_F4;
} S_0887E39C;

s32 sceCtrlSetSamplingMode(s32);
s32 sceCtrlSetSamplingCycle(s32);
s32 sceCtrlSetIdleCancelThreshold(s32, s32);
void func_0881F5C0(void *, s32, s32);
void *func_08827A50(s32, s32);

static inline void init(T_0887E39C *arg0) {
    sceCtrlSetSamplingMode(1);
    sceCtrlSetSamplingCycle(0);
    sceCtrlSetIdleCancelThreshold(-1, -1);
    arg0->unk_10 = 0;
    arg0->unk_14 = 0;
    arg0->unk_18 = 0;
    arg0->unk_1C = 0;
    func_0881F5C0(arg0->unk_00, 0, 0x10);
    func_0881F5C0(arg0->unk_20, 0, 0x30);
    func_0881F5C0(arg0->unk_50, 0, 0x30);
    func_0881F5C0(arg0->unk_80, 0, 8);
    func_0881F5C0(arg0->unk_88, 0, 8);
    arg0->unk_90 = 0;
}

void func_0887E39C(S_0887E39C *arg0) {
    A_0887E39C *a;
    T_0887E39C *p;

    if (arg0->unk_04 != 0) {
        return;
    }
    a = arg0->unk_00;
    p = (T_0887E39C *)func_08827A50(0x98, (s32)a);
    if (p != NULL) {
        p->unk_94 = 0;
        init(p);
    }
    if (arg0->unk_20 != p) {
        if (arg0->unk_20 != NULL) {
            arg0->unk_24->v10(arg0->unk_20);
        }
        arg0->unk_20 = p;
        arg0->unk_24 = a;
    }
    init(arg0->unk_20);
    arg0->unk_EC = arg0->unk_28;
    arg0->unk_F4 = arg0->unk_28;
    arg0->unk_04 = 1;
}

}
