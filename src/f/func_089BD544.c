#include "common.h"

typedef struct {
    u8 pad_00[0x4C];
} E_089BD544;

typedef struct {
    s32 unk_00;
    u8 unk_04;
    u8 pad_05[0xB];
    s32 unk_10;
    u8 unk_14[0x2F0];
    s32 unk_304[4];
    s32 unk_314;
    s32 unk_318;
    u8 pad_31C[0x8];
    s32 unk_324;
    s32 unk_328;
    s32 unk_32C;
    u8 unk_330;
    u8 unk_331;
    u8 pad_332[0x6];
    E_089BD544 unk_338[0x20];
    u8 pad_CB8[0x138];
    s32 unk_DF0;
    s32 unk_DF4;
    s32 unk_DF8;
    s32 unk_DFC;
    u8 pad_E00[0x8];
    u8 unk_E08;
} S_089BD544;

void func_088D6974(void *);
void func_0880406C(void *, void *, void *, s32, s32);
void func_089BD764(void);
void func_089BD6F8(void);

S_089BD544 *func_089BD544(S_089BD544 *arg0, s32 arg1, s32 arg2) {
    s32 *p;

    arg0->unk_00 = arg1;
    arg0->unk_04 = 1;
    arg0->unk_10 = arg2;
    func_088D6974(arg0->unk_14);
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
    func_0880406C(arg0->unk_338, (void *)func_089BD764, (void *)func_089BD6F8, 0x4C, 0x20);
    arg0->unk_DF0 = 0;
    arg0->unk_DF4 = 0;
    arg0->unk_DF8 = 0;
    arg0->unk_DFC = 0;
    arg0->unk_E08 = 0;
    return arg0;
}
