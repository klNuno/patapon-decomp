#include "common.h"

typedef struct {
    f32 unk_00[2];
    s32 unk_08;
    u8 unk_0C;
    u8 unk_0D;
    u8 pad_0E[2];
    f32 unk_10[3];
    f32 unk_1C[4];
    f32 unk_2C[4];
    f32 unk_3C[4];
    s32 unk_4C;
    s32 unk_50;
    f32 unk_54[4];
    f32 unk_64[4];
} S;

S *func_0890F8D8(S *, S *);
S *func_0890F7E0(S *, const S *);
s32 func_0890E7F0(s32, s16);

void func_0890F784(S *arg0, S *arg1)
{
    S temp;

    func_0890F8D8(&temp, arg0);
    func_0890F7E0(arg0, arg1);
    func_0890F7E0(arg1, &temp);
    func_0890E7F0((s32)&temp, -1);
}
