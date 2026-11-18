#include "common.h"

typedef struct {
    u8 pad_00[0x20];
} T08952660_E;

typedef struct {
    T08952660_E *unk_00;
    s32 unk_04;
} T08952660_V;

typedef struct {
    u8 pad_00[0x1E0];
    s32 unk_1E0;
    u8 pad_1E4[0x10C];
    T08952660_V unk_2F0;
    u8 pad_2F8[0x14];
    u8 unk_30C[0x884];
    u8 unk_B90[0x1A34];
    s32 unk_25C4;
    u8 pad_25C8[4];
    u8 unk_25CC[0x1C];
    u8 unk_25E8;
    u8 pad_25E9[3];
    s32 unk_25EC;
    s32 unk_25F0;
    u8 unk_25F4;
} T08952660;

void func_08879610(void *, s32);
void func_0887A12C(void *, s32);
void func_088A3D34(void *, s32);

void func_08952660(T08952660 *arg0, s32 arg1) {
    T08952660_E *p;
    T08952660_V *v;

    arg0->unk_1E0 = 3;
    p = arg0->unk_2F0.unk_00;
    v = &arg0->unk_2F0;
    if ((u32)p != (u32)(p + arg0->unk_2F0.unk_04)) {
        do {
            p++;
        } while (p != v->unk_00 + arg0->unk_2F0.unk_04);
    }
    arg0->unk_2F0.unk_04 = 0;
    func_0887A12C(arg0->unk_B90, 0);
    arg0->unk_25F0 = -1;
    arg0->unk_25EC = 0;
    arg0->unk_25C4 = 0;
    arg0->unk_25E8 = 0;
    arg0->unk_25F4 = 0;
    func_08879610(arg0->unk_30C, 0);
    func_088A3D34(arg0->unk_25CC, arg1);
}
