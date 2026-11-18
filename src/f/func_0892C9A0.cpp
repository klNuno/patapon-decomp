#include "common.h"

extern "C" {

struct Unk {
    f32 unk_00[2];
};

struct Unk1 {
    f32 unk_00[3];
};

extern Unk D_08A029F0[];
extern f32 D_08A029F8[];
extern u8 D_08A453D0[];
extern u8 D_08A453E8[];
void func_0881F120(void *, void *, s32);

struct Unk3 {
    u8 *unk_00;
    Unk1 unk_04;
    s32 *unk_10;
};

struct Unk4 {
    Unk3 *unk_00;
    s32 unk_04;
    u8 unk_08[0x14];
};

struct Unk5 {
    u8 pad_00[0x548];
    Unk4 unk_548;
};

void func_0892C9A0(Unk5 *arg0, Unk4 *arg1)
{
    if (arg1 != &arg0->unk_548) {
        if (arg1->unk_00 != NULL) {
            s32 temp = arg1->unk_04;
            if (temp != 0) {
                arg0->unk_548.unk_04 = temp;
                Unk3 *p = (Unk3 *)arg0->unk_548.unk_08;
                if (p != NULL) {
                    Unk1 v;
                    u8 *q = D_08A453E8;
                    *(Unk *)&v = D_08A029F0[0];
                    v.unk_00[2] = D_08A029F8[0];
                    p->unk_00 = q;
                    p->unk_00 = D_08A453D0;
                    p->unk_04 = v;
                    p->unk_10 = &arg0->unk_548.unk_04;
                }
                arg0->unk_548.unk_00 = p;
            } else {
                func_0881F120(arg0->unk_548.unk_08, arg1->unk_08, 0x14);
                arg0->unk_548.unk_00 = (Unk3 *)arg0->unk_548.unk_08;
            }
        } else {
            arg0->unk_548.unk_00 = NULL;
            arg0->unk_548.unk_04 = 0;
        }
    }
}

}
