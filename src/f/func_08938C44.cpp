#include "common.h"

extern "C" {
void func_08852F00(void *, s32);
u32 *func_0885356C(void *, s32, s32, s32);

typedef struct {
    u8 pad_00[0x2C];
    u32 unk_2C;
} U;

typedef struct {
    u8 pad_00[0x1D50];
    u8 unk_1D50[1];
} V;

typedef struct {
    u8 pad_00[0x10];
    V *unk_10;
} T;

U *func_08952574(void *);

void func_08938C44(T *arg0, void *arg1)
{
    u32 *temp = func_0885356C(arg1, 0, 1, 4);
    *temp = func_08952574(arg0->unk_10->unk_1D50)->unk_2C / 10U;
    func_08852F00(arg1, 0);
}
}
