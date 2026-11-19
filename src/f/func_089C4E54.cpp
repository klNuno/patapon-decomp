#include "common.h"

extern "C" {

class V {
public:
    u8 pad_00[8];
    virtual void *v08();
    virtual u32 v0C();
};

typedef struct {
    void *unk_00;
    void *unk_04;
    u8 pad_08[0x40];
} N0;

typedef struct {
    void *unk_00;
    void *unk_04;
    u8 pad_08[4];
} N1;

typedef struct {
    void *unk_00;
    void *unk_04;
    void *unk_08;
    s32 unk_0C;
} S;

typedef struct {
    N0 *unk_00;
    N0 *unk_04;
    void *unk_08;
    u8 unk_0C[0x1204];
    N0 *unk_1210;
    S unk_1214;
} A;

typedef struct {
    N1 *unk_00;
    N1 *unk_04;
    void *unk_08;
    u8 unk_0C[0x304];
    N1 *unk_310;
    S unk_314;
} B;

extern u8 D_08A48D00[];
extern u8 D_08A48D10[];
extern u8 D_08A48D20[];
extern u8 D_08A48D30[];
extern u8 D_08A44AD8[];

typedef struct {
    s32 unk_00;
    s32 unk_04;
    u8 unk_08;
    u8 pad_09[3];
    s32 unk_0C;
    s32 unk_10;
    s32 unk_14;
    void *unk_18;
    s32 unk_1C;
    s32 unk_20;
} E;

typedef struct {
    E *unk_00;
    s32 unk_04;
} F;

typedef struct {
    A unk_00;
    B unk_1224;
    u8 unk_1548[0x124];
    F unk_166C;
} T;

T *func_089C4E54(T *arg0) {
    A *a = (A *)arg0;
    void *n;
    u32 i;
    B *b;
    E *p;
    F *f;
    s32 *c;

    *(void *volatile *)&a->unk_08 = D_08A48D30;
    a->unk_08 = D_08A48D20;
    a->unk_1210 = (N0 *)(((u32)a->unk_0C + 3) & ~3U);
    n = (N0 *)((V *)a)->v08();
    a->unk_00 = (N0 *)n;
    a->unk_04 = (N0 *)n + (((V *)a)->v0C() - 1);
    ((N0 *)n)->unk_04 = a;
    a->unk_04->unk_00 = a;
    i = 1;
    if (((V *)a)->v0C() > 1U) {
        do {
            N0 *v = (N0 *)n;
            n = (N0 *)n + 1;
            v->unk_00 = n;
            ((N0 *)n)->unk_04 = v;
        } while (++i < ((V *)a)->v0C());
    }
    a->unk_1214.unk_08 = a;
    a->unk_1214.unk_0C = 0;
    a->unk_1214.unk_00 = &a->unk_1214;
    a->unk_1214.unk_04 = &a->unk_1214;

    *(void *volatile *)&arg0->unk_1224.unk_08 = D_08A48D10;
    b = &arg0->unk_1224;
    arg0->unk_1224.unk_08 = D_08A48D00;
    arg0->unk_1224.unk_310 = (N1 *)(((u32)b->unk_0C + 3) & ~3U);
    n = ((V *)b)->v08();
    b->unk_00 = (N1 *)n;
    b->unk_04 = (N1 *)n + (((V *)b)->v0C() - 1);
    ((N1 *)n)->unk_04 = b;
    b->unk_04->unk_00 = b;
    i = 1;
    if (((V *)b)->v0C() > 1U) {
        do {
            N1 *v = (N1 *)n;
            n = (N1 *)n + 1;
            v->unk_00 = n;
            ((N1 *)n)->unk_04 = v;
        } while (++i < ((V *)b)->v0C());
    }
    b->unk_314.unk_08 = b;
    b->unk_314.unk_0C = 0;
    b->unk_314.unk_00 = &b->unk_314;
    b->unk_314.unk_04 = &b->unk_314;

    arg0->unk_166C.unk_00 = (E *)(((u32)arg0->unk_1548 & 3) + (u32)arg0 + 0x1548);
    arg0->unk_166C.unk_04 = 8;
    p = arg0->unk_166C.unk_00;
    f = &arg0->unk_166C;
    if ((u32)p != (u32)(p + arg0->unk_166C.unk_04)) {
        c = &arg0->unk_166C.unk_04;
        do {
            if (p != NULL) {
                p->unk_18 = D_08A44AD8;
                p->unk_14 = 0;
                p->unk_00 = 0;
                p->unk_04 = 0;
                p->unk_08 = 0;
                p->unk_10 = 0;
                p->unk_0C = 0;
                p->unk_1C = 0;
                p->unk_20 = 0;
            }
            p++;
        } while (p != f->unk_00 + *c);
    }
    return arg0;
}

}
