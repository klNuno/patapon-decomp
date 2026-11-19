#include "common.h"

typedef struct {
    u8 pad_00[0xBA8];
    s32 unk_BA8;
} T;

void func_089C0CA4(T *, s32);
void func_089C12C0(T *, s32);

void func_089C0C64(T *arg0, s32 arg1)
{
    if (arg0->unk_BA8 == 0) {
        func_089C0CA4(arg0, arg1);
    } else if (arg0->unk_BA8 == 1) {
        func_089C12C0(arg0, arg1);
    }
}
