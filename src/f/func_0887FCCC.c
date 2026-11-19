#include "common.h"

extern u8 D_08A44C14[];
extern u8 D_08A44C60[];
extern u8 D_08A44CAC[];
void func_088A1C18(void *);

typedef struct {
    u8 *volatile unk_00;
    u8 unk_04[0xD84];
} U;

typedef struct {
    u8 unk_00;
    u8 unk_01;
    u8 pad_02[2];
    s32 unk_04;
    U unk_08;
    u8 *unk_D90;
    s32 unk_D94;
    u8 pad_D98[8];
    u8 unk_DA0[1];
} T;

T *func_0887FCCC(T *arg0)
{
    U *temp;

    arg0->unk_00 = 0;
    arg0->unk_01 = 1;
    arg0->unk_04 = 0;
    arg0->unk_08.unk_00 = D_08A44C14;
    temp = &arg0->unk_08;
    temp->unk_00 = D_08A44C60;
    arg0->unk_D90 = (u8 *)(((u32)temp->unk_04 & 3) + (u32)temp + 4);
    arg0->unk_D94 = 0;
    temp->unk_00 = D_08A44CAC;
    func_088A1C18(arg0->unk_DA0);
    return arg0;
}
