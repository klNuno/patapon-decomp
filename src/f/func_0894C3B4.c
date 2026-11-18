#include "common.h"

typedef struct {
    s32 unk_00;
    f32 unk_04;
    f32 unk_08;
    f32 unk_0C;
    f32 unk_10;
    f32 unk_14;
} P_0894C3B4;

typedef struct {
    u8 pad_00[0x2D];
    u8 unk_2D;
    u8 unk_2E;
    u8 pad_2F[0x1];
    u8 unk_30;
} B_0894C3B4;

typedef struct {
    B_0894C3B4 *unk_00;
    u8 pad_04[0x2014];
    u8 unk_2018[0x28];
    u8 unk_2040;
} A_0894C3B4;

typedef struct {
    s32 unk_00;
} H_0894C3B4;

H_0894C3B4 func_0894BF2C(void *);
void func_0894C4E0(void *, H_0894C3B4, P_0894C3B4 *);

void func_0894C3B4(A_0894C3B4 *arg0) {
    if (arg0->unk_2040 != 0) {
        if (arg0->unk_00->unk_2D != 0) {
            P_0894C3B4 p;

            p.unk_00 = 1;
            p.unk_04 = 0.5f;
            p.unk_08 = 1.0f;
            p.unk_14 = 1.0f;
            p.unk_0C = 0.0f;
            p.unk_10 = 0.0f;
            func_0894C4E0(arg0->unk_2018, func_0894BF2C(arg0->unk_2018), &p);
        } else if (arg0->unk_00->unk_2E != 0) {
            P_0894C3B4 p;

            p.unk_00 = 1;
            p.unk_04 = 0.5f;
            p.unk_08 = 0.6f;
            p.unk_14 = 1.0f;
            p.unk_0C = 0.0f;
            p.unk_10 = 0.0f;
            func_0894C4E0(arg0->unk_2018, func_0894BF2C(arg0->unk_2018), &p);
        } else if (arg0->unk_00->unk_30 != 0) {
            P_0894C3B4 p;

            p.unk_00 = 1;
            p.unk_04 = 0.5f;
            p.unk_08 = 0.6f;
            p.unk_14 = 0.8f;
            p.unk_0C = 0.0f;
            p.unk_10 = 0.0f;
            func_0894C4E0(arg0->unk_2018, func_0894BF2C(arg0->unk_2018), &p);
        }
    }
}
