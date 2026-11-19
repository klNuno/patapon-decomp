#include "common.h"

typedef struct S_089C97B8 {
    u8 pad_00[0x160];
    s32 unk_160;
} S_089C97B8;

typedef struct {
    u8 pad_00[0x54];
    f32 unk_54;
    u8 pad_58[4];
    f32 unk_5C;
} T;

void *func_08985828(S_089C97B8 *, s32);

void func_089CA010(S_089C97B8 *arg0) {
    T *ptr = func_08985828(arg0, 0);
    if (ptr->unk_5C <= ptr->unk_54) {
        arg0->unk_160 = 5;
    }
}
