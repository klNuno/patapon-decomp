#include "common.h"

void func_08852F00(void *, s32);
s32 *func_0885356C(void *, s32, s32, s32);
extern s32 func_08985828(s32, s32);
char *func_0898A324(void *);
void func_0898ABB8(s32, s32, s32, f32);

typedef struct {
    u8 pad_00[0x1212D0];
    u8 unk_1212D0[1];
} T;

typedef struct {
    u8 pad_00[0x10];
    T *unk_10;
} S;

void func_0890607C(S *arg0, void *arg1)
{
    s32 *temp = func_0885356C(arg1, 0, 1, 4);
    s32 *temp2 = func_0885356C(arg1, 1, 1, 4);
    s32 *temp3 = func_0885356C(arg1, 2, 1, 4);
    f32 *temp4 = (f32 *)func_0885356C(arg1, 3, 1, 4);
    func_0898ABB8(func_08985828((s32)func_0898A324(arg0->unk_10->unk_1212D0), *temp), *temp2, *temp3 == 1, *temp4);
    func_08852F00(arg1, 0);
}
