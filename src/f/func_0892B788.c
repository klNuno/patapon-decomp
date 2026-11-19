#include "common.h"

typedef struct {
    u8 pad_00[0x44];
    void (*unk_44)(void);
    s32 unk_48;
    u8 pad_4C[8];
    s32 unk_54;
    s32 unk_58;
} S;

typedef struct {
    u8 pad_00[0x40C];
    S *unk_40C;
    s32 unk_410;
} T;

void func_0892AE98(void);

void func_0892B788(T *arg0, s32 arg1, s32 arg2, s32 arg3) {
    S *temp;
    arg0->unk_410 = arg1;
    temp = arg0->unk_40C;
    temp->unk_44 = func_0892AE98;
    temp->unk_54 = arg2;
    temp->unk_58 = 0;
    temp->unk_48 = arg3;
}
