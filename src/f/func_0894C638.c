#include "common.h"

typedef struct H_0894C638 {
    s32 unk_00;
} H_0894C638;

typedef struct F_0894C638 {
    f32 unk_00;
    f32 unk_04;
} F_0894C638;

typedef struct A_0894C638 {
    u8 pad_00[0x2018];
    u8 unk_2018[0x10];
    s32 unk_2028;
    u8 pad_202C[0x4];
    F_0894C638 unk_2030;
    F_0894C638 unk_2038;
    u8 unk_2040;
} A_0894C638;

extern const F_0894C638 D_089DD9C0[];
extern const F_0894C638 D_089DD9C8[];

void func_0894BF34(H_0894C638 *, void *);
void func_0894BF2C(H_0894C638 *, void *);
void func_0894BFB4(H_0894C638 *, void *, H_0894C638, H_0894C638);

void func_0894C638(A_0894C638 *arg0) {
    H_0894C638 r;
    H_0894C638 b;
    H_0894C638 e;

    func_0894BF34(&b, arg0->unk_2018);
    func_0894BF2C(&e, arg0->unk_2018);
    func_0894BFB4(&r, arg0->unk_2018, b, e);
    arg0->unk_2028 = 0;
    arg0->unk_2030 = D_089DD9C0[0];
    arg0->unk_2038 = D_089DD9C8[0];
    arg0->unk_2040 = 1;
}
