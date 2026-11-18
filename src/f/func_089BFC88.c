#include "common.h"

typedef struct {
    f32 unk_00;
    f32 unk_04;
    f32 unk_08;
    f32 unk_0C;
} V4;

typedef struct {
    u8 pad_00[0x14];
    u8 unk_14[0x2E8];
    s32 unk_2FC;
    s32 unk_300;
    s32 unk_304;
    s32 unk_308;
    V4 unk_30C;
    u8 pad_31C[0x20];
    s32 unk_33C;
    u8 unk_340[0xAA8];
    s32 unk_DE8;
    s32 unk_DEC;
    s32 unk_DF0;
    s32 unk_DF4;
    u8 pad_DF8[4];
    s32 unk_DFC;
    s32 unk_E00;
    s32 unk_E04;
} T;

s32 func_088586E8(void);
u8 *func_089B53D8(s32);
s32 func_08878520(void *, s32);
V4 func_0897A220(u8 *, s32, s32, s32, s32);
void func_088D6E70(void *, V4 *);
s32 func_0888B03C(s32 *, char *);
void func_089C6364(void *, s32);
extern char D_08A08FE0[];

void func_089BFC88(T *arg0, s32 arg1) {
    s32 k;
    u8 *a;
    u8 *b;

    a = func_089B53D8(func_088586E8());
    b = func_089B53D8(func_088586E8());
    k = arg1;
    arg0->unk_2FC = 0;
    arg0->unk_2FC = func_08878520(a, 6);
    arg0->unk_300 = func_08878520(a, 7);
    arg0->unk_304 = func_08878520(a, 8);
    arg0->unk_308 = func_08878520(a, 9);
    arg0->unk_30C = func_0897A220(b + 0xBB8, 0x35, 0, 0, 0);
    func_088D6E70(arg0->unk_14, &arg0->unk_30C);
    arg0->unk_33C = func_0888B03C(&k, D_08A08FE0);
    func_089C6364(arg0->unk_340, arg0->unk_33C);
    arg0->unk_DE8 = 0;
    arg0->unk_DEC = 0;
    arg0->unk_DF0 = 0;
    arg0->unk_DF4 = 0;
    arg0->unk_E00 = 0;
    arg0->unk_E04 = 0;
    arg0->unk_DFC = 0;
}
