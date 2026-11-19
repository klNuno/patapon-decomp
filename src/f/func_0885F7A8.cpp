#include "common.h"

extern "C" {
typedef struct {
    void (*unk_00)(s32, s32, s32, s32);
    s32 unk_04;
    s32 unk_08;
} S;

void func_0885F7A8(S *arg0, s32 arg1, s32 arg2)
{
    void (*temp)(s32, s32, s32, s32) = arg0->unk_00;
    if (temp != NULL) {
        temp(arg1, arg2, arg0->unk_08, arg0->unk_04);
    }
}
}
