#include "common.h"

extern u8 D_08A44484[];

typedef struct {
    void *unk_00;
    u8 pad_04[0x4C];
    s32 unk_50;
} T;

void func_0880B634(T *, s32);
void func_0880B5CC(T *, s32, s32);

T *func_0880B574(T *arg0, s32 arg1) {
    func_0880B634(arg0, 0);
    arg0->unk_00 = D_08A44484;
    arg0->unk_50 = arg1;
    func_0880B5CC(arg0, 0, 0);
    return arg0;
}
