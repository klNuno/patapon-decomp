#include "common.h"

extern "C" {

struct A {
    virtual void unk_08();
    virtual void unk_0C(s32, s32 *, s32);
};

struct H {
    s32 unk_00;
    A *unk_04;
    s32 unk_08;
    s32 *unk_0C;

    s32 count() { return unk_0C != NULL ? *unk_0C : 0; }
};

typedef struct {
    s32 unk_00;
    f32 unk_04;
} P;

typedef struct {
    u8 pad_00[0x48];
    char unk_48[0x28];
    f32 unk_70;
} E;

typedef struct {
    u8 pad_00[0x1640];
    u8 unk_1640[8];
    s32 unk_1648;
} T;

void func_0886A45C(s32, s32);
s32 func_0892A498(T *, s32, s32, s32, s32, s32);
s32 func_08945908(s32, s32);
s32 func_08991310(void *, s8 *);
void func_089913A0(H *, void *, s32);
void func_0892B7AC(s32, s32);
void func_0892CAA0(char *, char *);

s32 func_0892A748(T *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    H h;
    P p;
    s32 a;
    E *e;
    s32 i;

    a = func_0892A498(arg0, arg2, arg3, arg4, 3, arg1);
    if (a == 0) {
        return 0;
    }
    if (arg1 != -1) {
        e = (E *)func_08945908((s32)arg0->unk_1640, arg1);
        i = func_08991310((void *)arg0->unk_1648, (s8 *)e->unk_48);
        if (i != -1) {
            func_089913A0(&h, (void *)arg0->unk_1648, i);
            func_0892B7AC(a, h.unk_08);
            if (h.unk_08 != 0) {
                *h.unk_0C -= 1;
                if (h.count() == 0) {
                    h.unk_04->unk_0C(h.unk_08, *(s32 **)&h.unk_0C, h.unk_00);
                    func_0886A45C(h.unk_08, h.unk_00);
                }
            }
        }
        p.unk_04 = e->unk_70;
        p.unk_00 = 0;
        func_0892CAA0((char *)a, (char *)&p);
    }
    return a;
}
}
