#include "common.h"

typedef struct {
    u8 pad_00[0x2460];
    u8 unk_2460[1];
} T;

typedef struct {
    u8 pad_00[0x42820];
    T *unk_42820;
} U;

extern void *D_08AD1E28[];
extern u8 D_089F9050[];
extern f32 D_089F90A8[];
extern f32 D_089F90B0[];
extern f32 D_089F90B8[];
extern f32 D_089F90C0[];
extern f32 D_089F90C4[];
extern int func_088836EC(s32, s32, s32, s32);
extern s32 func_088148F0(s32, s32);
extern s32 func_088586E8(void);
void func_0886891C(void *, s32);
void func_088698FC(void *, void *, void *, s32, s32, s32, s32, s32, s32);
void func_088782CC(s32);
void func_089268F0(s32);
extern void func_089A8A7C(s32, s32);
s32 func_089B53D8(s32);
s32 func_089B53E4(s32);

static inline U *func_0886D5F4_00(void)
{
    U *temp = (U *)D_08AD1E28[0];
    return temp != NULL ? temp : NULL;
}

void func_0886D5F4(void *arg0, s32 arg1)
{
    f32 temp[7];
    U *temp2;
    s32 temp3;

    temp[0] = D_089F90A8[1];
    temp[1] = D_089F90B0[0];
    temp[2] = D_089F90B0[1];
    temp[3] = D_089F90B8[0];
    temp[4] = D_089F90B8[1];
    temp[5] = D_089F90C0[0];
    temp[6] = D_089F90C4[0];
    temp3 = ((s32 *)temp)[arg1 - 3];
    temp2 = func_0886D5F4_00();
    func_089A8A7C((s32)temp2->unk_42820->unk_2460, temp3);
    func_088782CC(func_089B53D8(func_088586E8()));
    func_088148F0(4, 0);
    func_0886891C(temp2, 2);
    func_088698FC(temp2, D_089F9050, func_088836EC, 2, 0, 0, 1, 0, 0);
    func_089268F0(func_089B53E4(func_088586E8()));
}
