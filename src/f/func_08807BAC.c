#include "common.h"

typedef struct {
    void *unk_00;
    u8 pad_04[0x40];
    s32 unk_44;
} A;

typedef struct {
    A *unk_00;
    u8 pad_04[4];
    void *unk_08;
    u8 unk_0C[1];
} Obj;

extern u8 D_08A443D0[];
extern u8 D_08A443DC[];
void func_08807B2C(void *, s32);
void func_0880416C(void *);

Obj *func_08807BAC(Obj *arg0, s32 arg1)
{
    if (arg0 != NULL) {
        A *p;
        u8 *q;

        arg0->unk_08 = D_08A443D0;
        arg0->unk_00->unk_00 = D_08A443DC;
        p = arg0->unk_00;
        q = arg0->unk_0C;
        p->unk_44 = (s32)((u32)q - (u32)p);
        if (arg1 != 0) {
            func_08807B2C(q, 0);
        }
        if ((s16)arg1 > 0) {
            func_0880416C(arg0);
        }
    }
    return arg0;
}
