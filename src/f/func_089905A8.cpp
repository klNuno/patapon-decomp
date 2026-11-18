#include "common.h"

extern "C" {

class K;

class T {
    u8 pad_00[0x1C0];

public:
    virtual void vfunc_08();
    virtual void vfunc_0C(s32, s32, s32, s32);
};

typedef struct {
    f32 unk_00;
    f32 unk_04;
} V;

typedef struct {
    u8 pad_00[0x34];
    s32 unk_34;
    u8 pad_38[8];
} U;

typedef struct R {
    u8 pad_00[0x24];
    s32 unk_24;
} R;

typedef struct {
    u8 pad_00[0x390];
    U *unk_390;
} O;

s32 func_0892C7B0(K *);
R *func_0892AE88(s32);
s32 func_0892C060(K *);
s32 func_0892C080(K *, s32);
U *func_089378EC(O *, V *, s32, s32 *, s32 *);

void func_089905A8(O *arg0, U *arg1, T *arg2, K *arg3, const volatile V *arg4) {
    V temp;
    s32 n;
    U *p;
    s32 a;
    s32 b;

    if (arg3 != NULL) {
        f32 y = arg4->unk_04;
        f32 x = arg4->unk_00;
        temp.unk_04 = y;
        temp.unk_00 = x;
        a = func_0892C7B0(arg3);
        if (a != 0) {
            n = func_0892AE88(a)->unk_24;
            p = NULL;
            if (n >= 0) {
                p = &arg0->unk_390[n];
            }
            if (arg1 != NULL && func_0892C060(arg3) != 0) {
                p = func_089378EC(arg0, &temp, n, &((U *)func_0892C060(arg3))->unk_34, &arg1->unk_34);
            }
            if (p != NULL && p->unk_34 >= 0 && arg2 != NULL) {
                a = func_0892C080(arg3, 0);
                b = func_0892C080(arg3, 1);
                arg2->vfunc_0C(-1, p->unk_34, a, b);
            }
        }
    }
}

}
