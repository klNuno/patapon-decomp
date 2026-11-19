#include "common.h"

void func_089B32D0(void *, s32);
void func_08912114(void *);
extern u8 D_08A48868[];

typedef struct {
    u8 pad_00[0x58];
    void *unk_58;
    s32 unk_5C;
    u8 unk_60[1824];
    u8 unk_780;
} T;

T *func_089AEE0C(T *arg0, s32 arg1, s32 arg2) {
    func_089B32D0(arg0, arg1);
    arg0->unk_58 = D_08A48868;
    arg0->unk_5C = arg2;
    func_08912114(arg0->unk_60);
    arg0->unk_780 = 0;
    return arg0;
}
