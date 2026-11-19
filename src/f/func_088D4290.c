#include "common.h"

void func_0892CBB4(void *);
extern void *D_08A46228[];

typedef struct {
    void **unk_00;
    u8 pad_04[0x8AC];
    s32 unk_8B0;
    s32 unk_8B4;
    s32 unk_8B8;
    u32 unk_8BC;
    u8 pad_8C0[0x10];
    u8 unk_8D0;
    u8 pad_8D1[3];
    s32 unk_8D4;
    s32 unk_8D8;
    s32 unk_8DC;
    s32 unk_8E0;
    s32 unk_8E4;
    s32 unk_8E8;
    u8 unk_8EC;
    u8 unk_8ED;
} T;

T *func_088D4290(T *arg0)
{
    func_0892CBB4(arg0);
    arg0->unk_00 = D_08A46228;
    arg0->unk_8D0 = 0;
    arg0->unk_8D4 = 0;
    arg0->unk_8D8 = 0;
    arg0->unk_8DC = 0;
    arg0->unk_8E0 = 0;
    arg0->unk_8E4 = 0;
    arg0->unk_8E8 = 0;
    arg0->unk_8EC = 1;
    arg0->unk_8ED = 0;
    arg0->unk_8B8 = 0;
    arg0->unk_8B4 = 0;
    arg0->unk_8B0 = 0;
    arg0->unk_8BC = 0x3F800000;
    return arg0;
}
