#include "common.h"

typedef struct {
    void *unk_00;
    u8 unk_04[0x3004];
    u8 *unk_3008;
    s32 unk_300C;
    s32 unk_3010;
    s32 unk_3014;
    s32 unk_3018;
    s32 unk_301C;
} A_088BC314;

typedef struct {
    s32 unk_00;
    s32 unk_04;
    s32 unk_08;
    u8 unk_0C[0x14C - 0xC];
    u8 unk_14C[0x150 - 0x14C];
    u8 unk_150[0x3970 - 0x150];
    u8 unk_3970[0x3990 - 0x3970];
    u8 unk_3990[0x39B8 - 0x3990];
    u8 unk_39B8[0x3DD0 - 0x39B8];
    u8 unk_3DD0[0x4B70 - 0x3DD0];
    A_088BC314 unk_4B70;
    u8 unk_7B90[0x7D40 - 0x7B90];
    u8 unk_7D40[0x80E0 - 0x7D40];
    u8 unk_80E0[0x8100 - 0x80E0];
    void *unk_8100;
} S_088BC314;

void func_088BA294(void *, s32, void *);
void func_088B9FD0(void *);
void func_08990D20(void *, s32);
void func_0885A928(void *);
void func_088D3258(void *, s32);
void func_088D2BA4(void *, s32, void *, void *);
void func_08889B08(void *, s32, void *, void *, void *);
void func_088D1F18(void *, s32, s32);
void func_088CEEE8(void *);
void func_0891DFA0(void *);
extern u8 D_08A45E88[];
extern u8 D_08A44C14[];
extern u8 D_08A45EA4[];

S_088BC314 *func_088BC314(S_088BC314 *arg0, s32 arg1, s32 arg2, void *arg3) {
    A_088BC314 *a;

    arg0->unk_8100 = D_08A45E88;
    arg0->unk_00 = arg1;
    arg0->unk_04 = -1;
    arg0->unk_08 = 0;
    func_088BA294(arg0->unk_0C, arg1, arg0->unk_80E0);
    func_088B9FD0(arg0->unk_14C);
    func_08990D20(arg0->unk_150, arg1);
    func_0885A928(arg0->unk_3970);
    func_088D3258(arg0->unk_3990, arg1);
    func_088D2BA4(arg0->unk_39B8, arg1, arg0->unk_3990, arg0->unk_7B90);
    func_08889B08(arg0->unk_3DD0, arg1, arg0->unk_3990, arg0->unk_7B90, arg3);
    arg0->unk_4B70.unk_00 = D_08A44C14;
    a = &arg0->unk_4B70;
    arg0->unk_4B70.unk_00 = D_08A45EA4;
    a->unk_3008 = (u8 *)(((u32)a->unk_04 & 3) + (u32)a + 4);
    a->unk_300C = 0;
    a->unk_3010 = 0;
    a->unk_3014 = 0;
    a->unk_3018 = 0;
    a->unk_301C = 0;
    func_088D1F18(arg0->unk_7B90, arg1, arg2);
    func_088CEEE8(arg0->unk_7D40);
    func_0891DFA0(arg0->unk_80E0);
    return arg0;
}
