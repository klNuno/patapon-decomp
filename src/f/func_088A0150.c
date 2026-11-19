#include "common.h"

typedef struct {
    s32 unk_00;
    s32 unk_04;
    s32 unk_08;
} Unk;

typedef struct {
    Unk unk_00;
    u8 pad_0C[4];
    u8 unk_10[0x90];
    s32 unk_A0;
    u8 pad_A4[4];
    void *unk_A8;
} Obj;

extern u8 D_08A45974[];
void func_0889DF64(void *);
void func_088A0210(void *);

Obj *func_088A0150(Obj *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4)
{
    volatile Unk *p = &arg0->unk_00;

    p->unk_00 = 0;
    p->unk_04 = 0;
    p->unk_08 = 0;
    arg0->unk_00.unk_00 = arg2;
    arg0->unk_00.unk_04 = arg3;
    arg0->unk_00.unk_08 = arg4;
    arg0->unk_A8 = D_08A45974;
    func_0889DF64(arg0->unk_10);
    arg0->unk_A0 = 0;
    func_088A0210(arg0);
    return arg0;
}
