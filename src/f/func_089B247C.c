#include "common.h"
void func_089B32D0(void *, s32);
void *func_08912114(void *);
extern u8 D_08A489A0[];

typedef struct {
    u8 pad_00[0x58];
    u8 *unk_58;
    u8 pad_5C[4];
    u8 unk_60[0x720];
    u8 unk_780;
} T;

T *func_089B247C(T *arg0, s32 arg1) {
    func_089B32D0(arg0, arg1);
    arg0->unk_58 = D_08A489A0;
    func_08912114(arg0->unk_60);
    arg0->unk_780 = 0;
    return arg0;
}
