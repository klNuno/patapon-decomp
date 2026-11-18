#include "common.h"

typedef struct {
    s32 unk_00;
    u8 unk_04;
    u8 pad_05[0xB];
    s32 unk_10;
    u8 unk_14[0x304 - 0x14];
    s32 unk_304[4];
    s32 unk_314;
    s32 unk_318;
    u8 pad_31C[8];
    s32 unk_324;
    s32 unk_328;
    s32 unk_32C;
    u8 unk_330;
    u8 unk_331;
    u8 pad_332[6];
    u8 unk_338[4];
} A;

extern s32 func_088D6974(s32);
void func_0880406C(void *, void *, void *, s32, s32);
void func_089BD764(void);
void func_089BD6F8(void);

A *func_089BF13C(A *arg0, s32 arg1, s32 arg2) {
    s32 *p;

    arg0->unk_00 = arg1;
    arg0->unk_04 = 1;
    arg0->unk_10 = arg2;
    func_088D6974((s32)arg0->unk_14);
    p = arg0->unk_304;
    do {
        *p = -1;
        p++;
    } while (p < arg0->unk_304 + 4);
    arg0->unk_314 = -1;
    arg0->unk_318 = 0;
    arg0->unk_324 = 0;
    arg0->unk_328 = 0;
    arg0->unk_32C = 0;
    arg0->unk_330 = 0;
    arg0->unk_331 = 0;
    func_0880406C(arg0->unk_338, func_089BD764, func_089BD6F8, 0x4C, 0x20);
    return arg0;
}
