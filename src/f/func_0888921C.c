#include "common.h"

typedef struct {
    u8 pad_00[0x658];
    s32 unk_658;
    u8 pad_65C[0xD0];
    u8 unk_72C;
} S;

void func_088F5990(void *, s32);

void func_0888921C(S *arg0) {
    func_088F5990(&arg0->unk_72C, arg0->unk_658 + 0xC8);
}
