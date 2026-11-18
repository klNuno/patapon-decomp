#include "common.h"

typedef struct {
    f32 unk_00;
    f32 unk_04;
    f32 unk_08;
} V3;

typedef struct T {
    s32 unk_00;
    u8 unk_04[4];
    u8 unk_08[8];
    s32 unk_10;
    struct T *unk_14;
    V3 unk_18;
    u8 unk_24;
    u8 pad_25[3];
    s32 unk_28;
    s32 unk_2C;
    s32 unk_30;
    s32 unk_34;
    s32 unk_38;
    u8 unk_3C;
} T;

extern f32 D_08A0A1B0[];
extern f32 D_08A0A1B8[];
extern f32 D_08A0A1BC[];

void func_0881F5C0(void *, s32, s32);
void func_0893F380(void *);
s32 func_089D528C(s32);

T *func_089D52A4(T *arg0, s32 arg1) {
    V3 v;

    arg0->unk_00 = func_089D528C(arg1);
    func_0893F380(arg0->unk_04);
    arg0->unk_10 = 0;
    v.unk_00 = D_08A0A1B0[1];
    v.unk_04 = D_08A0A1B8[0];
    v.unk_08 = D_08A0A1BC[0];
    arg0->unk_14 = arg0;
    arg0->unk_18 = v;
    arg0->unk_24 = 0;
    arg0->unk_28 = 0;
    arg0->unk_2C = 0;
    arg0->unk_30 = 0;
    arg0->unk_34 = 0;
    arg0->unk_38 = 0;
    arg0->unk_3C = 0;
    func_0881F5C0(arg0->unk_08, 0, 8);
    return arg0;
}
