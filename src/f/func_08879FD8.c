#include "common.h"

typedef struct {
    u8 pad_00[0x4];
    s32 unk_04;
    s32 unk_08;
    u8 pad_0C[0x14];
} E_08879FD8;

typedef struct {
    E_08879FD8 *unk_00;
    s32 unk_04;
} V_08879FD8;

typedef struct {
    u8 pad_00[0x104];
    V_08879FD8 unk_104;
} B_08879FD8;

typedef struct {
    u8 pad_00[0xAC];
    s32 unk_AC;
    u8 pad_B0[0xFC];
    s32 unk_1AC;
    u8 pad_1B0[0x38];
    f32 unk_1E8;
    f32 unk_1EC;
    u8 pad_1F0[0xF8];
    f32 unk_2E8;
    f32 unk_2EC;
    u8 pad_2F0[0x30];
} C_08879FD8;

typedef struct {
    u32 unk_00;
    u8 pad_04[0xE4];
    f32 unk_E8;
    f32 unk_EC;
    u8 pad_F0[0x20];
    u8 unk_110;
    u8 unk_111;
    u8 pad_112[0xE];
    C_08879FD8 unk_120[8];
} A_08879FD8;

extern s32 D_089DDAA8[];

s32 func_08879B80(E_08879FD8 *);
void func_0887A4BC(C_08879FD8 *, s32);

void func_08879FD8(A_08879FD8 *arg0, B_08879FD8 *arg1) {
    E_08879FD8 *p;
    V_08879FD8 *v;
    s32 *sz;
    C_08879FD8 *c;
    s32 r;
    u32 i;

    arg0->unk_00 = 0;
    p = arg1->unk_104.unk_00;
    if ((u32)p != (u32)(p + arg1->unk_104.unk_04)) {
        sz = &arg1->unk_104.unk_04;
        v = &arg1->unk_104;
        do {
            r = func_08879B80(p);
            i = arg0->unk_00 & 7;
            arg0->unk_00 = i;
            arg0->unk_120[i].unk_AC = r;
            c = &arg0->unk_120[i];
            if (p->unk_04 == 4) {
                c->unk_1AC = r < 0 ? -1 : D_089DDAA8[(u32)r % 12];
                c->unk_1E8 = 1.0f;
                c->unk_1EC = 1.0f;
                func_0887A4BC(c, 1);
            } else {
                c->unk_1AC = -1;
                func_0887A4BC(c, 1);
            }
            c->unk_1E8 = 1.0f;
            c->unk_1EC = 1.0f;
            arg0->unk_E8 = 1.0f;
            arg0->unk_EC = 1.0f;
            c->unk_2E8 = 1.0f;
            c->unk_2EC = 1.0f;
            arg0->unk_110 = 0;
            arg0->unk_111 = 0;
            arg0->unk_00 += p->unk_08;
            p++;
        } while (p != v->unk_00 + *sz);
    }
}
