#include "common.h"

typedef struct {
    s32 unk_00;
    s32 unk_04;
} P_089397E4;

typedef struct {
    u8 pad_00[0x10];
} D_089397E4;

typedef struct {
    u8 pad_00[0x8];
    f32 unk_08;
    u8 pad_0C[0x38];
    f32 unk_44;
    u8 unk_48;
    u8 pad_49[3];
    s32 unk_4C;
    u8 unk_50;
    u8 pad_51[0x227];
    u8 unk_278[0x10];
    s32 unk_288;
    u8 unk_28C;
} A_089397E4;

extern void func_0893956C(void *);
extern void func_0893996C(P_089397E4 *, D_089397E4 *, s32);
extern void func_089398D4(void *, P_089397E4 *);
extern D_089397E4 D_089E85B8[];
extern D_089397E4 D_089E85D8[];

void func_089397E4(A_089397E4 *arg0, s32 arg1) {
    u32 i;
    u32 j;

    arg0->unk_48 = 1;
    arg0->unk_50 = 0;
    arg0->unk_4C = arg1;
    if (arg1 == 0) {
        P_089397E4 a;

        arg0->unk_28C = 1;
        arg0->unk_44 = 0.0f;
        arg0->unk_08 = 1.0f;
        func_0893956C(arg0->unk_278);
        arg0->unk_288 = 0;
        for (i = 0; i < 2; i++) {
            func_0893996C(&a, &D_089E85B8[i], 0);
            func_089398D4(arg0->unk_278, &a);
        }
    } else {
        P_089397E4 b;

        arg0->unk_44 = 1.0f;
        arg0->unk_08 = 0.0f;
        func_0893956C(arg0->unk_278);
        arg0->unk_288 = 0;
        for (j = 0; j < 3; j++) {
            func_0893996C(&b, &D_089E85D8[j], 0);
            func_089398D4(arg0->unk_278, &b);
        }
    }
}
