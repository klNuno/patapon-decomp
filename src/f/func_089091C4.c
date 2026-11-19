#include "common.h"

typedef struct {
    f32 unk_00;
    f32 unk_04;
    f32 unk_08;
} V;

typedef struct {
    u8 *volatile unk_00;
    V unk_04;
    s32 unk_10;
} T;

typedef struct {
    T *unk_00;
    volatile s32 unk_04;
    T unk_08;
    u8 *unk_1C;
} G;

extern u8 D_08A46358[];
extern u8 D_08A46364[];
extern u8 D_08A46814[];

G *func_089091C4(G *arg0, s32 arg1, const V *arg2) {
    volatile V temp = *arg2;
    T *p;
    arg0->unk_1C = D_08A46364;
    arg0->unk_04 = 0;
    p = &arg0->unk_08;
    arg0->unk_04 = 0;
    if (p != NULL) {
        p->unk_00 = D_08A46358;
        p->unk_00 = D_08A46814;
        p->unk_04 = *(const V *)&temp;
        p->unk_10 = arg1;
    }
    arg0->unk_00 = p;
    return arg0;
}
