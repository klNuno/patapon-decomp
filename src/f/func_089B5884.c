#include "common.h"

void func_0885A274(s32, s32);
s32 func_0885A27C(s32);

typedef struct {
    u8 pad_00[0x2C8];
    s32 unk_2C8;
    s32 unk_2CC;
} T;

void func_089B5884(T *arg0) {
    s32 temp = func_0885A27C(arg0->unk_2CC);
    if (temp == (s32)arg0) {
        func_0885A274(arg0->unk_2CC, 0);
    }
    arg0->unk_2C8 = 0;
}
