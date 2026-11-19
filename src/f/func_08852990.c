#include "common.h"

typedef struct {
    s32 unk_00;
    s32 unk_04;
} C;

typedef struct {
    C unk_00[15];
    s32 unk_78;
    u8 pad_7C[0x9C];
} B;

typedef struct {
    u8 pad_00[4];
    s32 unk_04;
    C *unk_08;
    u8 unk_0C;
    u8 pad_0D[3];
    s32 unk_10;
    s32 unk_14;
    B unk_18[3];
    s32 unk_360;
    u8 pad_364[0x10C];
    s32 unk_470;
} T;

void func_0881F5C0(void *, s32, s32);

void func_08852990(T *arg0)
{
    func_0881F5C0(arg0->unk_18, 0, sizeof(arg0->unk_18));
    arg0->unk_10 = 0;
    arg0->unk_0C = 0;
    arg0->unk_360 = 0;
    arg0->unk_08 = &arg0->unk_18[arg0->unk_360].unk_00[arg0->unk_18[arg0->unk_360].unk_78];
    arg0->unk_14 = 0;
    arg0->unk_470 = 0;
    arg0->unk_04 = 0;
}
