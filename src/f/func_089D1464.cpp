#include "common.h"

extern "C" {

struct V_089D1464 {
    f32 unk_00[2];
};

struct W_089D1464 {
    f32 unk_00[3];
};

struct E_089D1464 {
    u8 *unk_00;
    W_089D1464 unk_04;
    s32 *unk_10;
};

struct P_089D1464 {
    E_089D1464 *unk_00;
    s32 unk_04;
    u8 unk_08[0x14];
    u8 *unk_1C;
};

struct T_089D1464 {
    s32 unk_00;
    u16 unk_04[0x100];
    u16 unk_204[0x100];
    P_089D1464 unk_404;
};

extern f32 D_08A09E08[];
extern f32 D_08A09E14[];
extern u8 D_08A4634C[];
extern u8 D_08A46358[];
extern u8 D_08A46364[];

void func_0881F120(void *, void *, s32);
s32 func_088B35A0(u16 *);

static inline const s32 &mx_089D1464(const s32 &a, const s32 &b) {
    return (a < b) ? b : a;
}

T_089D1464 *func_089D1464(T_089D1464 *arg0, u16 *arg1, u16 *arg2, s32 *arg3, P_089D1464 *arg4) {
    arg0->unk_404.unk_1C = D_08A46364;
    arg0->unk_404.unk_00 = NULL;
    arg0->unk_404.unk_04 = 0;
    {
        s32 n = 0;
        s32 len;
        if (arg1 == NULL) {
            arg0->unk_04[0] = 0;
        } else {
            len = func_088B35A0(arg1);
            n = mx_089D1464(len, n) + 1;
            if ((u32)n >= 0x100) {
                n = 0xFF;
            }
            if (n > 0) {
                func_0881F120(arg0->unk_04, arg1, n * 2);
            }
            arg0->unk_04[n] = 0;
        }
    }
    {
        s32 n = 0;
        s32 len;
        if (arg2 == NULL) {
            arg0->unk_204[0] = 0;
        } else {
            len = func_088B35A0(arg2);
            n = mx_089D1464(len, n) + 1;
            if ((u32)n >= 0x100) {
                n = 0xFF;
            }
            if (n > 0) {
                func_0881F120(arg0->unk_204, arg2, n * 2);
            }
            arg0->unk_204[n] = 0;
        }
    }
    arg0->unk_00 = *arg3;
    if (arg4 != &arg0->unk_404) {
        if (arg4->unk_00 != NULL) {
            s32 n = arg4->unk_04;
            if (n != 0) {
                arg0->unk_404.unk_04 = n;
                E_089D1464 *p = (E_089D1464 *)arg0->unk_404.unk_08;
                if (p != NULL) {
                    W_089D1464 v;
                    u8 *q = D_08A46358;
                    *(V_089D1464 *)&v = *(V_089D1464 *)&D_08A09E08[1];
                    v.unk_00[2] = D_08A09E14[0];
                    p->unk_00 = q;
                    p->unk_00 = D_08A4634C;
                    p->unk_04 = v;
                    p->unk_10 = &arg0->unk_404.unk_04;
                }
                arg0->unk_404.unk_00 = p;
            } else {
                func_0881F120(arg0->unk_404.unk_08, arg4->unk_08, 0x14);
                arg0->unk_404.unk_00 = (E_089D1464 *)arg0->unk_404.unk_08;
            }
        } else {
            arg0->unk_404.unk_00 = NULL;
            arg0->unk_404.unk_04 = 0;
        }
    }
    return arg0;
}

}
