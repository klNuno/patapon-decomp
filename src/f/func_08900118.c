#include "common.h"

typedef struct W_08900118 {
    u8 pad_00[0x506F0];
    u8 unk_506F0[4];
} W_08900118;

typedef struct A_08900118 {
    u8 pad_00[0x10];
    W_08900118 *unk_10;
} A_08900118;

void func_08852F00(s32, s32);
s32 *func_0885356C(s32, s32, s32, s32);
s32 func_088C648C(void *);
void func_088F462C(s32, f32);

void func_08900118(A_08900118 *arg0, s32 arg1) {
    if (*func_0885356C(arg1, 0, 1, 4) == 1) {
        func_088F462C(func_088C648C(arg0->unk_10->unk_506F0), 25.0f);
    } else {
        func_088F462C(func_088C648C(arg0->unk_10->unk_506F0), 0.0f);
    }
    func_08852F00(arg1, 0);
}
