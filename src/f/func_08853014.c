#include "common.h"

typedef struct {
    u8 pad_00[0x94];
    s32 unk_94;
    u8 pad_98[0x80];
} S;

typedef struct {
    u8 pad_00[0x360];
    s32 unk_360;
} T;

void func_0885303C(void *, s32, s32);

void func_08853014(T *arg0, s32 arg1) {
    u32 temp = (u32)arg0->unk_360 * 0x118U;
    temp += (u32)arg0;
    ((S *)temp)->unk_94 = arg1;
    func_0885303C(arg0, arg1, 0);
}
