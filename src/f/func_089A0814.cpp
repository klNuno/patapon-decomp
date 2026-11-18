#include "common.h"

extern "C" {

typedef struct {
    u8 pad_00[0x60];
} E1;

typedef struct {
    E1 *unk_00;
    s32 unk_04;
} V1;

typedef struct {
    u8 pad_00[0xD84];
    V1 unk_D84;
} I1;

class B1 {
public:
    virtual void v08();
    virtual void v0C();
};

typedef struct {
    void *unk_00;
    I1 unk_04;
} M34;

class C2 {
public:
    virtual void v08();
    virtual void v0C(s32, s32 *, s32);
};

void func_089A134C(s32, s32);

class E2 {
public:
    s32 unk_00;
    C2 *unk_04;
    s32 unk_08;
    s32 *unk_0C;

    void destroy() {
        s32 *temp;
        s32 temp3;

        if (this != NULL && (temp = &unk_08, *temp != 0)) {
            --*unk_0C;
            if (unk_0C != NULL) {
                temp3 = *unk_0C;
            } else {
                temp3 = 0;
            }
            if (temp3 == 0) {
                unk_04->v0C(*temp, unk_0C, unk_00);
                func_089A134C(*temp, unk_00);
            }
        }
    }
};

typedef struct {
    E2 *unk_00;
    u32 unk_04;
} V2;

typedef struct {
    u8 pad_00[0x130];
    V2 unk_130;
} MDE0;

typedef struct {
    u8 pad_00[0xC];
    u8 unk_0C[0x14];
    u8 unk_20[0x14];
    M34 unk_34;
    u8 pad_DC4[0xDE0 - 0xDC4];
    MDE0 unk_DE0;
} S;

extern u8 D_08A44C14[];
extern u8 D_08A44C60[];
extern u8 D_08A44CAC[];
void func_0880416C(void *);
void func_0893E914(void *, s32);
void func_089757B8(void *, s32);

S *func_089A0814(S *arg0, s16 arg1) {
    E1 *p;
    V1 *v;
    E2 *q;
    V2 *w;

    if (arg0 != NULL) {
        if (&arg0->unk_DE0 != NULL) {
            q = arg0->unk_DE0.unk_130.unk_00;
            w = &arg0->unk_DE0.unk_130;
            if ((u32)q != (u32)(q + arg0->unk_DE0.unk_130.unk_04)) {
                u32 *ws = &arg0->unk_DE0.unk_130.unk_04;
                do {
                    if (q != NULL) {
                        q->destroy();
                    }
                    q++;
                } while (q != w->unk_00 + *ws);
            }
            arg0->unk_DE0.unk_130.unk_04 = 0;
        }
        if (&arg0->unk_34 != NULL) {
            arg0->unk_34.unk_00 = D_08A44CAC;
            if (&arg0->unk_34 != NULL) {
                arg0->unk_34.unk_00 = D_08A44C60;
                ((B1 *)&arg0->unk_34)->v0C();
                if (&arg0->unk_34.unk_04 != NULL) {
                    p = arg0->unk_34.unk_04.unk_D84.unk_00;
                    v = &arg0->unk_34.unk_04.unk_D84;
                    if ((u32)p != (u32)(p + arg0->unk_34.unk_04.unk_D84.unk_04)) {
                        do {
                            p++;
                        } while (p != v->unk_00 + arg0->unk_34.unk_04.unk_D84.unk_04);
                    }
                    arg0->unk_34.unk_04.unk_D84.unk_04 = 0;
                }
                if (&arg0->unk_34 != NULL) {
                    arg0->unk_34.unk_00 = D_08A44C14;
                }
            }
        }
        func_0893E914(arg0->unk_20, -1);
        func_089757B8(arg0->unk_0C, -1);
        if (arg1 > 0) {
            func_0880416C(arg0);
        }
    }
    return arg0;
}

}
