#include "common.h"

typedef struct {
    u8 pad_00[0x4C];
    u8 *unk_4C;
    u8 pad_50[0x2CA0];
    u8 unk_2CF0;
    u8 unk_2CF1;
} S;

typedef struct {
    u8 pad_00[8];
    u8 *unk_08;
    u8 pad_0C[0x14];
    S unk_20;
} S_0895F0B8;

void func_0895EFB8(S_0895F0B8 *, s32);
s32 func_08858BCC(void);
extern void func_088CC5C0(S *, s32);
extern u8 D_08A46324[];
extern u8 D_08A462CC[];

S_0895F0B8 *func_088D7F74(S_0895F0B8 *arg0, s32 arg1) {
    S *temp;
    s32 temp0;

    func_0895EFB8(arg0, arg1);
    arg0->unk_08 = D_08A46324;
    temp0 = func_08858BCC();
    temp = &arg0->unk_20;
    func_088CC5C0(temp, temp0);
    temp->unk_4C = D_08A462CC;
    temp->unk_2CF0 = 0;
    temp->unk_2CF1 = 0;
    return arg0;
}
