#include "common.h"

typedef struct {
    u8 pad_00[0x36B08];
    char *unk_36B08;
} T1;

typedef struct {
    u8 pad_00[0x14];
    T1 *unk_14;
} T;

void func_08852F00(void *, s32);
f32 *func_0885356C(void *, s32, s32, s32);
f32 func_0887FCA4(char *arg0);

void func_088EC2A8(T *arg0, void *arg1)
{
    f32 *temp = func_0885356C(arg1, 0, 1, 4);

    *temp = func_0887FCA4(arg0->unk_14->unk_36B08 + 0x1A00);
    func_08852F00(arg1, 0);
}
