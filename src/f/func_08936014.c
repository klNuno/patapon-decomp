#include "common.h"

typedef struct {
    u8 pad_00[0x14C0];
    s32 unk_14C0;
    u8 pad_14C4[0x4];
    s32 unk_14C8;
} H_08936014;

typedef struct {
    u8 pad_00[0x3A0];
    H_08936014 *unk_3A0;
} W_08936014;

typedef struct {
    u8 pad_00[0x14];
    W_08936014 *unk_14;
} T08936014;

s32 *func_0885356C(void *, s32, s32, s32);
void func_08852F00(void *, s32);

void func_08936014(T08936014 *arg0, void *arg1) {
    s32 *a;
    s32 *b;
    s32 *c;

    a = func_0885356C(arg1, 0, 1, 4);
    b = func_0885356C(arg1, 1, 1, 4);
    c = func_0885356C(arg1, 2, 1, 4);
    if (arg0->unk_14 != NULL) {
        *a = arg0->unk_14->unk_3A0->unk_14C8;
        *b = 0;
        *c = arg0->unk_14->unk_3A0->unk_14C0;
    }
    func_08852F00(arg1, 0);
    func_08852F00(arg1, 0);
}
