#include "common.h"

typedef struct {
    s32 unk_00;
    u8 unk_04;
    u8 pad_05[0xB];
    s32 unk_10;
    u8 unk_14[0x30C - 0x14];
    s32 unk_30C[4];
    s32 unk_31C;
    s32 unk_320;
    u8 pad_324[8];
    s32 unk_32C;
    s32 unk_330;
    s32 unk_334;
    u8 unk_338;
    u8 unk_339;
    u8 pad_33A[6];
    u8 unk_340[0xDF8 - 0x340];
    s32 unk_DF8;
    s32 unk_DFC;
    s32 unk_E00;
    s32 unk_E04;
} A;

extern s32 func_088D6974(s32);
void func_0880406C(void *, void *, void *, s32, s32);
void func_089BD764(void);
void func_089BD6F8(void);

A *func_089BFA24(A *arg0, s32 arg1, s32 arg2) {
    s32 *p;

    arg0->unk_00 = arg1;
    arg0->unk_04 = 1;
    arg0->unk_10 = arg2;
    func_088D6974((s32)arg0->unk_14);
    p = arg0->unk_30C;
    do {
        *p = -1;
        p++;
    } while (p < arg0->unk_30C + 4);
    arg0->unk_31C = -1;
    arg0->unk_320 = 0;
    arg0->unk_32C = 0;
    arg0->unk_330 = 0;
    arg0->unk_334 = 0;
    arg0->unk_338 = 0;
    arg0->unk_339 = 0;
    func_0880406C(arg0->unk_340, func_089BD764, func_089BD6F8, 0x4C, 0x20);
    arg0->unk_DF8 = 0;
    arg0->unk_DFC = 0;
    arg0->unk_E00 = 0;
    arg0->unk_E04 = 0;
    return arg0;
}
