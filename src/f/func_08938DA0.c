#include "common.h"

void func_08852F00(void *, s32);
extern s32 *func_0885356C(void *, s32, s32, s32);

typedef struct {
    u8 pad_00[0x1E48];
    u8 unk_1E48;
} S;

typedef struct {
    u8 pad_00[0x10];
    S *unk_10;
} T;

void func_08938DA0(T *arg0, void *arg1) {
    s32 *temp = func_0885356C(arg1, 0, 1, 4);
    *temp = arg0->unk_10->unk_1E48;
    func_08852F00(arg1, 0);
}
