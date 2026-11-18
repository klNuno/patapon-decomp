#include "common.h"

extern "C" {

struct V {
    f32 unk_00[2];
};

struct W {
    f32 unk_00[3];
};

struct E {
    u8 *unk_00;
    W unk_04;
    s32 *unk_10;
};

struct P {
    E *unk_00;
    s32 unk_04;
    u8 unk_08[0x14];
    u8 *unk_1C;
};

struct T {
    s32 unk_00;
    char unk_04[0x200];
    char unk_204[0x200];
    P unk_404;
};

extern V D_089FD878[];
extern f32 D_089FD880[];
extern u8 D_08A4634C[];
extern u8 D_08A46358[];
extern u8 D_08A46364[];

void func_0881F120(void *, void *, s32);
extern int func_088B3120(char *, s32, s32);

T *func_088EF608(T *arg0, s32 arg1, s32 arg2, s32 *arg3, P *arg4) {
    arg0->unk_404.unk_1C = D_08A46364;
    arg0->unk_404.unk_00 = NULL;
    arg0->unk_404.unk_04 = 0;
    if (arg1 != 0) {
        func_088B3120(arg0->unk_04, 0x200, arg1);
    } else {
        *(u16 *)arg0->unk_04 = 0;
    }
    if (arg2 != 0) {
        func_088B3120(arg0->unk_204, 0x200, arg2);
    } else {
        *(u16 *)arg0->unk_204 = 0;
    }
    arg0->unk_00 = *arg3;
    if (arg4 != &arg0->unk_404) {
        if (arg4->unk_00 != NULL) {
            s32 n = arg4->unk_04;
            if (n != 0) {
                arg0->unk_404.unk_04 = n;
                E *p = (E *)arg0->unk_404.unk_08;
                if (p != NULL) {
                    W v;
                    u8 *q = D_08A46358;
                    *(V *)&v = D_089FD878[0];
                    v.unk_00[2] = D_089FD880[0];
                    p->unk_00 = q;
                    p->unk_00 = D_08A4634C;
                    p->unk_04 = v;
                    p->unk_10 = &arg0->unk_404.unk_04;
                }
                arg0->unk_404.unk_00 = p;
            } else {
                func_0881F120(arg0->unk_404.unk_08, arg4->unk_08, 0x14);
                arg0->unk_404.unk_00 = (E *)arg0->unk_404.unk_08;
            }
        } else {
            arg0->unk_404.unk_00 = NULL;
            arg0->unk_404.unk_04 = 0;
        }
    }
    return arg0;
}
}
