#include "common.h"

void func_0886E47C(void *, s32, void *, s32, s32);
extern void func_0886E7F4(void *);
extern u8 D_08A44F88[];

typedef struct {
    u8 pad_00[0x50];
    void *unk_50;
    u8 pad_54[0x14BC];
    u8 unk_1510;
} T;

T *func_0886E5CC(T *arg0, s32 arg1, void *arg2, s32 arg3) {
    func_0886E47C(arg0, arg1, arg2, arg3, -1);
    arg0->unk_50 = D_08A44F88;
    func_0886E7F4(&arg0->unk_1510);
    return arg0;
}
