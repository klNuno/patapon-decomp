#include "common.h"

void func_0880416C(void *);
void func_089458C8(void *, s32);
void func_088F23D0(void *, s32);
void func_089B3344(void *, s32);
extern u8 D_08A48894[];

typedef struct {
    u8 pad_00[0x58];
    u8 *unk_58;
    u8 unk_5C[0x14];
    u8 unk_70[1];
} T;

T *func_089AF1C4(T *arg0, s16 arg1)
{
    if (arg0 != 0) {
        arg0->unk_58 = D_08A48894;
        func_088F23D0(arg0->unk_70, -1);
        func_089458C8(arg0->unk_5C, -1);
        func_089B3344(arg0, 0);
        if (arg1 > 0) {
            func_0880416C(arg0);
        }
    }
    return arg0;
}
