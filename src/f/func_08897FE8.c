#include "common.h"

typedef struct {
    f32 unk_00;
    f32 unk_04;
    f32 unk_08;
    f32 unk_0C;
} V4;

typedef struct {
    u8 pad_00[0x90];
    V4 unk_90;
    V4 unk_A0;
    V4 unk_B0;
} S2;

typedef struct {
    u8 pad_00[0x114];
    s32 unk_114;
    u8 pad_118[0x288];
    s32 unk_3A0;
    u8 unk_3A4;
    u8 pad_3A5[0x94B];
    S2 unk_CF0;
} S0;

typedef struct {
    u8 pad_00[4];
    u8 unk_04;
    u8 pad_05;
    u8 unk_06;
} S1;

s32 func_088F5BA0(s32);
void func_0888FBF0(s32);
void func_08854F60(f32, V4 *, V4 *);

void func_08897FE8(S0 *arg0, S1 *arg1) {
    S2 *p;

    if (arg1 != NULL && arg0->unk_3A4 != 0 && func_088F5BA0(arg0->unk_114) == 0) {
        if (arg1->unk_04 != 0) {
            if (arg0->unk_3A0 != 0) {
                func_0888FBF0(arg0->unk_3A0);
            }
        }
        if (arg1->unk_06 != 0) {
            p = &arg0->unk_CF0;
            if (p != NULL) {
                p->unk_90.unk_00 = p->unk_A0.unk_00;
                p->unk_90.unk_04 = p->unk_A0.unk_04;
                p->unk_90.unk_08 = p->unk_A0.unk_08;
                p->unk_90.unk_0C = p->unk_A0.unk_0C;
                func_08854F60(0.5f, &p->unk_B0, &p->unk_B0);
                p->unk_B0.unk_0C = 0.0f;
            }
        }
    }
}
