#include "common.h"

typedef struct {
    f32 unk_00;
    f32 unk_04;
    f32 unk_08;
} V_088FD4A0;

typedef struct {
    void *unk_00;
    void *unk_04;
    V_088FD4A0 unk_08;
} Sub_088FD4A0;

typedef struct {
    u8 pad_00[0x310];
    u8 unk_310[4];
} T_088FD4A0;

typedef struct {
    void *unk_00;
    s32 unk_04;
    char *unk_08;
    s32 unk_0C;
    T_088FD4A0 *unk_10;
    s32 unk_14;
    s32 unk_18;
    s32 unk_1C;
    u8 pad_20[4];
    s32 unk_24;
    s32 unk_28;
    s32 unk_2C;
    s32 unk_30;
    s32 unk_34;
    s32 unk_38;
    s32 unk_3C;
    u8 pad_40[8];
    s32 unk_48;
    s32 unk_4C;
    s32 unk_50;
    Sub_088FD4A0 unk_54;
} S_088FD4A0;

void func_089154B4(void *, void *);
extern char D_089E3E10[];
extern f32 D_089FF818[];
extern f32 D_089FF820[];
extern f32 D_089FF824[];
extern u8 D_08A4489C[];
extern u8 D_08A4685C[];
extern u8 D_08A46874[];
extern u8 D_08A46884[];
extern u8 D_08A46894[];

S_088FD4A0 *func_088FD4A0(S_088FD4A0 *arg0, T_088FD4A0 *arg1, s32 arg2) {
    V_088FD4A0 t;

    arg0->unk_00 = D_08A4489C;
    arg0->unk_00 = D_08A46894;
    arg0->unk_04 = 2;
    arg0->unk_08 = D_089E3E10;
    arg0->unk_0C = 0x95;
    arg0->unk_00 = D_08A4685C;
    arg0->unk_10 = arg1;
    arg0->unk_14 = 0;
    arg0->unk_18 = 0;
    arg0->unk_1C = 0;
    arg0->unk_24 = 0;
    arg0->unk_28 = -1;
    arg0->unk_2C = -1;
    arg0->unk_30 = 0;
    arg0->unk_34 = 0;
    arg0->unk_38 = 0;
    arg0->unk_3C = 0;
    arg0->unk_48 = arg2;
    arg0->unk_4C = -1;
    arg0->unk_50 = 0;
    t.unk_00 = D_089FF818[1];
    t.unk_04 = D_089FF820[0];
    t.unk_08 = D_089FF824[0];
    arg0->unk_54.unk_00 = D_08A46884;
    arg0->unk_54.unk_00 = D_08A46874;
    arg0->unk_54.unk_04 = arg0;
    arg0->unk_54.unk_08 = t;
    func_089154B4(arg0->unk_10->unk_310, &arg0->unk_54);
    return arg0;
}
