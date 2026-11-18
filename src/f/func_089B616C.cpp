#include "common.h"

extern "C" {

class A {
public:
    u8 pad_00[0x91C];
    virtual void unk_08();
    virtual void unk_0C();
};

class B_08870834;
class C_08870834 {
public:
    virtual void v0();
    virtual void v1(void *, s32 *, B_08870834 *);
};

typedef struct {
    u8 pad_00[0x424];
} E;

typedef struct {
    E *unk_00;
    s32 unk_04;
} V;

typedef struct {
    B_08870834 *unk_00;
    C_08870834 *unk_04;
    void *unk_08;
    s32 *unk_0C;
} P;

typedef struct {
    u8 pad_00[0x8484];
    V unk_8484;
    P unk_848C;
    u8 pad_849C[0x8520 - 0x849C];
    u8 unk_8520[0x109A4 - 0x8520];
    V unk_109A4;
    void *unk_109AC;
} S;

extern u8 D_08A48B14[];
void func_0880416C(void *);
void func_08874714(void *, B_08870834 *);

S *func_089B616C(S *arg0, s16 arg1)
{
    E **p;
    s32 *n;
    E *a;
    E *b;
    A *q;

    if (arg0 != NULL) {
        arg0->unk_109AC = D_08A48B14;
        p = &arg0->unk_8484.unk_00;
        n = &arg0->unk_8484.unk_04;
        a = arg0->unk_8484.unk_00;
        b = *p + *n;
        if (a != b) {
            do {
                a++;
            } while (a != b);
        }
        arg0->unk_8484.unk_04 = 0;

        q = (A *)arg0->unk_848C.unk_08;
        if (q != NULL) {
            q->unk_0C();
        }

        if (arg0->unk_8520 != NULL) {
            E *x = arg0->unk_109A4.unk_00;
            V *vp = &arg0->unk_109A4;
            if ((u32)x != (u32)(*(E **)vp + arg0->unk_109A4.unk_04)) {
                s32 *sp = &arg0->unk_109A4.unk_04;
                do {
                    x++;
                } while (x != vp->unk_00 + *sp);
            }
            arg0->unk_109A4.unk_04 = 0;
        }

        P *r = &arg0->unk_848C;
        if (r != NULL && r != NULL) {
            void **t = &arg0->unk_848C.unk_08;
            if (*t != NULL) {
                s32 **c = &arg0->unk_848C.unk_0C;
                --**c;
                s32 *v = arg0->unk_848C.unk_0C;
                if ((v != NULL ? *v : 0) == 0) {
                    arg0->unk_848C.unk_04->v1(*t, *c, arg0->unk_848C.unk_00);
                    func_08874714(*t, arg0->unk_848C.unk_00);
                }
            }
        }

        if (arg0 != NULL) {
            E *x = arg0->unk_8484.unk_00;
            E *y = *p;
            if ((u32)x != (u32)(y + *n)) {
                s32 *sp = &arg0->unk_8484.unk_04;
                do {
                    x++;
                } while (x != y + *sp);
            }
            arg0->unk_8484.unk_04 = 0;
        }
        if (arg1 > 0) {
            func_0880416C(arg0);
        }
    }
    return arg0;
}

}
