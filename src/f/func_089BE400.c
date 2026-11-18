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
    u8 unk_338[0xAC8];
    s32 unk_E00;
} S0;

s32 func_088586E8(void);
u8 *func_089B53D8(s32);
V4 func_0897A220(u8 *, s32, s32, s32, s32);
void func_088D6E70(void *, V4 *);
s32 func_0888B03C(s32 *, char *);
void func_089C6364(void *, s32);
extern char D_08A08FC4[];

void func_089BE400(S0 *arg0, s32 arg1) {
    s32 k;
    u8 *m;

    m = func_089B53D8(func_088586E8());
    k = arg1;
    arg0->unk_304 = func_0897A220(m + 0xBB8, 0x35, 0, 0, 0);
    func_088D6E70(arg0->unk_14, &arg0->unk_304);
    arg0->unk_334 = func_0888B03C(&k, D_08A08FC4);
    func_089C6364(arg0->unk_338, arg0->unk_334);
    arg0->unk_E00 = 0;
}
