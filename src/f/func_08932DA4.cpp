#include "common.h"

extern "C" {
typedef struct {
    f32 unk_00;
    f32 unk_04;
} A;
typedef struct {
    u8 pad_00[0x54];
    s32 unk_54;
    u8 pad_58[0x10];
    s32 unk_68;
    u8 pad_6C[4];
    s32 unk_70;
    u8 pad_74[0x10];
    f32 unk_84;
    f32 unk_88;
} B;
class C {
public:
    A unk_00;
    A unk_08;
    A unk_10;
    u8 pad_18[8];
    f32 unk_20;
    f32 unk_24;
    u8 pad_28[0x48];
    s32 unk_70;
    u8 unk_74;
    u8 unk_75;
    u8 pad_76[2];
    virtual B *unk_08_v();
};
void func_0885429C(A *, const A *);
void func_08933218(C *);

void func_08932DA4(C *arg0, const A *arg1, const A *arg2) {
    A temp;
    arg0->unk_74 = arg0->unk_08_v()->unk_68 == 1;
    arg0->unk_75 = arg0->unk_08_v()->unk_54 == 1;
    arg0->unk_70 = arg0->unk_08_v()->unk_70;
    arg0->unk_00.unk_00 = arg1->unk_00;
    arg0->unk_00.unk_04 = arg1->unk_04;
    arg0->unk_08.unk_00 = arg2->unk_00;
    arg0->unk_08.unk_04 = arg2->unk_04;
    arg0->unk_20 = arg0->unk_08_v()->unk_84;
    arg0->unk_24 = arg0->unk_08_v()->unk_88;
    arg0->unk_10.unk_00 = 0.0f;
    arg0->unk_10.unk_04 = 1.0f;
    if (arg0->unk_75 == 1) {
        f32 temp3 = arg2->unk_04;
        f32 temp2 = arg2->unk_00;
        if (temp2 * temp2 + temp3 * temp3 > 0.0001f) {
            func_0885429C(&temp, arg2);
            arg0->unk_10.unk_00 = temp.unk_00;
            arg0->unk_10.unk_04 = temp.unk_04;
        }
    }
    func_08933218(arg0);
}
}
