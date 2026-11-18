#include "common.h"

typedef struct {
    f32 unk_00;
    f32 unk_04;
    f32 unk_08;
    f32 unk_0C;
} V4;

typedef struct {
    u8 pad_00[0x14];
    u8 unk_14[0x2F0];
    V4 unk_304;
    u8 pad_314[0x20];
    s32 unk_334;
    u8 unk_338[0xAA8];
    s32 unk_DE0;
    s32 unk_DE4;
    s32 unk_DE8;
    s32 unk_DEC;
    u8 pad_DF0[4];
    s32 unk_DF4;
    s32 unk_DF8;
    s32 unk_DFC;
    u8 pad_E00[8];
    u8 unk_E08;
} S0;

s32 func_088586E8(void);
u8 *func_089B53D8(s32);
V4 func_0897A220(u8 *, s32, s32, s32, s32);
void func_088D6E70(void *, V4 *);
s32 func_0888B03C(s32 *, char *);
void func_089C6364(void *, s32);
extern char D_08A08F90[];

void func_089BD878(S0 *arg0, s32 arg1) {
    s32 k;
    u8 *m;

    m = func_089B53D8(func_088586E8());
    k = arg1;
    arg0->unk_304 = func_0897A220(m + 0xBB8, 0x35, 0, 0, 0);
    func_088D6E70(arg0->unk_14, &arg0->unk_304);
    arg0->unk_334 = func_0888B03C(&k, D_08A08F90);
    func_089C6364(arg0->unk_338, arg0->unk_334);
    arg0->unk_DE0 = 0;
    arg0->unk_DE4 = 0;
    arg0->unk_DE8 = 0;
    arg0->unk_DEC = 0;
    arg0->unk_DF8 = 0;
    arg0->unk_DFC = 0;
    arg0->unk_DF4 = 0;
    arg0->unk_E08 = 0;
}
