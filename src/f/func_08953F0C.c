#include "common.h"

typedef struct T0892CB1C T0892CB1C;

typedef struct {
    u8 *unk_00;
    u8 pad_04[0x740];
    s32 unk_744;
    s32 unk_748;
    u8 unk_74C[0x190];
    u8 *unk_8DC;
    s32 unk_8E0;
    u8 unk_8E4;
    u8 unk_8E5;
    u8 unk_8E6;
    u8 unk_8E7;
    u8 pad_8E8[0x10];
    u8 unk_8F8[4];
} T;

void func_088D4DE4(T0892CB1C *);
void func_08925AB0(void *);
extern u8 D_08A47874[];

T *func_08953F0C(T *arg0)
{
    func_088D4DE4((T0892CB1C *)arg0);
    arg0->unk_00 = D_08A47874;
    arg0->unk_8DC = (u8 *)(((u32)arg0->unk_74C & 3) + (u32)arg0 + 0x74C);
    arg0->unk_8E0 = 0;
    func_08925AB0(arg0->unk_8F8);
    arg0->unk_744 = 0;
    arg0->unk_8E4 = 1;
    arg0->unk_8E5 = 1;
    arg0->unk_8E6 = 1;
    arg0->unk_8E7 = 0;
    arg0->unk_748 = 0;
    return arg0;
}
