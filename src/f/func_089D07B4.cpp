#include "common.h"

extern "C" {

class B_08870834 {
public:
    virtual void v0();
    virtual void v1();
    virtual void v2(void *);
};

class C_08870834 {
public:
    virtual void v0();
    virtual void v1(void *, s32 *, B_08870834 *);
};

void func_08874714(void *, B_08870834 *);
void func_0880416C(void *);
extern u8 D_08A48EA0[];

struct P_08870834 {
    void *unk_00;
};

struct R_08870834 {
    s32 *unk_00;
};

class E_08870834 {
public:
    B_08870834 *unk_00;
    C_08870834 *unk_04;
    P_08870834 unk_08;
    R_08870834 unk_0C;


};

class B_func_089D0D98 {
public:
    u8 pad_00[0x91C];
    virtual void vfunc_08();
    virtual void vfunc_0C();
};

typedef struct {
    u8 pad_00[0x424];
} E;

typedef struct {
    E *unk_00;
    s32 unk_04;
} V;

typedef struct {
    u8 pad_00[0x8484];
    V unk_8484;
} A;

typedef struct {
    u8 pad_00[0x8484];
    V unk_8484;
    E_08870834 unk_848C;
    u8 pad_849C[0x84];
    A unk_8520;
    u8 *unk_109AC;
} T;

T *func_089D07B4(T *arg0, s16 arg1) {
    E *p;
    E *base;
    s32 *n;
    V *v;
    A *a;
    E_08870834 *o;
    V *w;

    if (arg0 != NULL) {
        arg0->unk_109AC = D_08A48EA0;
        v = &arg0->unk_8484;
        n = &arg0->unk_8484.unk_04;
        s32 n0 = *n;
        p = arg0->unk_8484.unk_00;
        E *end = v->unk_00 + n0;
        if (p != end) {
            do {
                p++;
            } while (p != end);
        }
        arg0->unk_8484.unk_04 = 0;
        if (*(B_func_089D0D98 **)&arg0->unk_848C.unk_08 != NULL) {
            (*(B_func_089D0D98 **)&arg0->unk_848C.unk_08)->vfunc_0C();
        }
        a = &arg0->unk_8520;
        if (a != NULL) {
            p = arg0->unk_8520.unk_8484.unk_00;
            w = &arg0->unk_8520.unk_8484;
            E *b = *(E *volatile *)((u32)w);
            if ((u32)p != (u32)(b + arg0->unk_8520.unk_8484.unk_04)) {
                s32 &c = arg0->unk_8520.unk_8484.unk_04;
                do {
                    p++;
                } while (p != b + c);
            }
            arg0->unk_8520.unk_8484.unk_04 = 0;
        }
        o = &arg0->unk_848C;
        if (o != NULL) {
            if (o != NULL) {
                void **q = &arg0->unk_848C.unk_08.unk_00;
                if (*q != NULL) {
                    s32 **c = &arg0->unk_848C.unk_0C.unk_00;
                    --**c;
                    s32 *r = *(s32 *volatile *)&arg0->unk_848C.unk_0C.unk_00;
                    if ((r != NULL ? *r : 0) == 0) {
                        arg0->unk_848C.unk_04->v1(*q, *c, arg0->unk_848C.unk_00);
                        func_08874714(*q, arg0->unk_848C.unk_00);
                    }
                }
            }
        }
        if (arg0 != NULL) {
            s32 n1 = *n;
            p = arg0->unk_8484.unk_00;
            base = v->unk_00;
            if ((u32)p != (u32)(base + n1)) {
                s32 &c = arg0->unk_8484.unk_04;
                do {
                    p++;
                } while (p != base + c);
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
