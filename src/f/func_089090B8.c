#include "common.h"

typedef struct {
    s32 unk_00;
    s32 unk_04;
    void *unk_08;
} S;

typedef struct {
    S unk_00;
    char unk_0C[0x20];
    s32 unk_2C;
} Obj;

extern u8 D_08A46820[];
void func_08980138(S *, s32, s32);
void func_08822B3C(char *, char *);

Obj *func_089090B8(Obj *arg0, s32 arg1, s32 arg2, char *arg3, s32 arg4, s32 arg5)
{
    func_08980138(&arg0->unk_00, arg1, arg2);
    arg0->unk_00.unk_08 = D_08A46820;
    arg0->unk_2C = arg5;
    func_08822B3C(arg0->unk_0C, arg3);
    return arg0;
}
