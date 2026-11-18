#include "common.h"

extern "C" {

void func_088D6974(void *);
extern f32 D_08A05C50[];
extern f32 D_08A05C58[];

typedef struct {
    f32 unk_00[3];
} A_08980348;

struct V_08980348 {
    f32 unk_00;
    f32 unk_04;
    f32 unk_08;
};

typedef struct S_08980348 {
    u8 unk_00;
    u8 pad_01[3];
    s32 unk_04;
    u8 unk_08[0xA04];
    u8 *unk_A0C;
    s32 unk_A10;
    u8 *unk_A14;
    u8 pad_A18[0x30];
    s32 unk_A48;
    u8 unk_A4C[0x2E8];
    s32 unk_D34[4];
    u8 pad_D44[0xC];
    s32 unk_D50;
    s32 unk_D54;
    s32 unk_D58;
    u8 pad_D5C[8];
    s32 unk_D64;
    s32 unk_D68;
    s32 unk_D6C;
    u8 unk_D70;
    u8 unk_D71;
    u8 pad_D72[0x12];
    struct S_08980348 *unk_D84;
    V_08980348 unk_D88;
    u8 unk_D94;
    u8 pad_D95[3];
    s32 unk_D98;
    s32 unk_D9C;
} S_08980348;

S_08980348 *func_08980348(S_08980348 *arg0, s32 arg1, s32 arg2) {
    s32 *p;
    A_08980348 t;

    arg0->unk_00 = 1;
    arg0->unk_04 = arg1;
    arg0->unk_A0C = (u8 *)(((u32)arg0->unk_08 & 3) + (u32)arg0 + 0x08);
    arg0->unk_A10 = 0;
    arg0->unk_A48 = arg2;
    func_088D6974(arg0->unk_A4C);
    p = arg0->unk_D34;
    do {
        *p = -1;
        p++;
    } while (p < arg0->unk_D34 + 4);
    arg0->unk_D50 = 0;
    arg0->unk_D54 = -1;
    arg0->unk_D58 = 0;
    arg0->unk_D64 = 0;
    arg0->unk_D68 = 0;
    arg0->unk_D6C = 0;
    arg0->unk_D70 = 0;
    arg0->unk_D71 = 0;
    t.unk_00[0] = D_08A05C50[0];
    t.unk_00[1] = D_08A05C50[1];
    t.unk_00[2] = D_08A05C58[0];
    arg0->unk_D84 = arg0;
    *(A_08980348 *)&arg0->unk_D88 = t;
    arg0->unk_D94 = 0;
    arg0->unk_D98 = 0;
    arg0->unk_D9C = 0;
    arg0->unk_A14 = arg0->unk_A0C + arg0->unk_A10 * 0x50;
    arg0->unk_D94 = 0;
    return arg0;
}

}
