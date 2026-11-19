#include "common.h"

typedef struct {
    u8 pad_00[0x50];
    void *unk_50;
    u8 pad_54[0x14BC];
    u8 unk_1510;
    u8 pad_1511[3];
    u8 unk_1514[1];
} T;

typedef struct S S;

extern u8 D_08A49058[];
void func_0886E47C(void *, s32, s32, s32, s32);
S *func_089D6534(S *arg0, s32 arg1, s32 arg2, s32 arg3);

T *func_089D6D00(T *arg0, s32 arg1, s32 arg2, s32 arg3) {
    func_0886E47C(arg0, arg1, arg2, arg3, -1);
    arg0->unk_50 = D_08A49058;
    arg0->unk_1510 = 0;
    func_089D6534((S *)arg0->unk_1514, arg1, arg2, (s32)arg0);
    return arg0;
}
