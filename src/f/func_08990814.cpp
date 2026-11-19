#include "common.h"

extern "C" {

typedef struct {
    f32 unk_00;
    f32 unk_04;
} V;

typedef struct {
    V unk_00;
    u8 pad_08[8];
} V2;

typedef struct {
    u8 pad_00[0x34];
    s32 unk_34;
    u8 pad_38[8];
} U;

typedef struct {
    u8 pad_00[0x390];
    U *unk_390;
} O;

class T {
    u8 pad_00[0x1C0];

public:
    virtual void vfunc_08();
    virtual void vfunc_0C(s32, s32, s32, s32);
};

typedef struct {
    f32 unk_00, unk_04, unk_08, unk_0C;
} F;

typedef struct {
    u8 unk_00;
    s32 unk_04;
    s32 unk_08;
    s32 unk_0C;
    u8 unk_10[4];
    s32 unk_14;
    s32 unk_18;
    u8 pad_1C[4];
    F unk_20;
    s32 unk_30;
    F *unk_34;
    s32 unk_38;
    s32 unk_3C;
    f32 unk_40;
    u8 pad_44[0xC];
} A;

struct R {
    R(const R &);
    u8 pad_00[4];
    u8 unk_04;
    u8 unk_05;
    u8 pad_06[0x1A];
    s32 unk_20;
    u8 pad_24[0xC];
};

typedef struct {
    u8 pad_00[0x30];
    f32 unk_30;
    f32 unk_34;
} B;

class K {
public:
    u8 pad_00[0x16C];
    virtual void v08();
    virtual void v0C();
    virtual B *v10();
    virtual s32 v14();
};

class X {
public:
    u8 pad_00[0x24];
    virtual void v08();
    virtual void v0C();
    virtual void v10();
    virtual R v14(A *);
};

typedef struct {
    u8 pad_00[0x20];
    V unk_20;
    u8 pad_28[0x19];
    u8 unk_41;
    u8 pad_42[0xA];
    K *unk_4C;
} P;

typedef struct {
    u8 pad_00[0x48];
    X *unk_48;
    u8 pad_4C[8];
    s32 unk_54;
} Q;

typedef struct {
    u8 pad_00[0x10];
} S;

typedef struct {
    u8 pad_00[0x10];
    U *unk_10;
} D;

void func_0881F5C0(void *, s32, s32);
D *func_08889214(void *);
void func_088F5C18(A *, s32);
s32 func_0892ABC4(s32, s32);
O *func_0892AC00(s32);
s32 func_0892C060(K *);
s32 func_0892C068(K *);
void func_08931DDC(s32, s32, s32, S *);
void func_08990424(S *, P *, Q *);
void func_089905A8(O *arg0, U *arg1, T *arg2, K *arg3, const volatile V *arg4);

void func_08990814(P *arg0, Q *arg1) {
    V2 v;
    A a;
    K *k = arg0->unk_4C;
    s32 type;
    if (k != NULL) {
        type = arg1->unk_54;
        switch (type) {
        case 6:
        case 7:
            if (k != NULL) {
                X *x = arg1->unk_48;
                if (func_0892C060(k) != 0) {
                    a.unk_0C = -1;
                    func_0881F5C0(a.unk_10, 0, 4);
                    a.unk_00 = 1;
                    a.unk_0C = -1;
                    a.unk_04 = 0;
                    a.unk_08 = 0;
                    func_0881F5C0(a.unk_10, 0, 4);
                    a.unk_14 = -1;
                    a.unk_18 = 0xB;
                    a.unk_40 = 0.5f;
                    a.unk_30 = 0;
                    a.unk_34 = NULL;
                    a.unk_38 = 0;
                    a.unk_3C = 0;
                    a.unk_20.unk_00 = 0.0f;
                    a.unk_20.unk_04 = 0.0f;
                    a.unk_20.unk_08 = 0.0f;
                    a.unk_20.unk_0C = 0.0f;
                    func_088F5C18(&a, func_0892C060(k));
                    a.unk_40 = 1.0f;
                    a.unk_14 = func_0892C068(k);
                    f32 y = arg0->unk_20.unk_04;
                    f32 z = arg0->unk_20.unk_00;
                    a.unk_20.unk_00 = z;
                    a.unk_20.unk_04 = y;
                    a.unk_20.unk_0C = 1.0f;
                    a.unk_34 = &a.unk_20;
                    a.unk_20.unk_08 = 0.0f;
                    a.unk_04 = 2;
                    R r = x->v14(&a);
                    s32 f = 1 ^ (r.unk_04 != 0);
                    if (f == 0) {
                        f = r.unk_05 != 0;
                    }
                    arg0->unk_41 = f;
                    if (r.unk_04 != 0) {
                        S s;
                        s32 p = k->v14();
                        func_08990424(&s, arg0, arg1);
                        func_08931DDC(func_0892ABC4(p, 1), 0, r.unk_20, &s);
                        f32 t, w;
                        w = k->v10()->unk_34;
                        t = k->v10()->unk_30;
                        U *u = NULL;
                        if (type == 7) {
                            u = func_08889214(x)->unk_10;
                        }
                        v.unk_00.unk_00 = t;
                        v.unk_00.unk_04 = w;
                        func_089905A8(func_0892AC00(p), u, NULL, k, &v.unk_00);
                    }
                }
            }
            break;
        case 2:
        case 0:
        case 9:
            break;
        }
    }
}

}
