#include "common.h"

typedef struct {
    s32 unk_00;
    f32 unk_04;
    f32 unk_08;
    f32 unk_0C;
    f32 unk_10;
    f32 unk_14;
} P_0894C3B4;

typedef struct {
    s32 unk_00;
} H_0894C3B4;

typedef struct {
    u8 pad_00[0x2018];
    u8 unk_2018[0x28];
} T;

extern f32 D_089E9460[];
typedef H_0894C3B4 H_0894C638;
void func_0894BF2C(H_0894C638 *, void *);
void func_0894C4E0(void *, H_0894C3B4, P_0894C3B4 *);

void func_0894C580(T *arg0, s32 arg1)
{
    P_0894C3B4 temp;
    H_0894C638 ret;
    H_0894C638 *ptr;
    f32 value;
    temp.unk_00 = 2;
    value = ((volatile f32 *)D_089E9460)[arg1];
    ptr = &ret;
    temp.unk_14 = 1.0f;
    temp.unk_08 = value;
    temp.unk_04 = 0.0f;
    temp.unk_0C = 0.0f;
    temp.unk_10 = 0.0f;
    func_0894BF2C(ptr, arg0->unk_2018);
    func_0894C4E0(arg0->unk_2018, ret, &temp);
}
