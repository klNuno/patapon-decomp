#include "common.h"

extern "C" {

struct Unk {
    f32 unk_00[2];
};

struct Unk1 {
    f32 unk_00[3];
};

extern Unk D_089FC0E8[];
extern f32 D_089FC0F0[];
extern u8 D_08A4634C[];
extern u8 D_08A46358[];
extern u8 D_08A46364[];
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
    u8 *unk_1C;
};

Unk4 *func_088DA648(Unk4 *arg0, Unk4 *arg1)
{
    arg0->unk_1C = D_08A46364;
    arg0->unk_04 = 0;
    if (arg1 != arg0) {
        if (arg1->unk_00 != NULL) {
            s32 temp = arg1->unk_04;
            if (temp != 0) {
                arg0->unk_04 = temp;
                Unk3 *p = (Unk3 *)arg0->unk_08;
                if (p != NULL) {
                    Unk1 v;
                    u8 *q = D_08A46358;
                    *(Unk *)&v = D_089FC0E8[0];
                    v.unk_00[2] = D_089FC0F0[0];
                    p->unk_00 = q;
                    p->unk_00 = D_08A4634C;
                    p->unk_04 = v;
                    p->unk_10 = &arg0->unk_04;
                }
                arg0->unk_00 = p;
            } else {
                func_0881F120(arg0->unk_08, arg1->unk_08, 0x14);
                arg0->unk_00 = (Unk3 *)arg0->unk_08;
            }
        } else {
            arg0->unk_00 = NULL;
            arg0->unk_04 = 0;
        }
    }
    return arg0;
}

}
