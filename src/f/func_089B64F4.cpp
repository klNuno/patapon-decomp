#include "common.h"

extern "C" {

struct Unk_089B64F4 {
    f32 unk_00[2];
};

struct Unk1_089B64F4 {
    f32 unk_00[3];
};

struct G_089B64F4 {
    f32 pad_00;
    Unk_089B64F4 unk_04;
};

extern G_089B64F4 D_08A08A18[];
extern f32 D_08A08A24[];
extern u8 D_08A4634C[];
extern u8 D_08A46358[];
extern u8 D_08A46364[];
void func_0881F120(void *, void *, s32);
void func_088B3120(u16 *, s32, char *);

struct Unk3_089B64F4 {
    u8 *unk_00;
    Unk1_089B64F4 unk_04;
    s32 *unk_10;
};

struct Unk4_089B64F4 {
    Unk3_089B64F4 *unk_00;
    s32 unk_04;
    u8 unk_08[0x14];
    u8 *unk_1C;
};

typedef struct {
    s32 unk_00;
    u16 unk_04[0x100];
    u16 unk_204[0x100];
    Unk4_089B64F4 unk_404;
} S_089B64F4;

S_089B64F4 *func_089B64F4(S_089B64F4 *arg0, char *arg1, char *arg2, s32 *arg3, Unk4_089B64F4 *arg4) {
    arg0->unk_404.unk_1C = D_08A46364;
    arg0->unk_404.unk_00 = NULL;
    arg0->unk_404.unk_04 = 0;
    if (arg1 != NULL) {
        func_088B3120(arg0->unk_04, 0x200, arg1);
    } else {
        arg0->unk_04[0] = 0;
    }
    if (arg2 != NULL) {
        func_088B3120(arg0->unk_204, 0x200, arg2);
    } else {
        arg0->unk_204[0] = 0;
    }
    arg0->unk_00 = *arg3;
    if (arg4 != &arg0->unk_404) {
        if (arg4->unk_00 != NULL) {
            s32 temp = arg4->unk_04;
            if (temp != 0) {
                arg0->unk_404.unk_04 = temp;
                Unk3_089B64F4 *p = (Unk3_089B64F4 *)arg0->unk_404.unk_08;
                if (p != NULL) {
                    Unk1_089B64F4 v;
                    u8 *q = D_08A46358;
                    *(Unk_089B64F4 *)&v = D_08A08A18[0].unk_04;
                    v.unk_00[2] = D_08A08A24[0];
                    p->unk_00 = q;
                    p->unk_00 = D_08A4634C;
                    p->unk_04 = v;
                    p->unk_10 = &arg0->unk_404.unk_04;
                }
                arg0->unk_404.unk_00 = p;
            } else {
                func_0881F120(arg0->unk_404.unk_08, arg4->unk_08, 0x14);
                arg0->unk_404.unk_00 = (Unk3_089B64F4 *)arg0->unk_404.unk_08;
            }
        } else {
            arg0->unk_404.unk_00 = NULL;
            arg0->unk_404.unk_04 = 0;
        }
    }
    return arg0;
}

}
