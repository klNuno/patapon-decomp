#include "common.h"

extern "C" {
typedef struct {
    u8 pad_00[0x4C];
    s32 unk_4C;
    u8 pad_50[0xB0];
} S;

struct U {
    s32 unk_00;
    s32 unk_04;
    f32 unk_08;
    f32 unk_0C;
    s32 unk_10;
    s32 unk_14;
    f32 unk_18;
    f32 unk_1C;
    s32 unk_20;

    void unk_24(s32 arg0, s32 &arg1) {
        switch (arg0) {
        case 1:
            arg1 = 1;
            unk_08 = 1.0f;
            unk_20 = 0;
            unk_0C = 0.0f;
            unk_04 = 0;
            unk_10 = -1;
            unk_14 = -1;
            unk_18 = 1000.0f;
            unk_1C = 1000.0f;
            break;
        }
    }
};

struct E {
    u8 unk_00;
    u8 pad_01[3];
    s32 unk_04;
    s32 unk_08;
    s32 unk_0C;
    u8 pad_10[4];
    S *unk_14;
    s32 unk_18;
    U unk_1C;
    u8 pad_40[0x34];

    void unk_74() {
        unk_08 = 0;
        unk_0C = 0;
        unk_1C.unk_00 = 0;
        unk_1C.unk_04 = 0;
        unk_1C.unk_08 = 0.0f;
        unk_1C.unk_0C = 0.0f;
        unk_1C.unk_10 = 0;
        unk_1C.unk_14 = 0;
        unk_1C.unk_18 = 0.0f;
        unk_1C.unk_1C = 0.0f;

    }
};

typedef struct {
    E unk_00[4];
    u8 pad_1D0[8];
    s32 unk_1D8;
} T;

extern s32 D_089EE8C8[];
s32 func_0885AB7C(s32, s32, s32);

void func_0899288C(E *e, s32 arg1) {
    e->unk_00 = 0;
    e->unk_04 = 5;
    S *s;
    s32 i;
    S *t;
    E *p;
    if (arg1 == 6) {
        s = (S *)func_0885AB7C(((T *)e)->unk_1D8, 0, 0);
        i = 0;
        t = s;
        do {
            e->unk_74();
            if (e->unk_14 != NULL && e->unk_14->unk_4C == 1) {
                e->unk_1C.unk_24(e->unk_14->unk_4C, e->unk_1C.unk_00);
            }
            e->unk_14 = s;
            s32 j = *(volatile s32 *)&t->unk_4C;
            i++;
            s++;
            s32 v = ((volatile s32 *)D_089EE8C8)[j];
            t++;
            e->unk_18 = v;
            e++;
        } while (i < 4);
    } else {
        s32 temp = arg1 * (s32)sizeof(E);
        temp = (s32)e + temp;
        p = (E *)temp;
        p->unk_74();
        s32 &r = *(s32 *)((u8 *)p + 0x1C);
        if (p->unk_14 != NULL && p->unk_14->unk_4C == 1) {
            p->unk_1C.unk_24(p->unk_14->unk_4C, r);
        }
    }
}
}
