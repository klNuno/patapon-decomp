#include "common.h"

typedef struct {
    u8 pad_00[0x1A00];
    s32 unk_1A00;
} S;

typedef struct {
    u8 pad_00[0x36B08];
    S *unk_36B08;
} U;

typedef struct {
    u8 pad_00[0x14];
    U *unk_14;
} T;

void func_08852F00(void *, s32);
f32 *func_0885356C(void *, s32, s32, s32);
f32 func_0887FC8C(void *);

void func_088E8720(T *arg0, void *arg1)
{
    f32 *temp = func_0885356C(arg1, 0, 1, 4);
    *temp = func_0887FC8C(&arg0->unk_14->unk_36B08->unk_1A00);
    func_08852F00(arg1, 0);
}
