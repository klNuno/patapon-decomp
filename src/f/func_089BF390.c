#include "common.h"

typedef struct V_089BF390 {
    f32 unk_00;
    f32 unk_04;
    f32 unk_08;
    f32 unk_0C;
} V_089BF390;

typedef struct A_089BF390 {
    u8 pad_00[0x14];
    u8 unk_14[0x304 - 0x14];
    V_089BF390 unk_304;
    u8 pad_314[0x334 - 0x314];
    s32 unk_334;
    u8 unk_338[4];
} A_089BF390;

extern u8 D_08A08FD0[];

s32 func_088586E8(void);
s32 func_089B53D8(s32);
V_089BF390 func_0897A220(s32, s32, s32, s32, s32);
void func_088D6E70(void *, V_089BF390 *);
s32 func_0888B03C(s32 *, void *);
void func_089C6364(void *, s32);

void func_089BF390(A_089BF390 *arg0, s32 arg1) {
    s32 k;
    s32 b;

    b = func_089B53D8(func_088586E8()) + 0xBB8;
    k = arg1;
    arg0->unk_304 = func_0897A220(b, 0x35, 0, 0, 0);
    func_088D6E70(arg0->unk_14, &arg0->unk_304);
    arg0->unk_334 = func_0888B03C(&k, D_08A08FD0);
    func_089C6364(arg0->unk_338, arg0->unk_334);
}
