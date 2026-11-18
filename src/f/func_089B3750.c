#include "common.h"

typedef struct {
    f32 unk_00;
    f32 unk_04;
    f32 unk_08;
} V;

typedef struct {
    void *unk_00;
    V unk_04;
    u8 unk_10;
    u8 pad_11[3];
    s32 unk_14;
    s32 unk_18;
} T;

typedef struct {
    u8 pad_00[0x30];
    void *unk_30;
    u8 pad_34[0x1C];
    s32 unk_50;
    s32 unk_54;
    T unk_58;
    T unk_74;
} T088B91C0;

void func_088BA1A0(T088B91C0 *);
extern u8 D_08A48A60[];
extern f32 D_08A08670[];
extern f32 D_08A08678[];
extern f32 D_08A0867C[];
extern volatile f32 D_08A08680[];
extern f32 D_08A08688[];

T088B91C0 *func_089B3750(T088B91C0 *arg0, s32 arg1)
{
    V temp;
    V temp2;
    func_088BA1A0(arg0);
    arg0->unk_30 = D_08A48A60;
    arg0->unk_50 = arg1;
    arg0->unk_54 = 0;

    temp.unk_00 = D_08A08670[1];
    temp.unk_04 = D_08A08678[0];
    temp.unk_08 = D_08A0867C[0];
    arg0->unk_58.unk_00 = arg0;
    arg0->unk_58.unk_04 = temp;
    arg0->unk_58.unk_10 = 0;
    arg0->unk_58.unk_14 = 0;
    arg0->unk_58.unk_18 = 0;

    temp2.unk_00 = D_08A08680[0];
    temp2.unk_04 = D_08A08680[1];
    temp2.unk_08 = D_08A08688[0];
    arg0->unk_74.unk_00 = arg0;
    arg0->unk_74.unk_04 = temp2;
    arg0->unk_74.unk_10 = 0;
    arg0->unk_74.unk_14 = 0;
    arg0->unk_74.unk_18 = 0;

    return arg0;
}
