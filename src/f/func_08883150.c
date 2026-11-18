#include "common.h"

typedef struct { f32 unk_00, unk_04; } V;
typedef struct {
    u8 pad_00[0x30];
    V unk_30;
    u8 pad_38[8];
} M_088E5458;

typedef struct {
    u8 pad_00[0x20];
    V unk_20;
    V *unk_28;
    void *unk_2C;
    s32 unk_30;
    s32 unk_34;
    u8 pad_38[0x28];
    u8 unk_60[0x20];
    V unk_80, unk_88, unk_90, unk_98;
} A;

extern void func_0881F120(void *, void *, s32);
void func_088664DC(M_088E5458 *, void *, s32);

void func_08883150(A *arg0) {
    M_088E5458 temp;

    if (arg0->unk_2C != NULL) {
        func_088664DC(&temp, arg0->unk_2C, arg0->unk_30);
        arg0->unk_20.unk_00 = temp.unk_30.unk_00;
        arg0->unk_20.unk_04 = temp.unk_30.unk_04;
    } else if (arg0->unk_28 != NULL) {
        arg0->unk_20.unk_00 = arg0->unk_28->unk_00;
        arg0->unk_20.unk_04 = arg0->unk_28->unk_04;
    }
    func_0881F120(&arg0->unk_80, arg0->unk_60, 0x20);
    switch (arg0->unk_34) {
    case 1:
        arg0->unk_90.unk_00 += arg0->unk_20.unk_00;
        arg0->unk_90.unk_04 += arg0->unk_20.unk_04;
        arg0->unk_98.unk_00 += arg0->unk_20.unk_00;
        arg0->unk_98.unk_04 += arg0->unk_20.unk_04;
        break;
    case 2:
        arg0->unk_90.unk_00 += arg0->unk_20.unk_00;
        arg0->unk_90.unk_04 += arg0->unk_20.unk_04;
        break;
    case 3:
        arg0->unk_90.unk_00 += arg0->unk_20.unk_00;
        arg0->unk_90.unk_04 += arg0->unk_20.unk_04;
        break;
    }
    arg0->unk_80.unk_00 += arg0->unk_20.unk_00;
    arg0->unk_80.unk_04 += arg0->unk_20.unk_04;
    arg0->unk_88.unk_00 += arg0->unk_20.unk_00;
    arg0->unk_88.unk_04 += arg0->unk_20.unk_04;
}
