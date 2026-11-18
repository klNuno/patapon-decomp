#include "common.h"

extern "C" {

class V {
public:
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual s32 v3();
};

class K {
public:
    u8 pad_00[0x16C];
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual s32 v3();
};

typedef struct P {
    s32 unk_00;
    s32 unk_04;
    s32 unk_08;
} P;

typedef struct R {
    u8 pad_00[0x24];
    s32 unk_24;
} R;

typedef struct O {
    u8 pad_00[0x20];
    u8 unk_20[0x21];
    u8 unk_41;
    u8 pad_42[0xA];
    K *unk_4C;
} O;

typedef struct A {
    u8 pad_00[0x54];
    s32 unk_54;
} A;

s32 func_0892C7B0(K *);
R *func_0892AE88(s32);
s32 func_0892C060(K *);
s32 func_0892AC00(s32);
void func_089378EC(s32, void *, s32, s32, P *);

void func_089298BC(O *arg0, A *arg1) {
    s32 r;
    K *k;
    s32 t;
    s32 h;
    P p;

    k = arg0->unk_4C;
    if (k == NULL) {
        return;
    }
    switch (arg1->unk_54) {
    case 2:
        break;
    case 0:
        break;
    case 6:
        break;
    case 7:
        break;
    case 9:
        arg0->unk_41 = 0;
        if (k != NULL) {
            t = func_0892C7B0(k);
            if (t != 0) {
                r = func_0892AE88(t)->unk_24;
                p.unk_00 = -1;
                p.unk_04 = -1;
                p.unk_08 = 5;
                h = k->v3();
                if (func_0892C060(k) != 0) {
                    func_089378EC(func_0892AC00(h), arg0->unk_20, r, func_0892C060(k) + 0x34, &p);
                }
            }
        }
        break;
    }
}

}
