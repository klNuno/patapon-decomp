#include "common.h"

extern "C" {

extern f32 D_089FDC20[];
extern f32 D_089FDC24[];
extern f32 D_089FDC28[];
extern f32 D_089FDC2C[];

struct X_088F1C7C {
    X_088F1C7C(void *a, void *o) {
        unk_00 = 1;
        unk_0C = a;
        unk_20 = D_089FDC20[0];
        unk_18 = 0;
        unk_24 = D_089FDC24[0];
        unk_1C = 0;
        unk_28 = D_089FDC28[0];
        unk_04 = 0;
        unk_08 = 0;
        unk_10 = 0;
        unk_30 = 0;
        unk_34 = 0;
        unk_38 = o;
        unk_3C = 0;
        unk_2C = D_089FDC2C[0];
    }
    s32 unk_00;
    s32 unk_04;
    s32 unk_08;
    void *unk_0C;
    s32 unk_10;
    s32 unk_14;
    s32 unk_18;
    s32 unk_1C;
    f32 unk_20;
    f32 unk_24;
    f32 unk_28;
    f32 unk_2C;
    s32 unk_30;
    s32 unk_34;
    void *unk_38;
    s32 unk_3C;
    u8 pad_40[0x10];
};

class V_088F1C7C {
public:
    u8 pad_00[0x1C];
    virtual void v08(X_088F1C7C *);
};

typedef struct {
    s32 unk_00;
    s32 unk_04;
    s32 unk_08;
    V_088F1C7C unk_0C;
    u8 pad_2C[0x14];
} E_088F1C7C;

typedef struct {
    u8 pad_00[0x804];
    E_088F1C7C *unk_804;
    u32 unk_808;
    u8 pad_80C[4];
    u8 unk_810[4];
} S_088F1C7C;

extern f32 D_089FDC20[];
extern f32 D_089FDC24[];
extern f32 D_089FDC28[];
extern f32 D_089FDC2C[];

void func_088F1C7C(S_088F1C7C *arg0) {
    E_088F1C7C *q;
    u32 temp = arg0->unk_808;
    E_088F1C7C *p = arg0->unk_804;
    u32 &n = arg0->unk_808;
    E_088F1C7C *&d = arg0->unk_804;
    E_088F1C7C *end = p + temp;
    X_088F1C7C x(arg0->unk_810, arg0);

    for (; p != end; p++) {
        x.unk_04 = p->unk_00;
        x.unk_08 = p->unk_04;
        x.unk_10 = p->unk_08;
        p->unk_0C.v08(&x);
        x.unk_3C++;
    }
    q = arg0->unk_804;
    if ((u32)q != (u32)(d + n)) {
        do {
            q++;
        } while (q != d + arg0->unk_808);
    }
    arg0->unk_808 = 0;
}

}
