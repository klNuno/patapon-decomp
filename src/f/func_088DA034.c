#include "common.h"

typedef struct {
    f32 unk_00[2];
} Unk;

typedef struct {
    f32 unk_00[3];
} Unk1;

typedef struct {
    u8 *unk_00;
    Unk1 unk_04;
    s32 *unk_10;
} U;

typedef struct {
    U *unk_00;
    s32 unk_04;
    u8 unk_08[0x14];
} W;

typedef struct {
    s16 unk_00;
    s16 unk_02;
} V;

typedef struct {
    s32 unk_00;
    V unk_04[128];
    V unk_204[128];
    W unk_404;
    u8 *unk_420;
} T;

extern Unk D_089FC0E8[];
extern f32 D_089FC0F0[];
extern u8 D_08A4634C[];
extern u8 D_08A46358[];
extern u8 D_08A46364[];
void func_0881F120(void *, void *, s32);

T *func_088DA034(T *arg0, T *arg1) {
    const volatile V *src;
    V *dst;
    s32 n;

    arg0->unk_00 = arg1->unk_00;
    src = arg1->unk_04;
    dst = arg0->unk_04;
    n = 128;
    do {
        s16 a = src->unk_00;
        s16 b = src->unk_02;
        n--;
        dst->unk_00 = a;
        dst->unk_02 = b;
        src++;
        dst++;
    } while (n > 0);

    src = arg1->unk_204;
    dst = arg0->unk_204;
    n = 128;
    do {
        s16 a = src->unk_00;
        s16 b = src->unk_02;
        n--;
        dst->unk_00 = a;
        dst->unk_02 = b;
        src++;
        dst++;
    } while (n > 0);

    arg0->unk_420 = D_08A46364;
    arg0->unk_404.unk_04 = 0;
    if (&arg1->unk_404 != &arg0->unk_404) {
        if (arg1->unk_404.unk_00 != NULL) {
            s32 temp = arg1->unk_404.unk_04;
            if (temp != 0) {
                U *p;

                arg0->unk_404.unk_04 = temp;
                p = (U *)arg0->unk_404.unk_08;
                if (p != NULL) {
                    Unk1 v;
                    u8 *q = D_08A46358;
                    *(Unk *)&v = D_089FC0E8[0];
                    v.unk_00[2] = D_089FC0F0[0];
                    p->unk_00 = q;
                    p->unk_00 = D_08A4634C;
                    p->unk_04 = v;
                    p->unk_10 = &arg0->unk_404.unk_04;
                }
                arg0->unk_404.unk_00 = p;
            } else {
                func_0881F120(arg0->unk_404.unk_08, arg1->unk_404.unk_08, 0x14);
                arg0->unk_404.unk_00 = (U *)arg0->unk_404.unk_08;
            }
        } else {
            arg0->unk_404.unk_00 = NULL;
            arg0->unk_404.unk_04 = 0;
        }
    }
    return arg0;
}
