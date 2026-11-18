#include "common.h"

extern "C" {

class B_08899C08 {
public:
    virtual void v0();
};

class C_08899C08 {
public:
    virtual void v0();
    virtual void v1(void *, s32 *, B_08899C08 *);
};

void func_0889A26C(void *, B_08899C08 *);

struct P_08899C08 {
    void *unk_00;
};

struct R_08899C08 {
    s32 *unk_00;
};

class E_08899C08 {
public:
    B_08899C08 *unk_00;
    C_08899C08 *unk_04;
    P_08899C08 unk_08;
    R_08899C08 unk_0C;

    void f_00() {
        void **temp;
        s32 *temp2;
        s32 temp3;

        if (this != NULL && (temp = &unk_08.unk_00, *temp != NULL)) {
            --*unk_0C.unk_00;
            temp2 = unk_0C.unk_00;
            if (temp2 != NULL) {
                temp3 = *temp2;
            } else {
                temp3 = 0;
            }
            if (temp3 == 0) {
                unk_04->v1(*temp, temp2, unk_00);
                func_0889A26C(*temp, unk_00);
            }
        }
    }
};

class S_08899C08 {
public:
    u8 pad_00[0x10];
};

typedef struct {
    u8 pad_00[0x20];
    s32 unk_20;
    u8 pad_24[0x1A8 - 0x24];
    s32 unk_1A8;
    u8 pad_1AC[0x330 - 0x1AC];
    s32 unk_330;
} R2_08899C08;

typedef struct {
    u8 pad_00[0x14A0];
    u8 *unk_14A0;
} G_08899C08;

typedef struct {
    E_08899C08 *unk_00;
    s32 unk_04;
} V_08899C08;

typedef struct {
    u8 pad_00[0x398];
    u8 unk_398[0x3D8 - 0x398];
    V_08899C08 unk_3D8;
} T_08899C08;

extern G_08899C08 *D_08AD1F14[];

void func_08899D94(S_08899C08 *);
void func_08898FCC(S_08899C08 *, void *);
void func_08898A80(S_08899C08 *, s32);
void func_0885AAF8(void *);
R2_08899C08 *func_0885AB7C(void *, s32, s32);

void func_08899C08(T_08899C08 *arg0) {
    E_08899C08 *p;
    E_08899C08 *q;
    s32 *n;
    V_08899C08 *v;
    S_08899C08 s;
    void *h;
    R2_08899C08 *r;

    v = &arg0->unk_3D8;
    p = arg0->unk_3D8.unk_00;
    q = p;
    if ((u32)p != (u32)(p + arg0->unk_3D8.unk_04)) {
        do {
            q++;
        } while (q != v->unk_00 + arg0->unk_3D8.unk_04);
    }
    if ((u32)p != (u32)(p + arg0->unk_3D8.unk_04)) {
        n = &arg0->unk_3D8.unk_04;
        do {
            if (p != NULL) {
                p->f_00();
            }
            p++;
        } while (p != v->unk_00 + *n);
    }
    arg0->unk_3D8.unk_04 = 0;
    func_08899D94(&s);
    func_08898FCC(&s, arg0->unk_398);
    func_08898A80(&s, -1);
    h = (D_08AD1F14[0] != NULL ? D_08AD1F14[0] : NULL)->unk_14A0 + 0x264;
    func_0885AAF8(h);
    func_0885AB7C(h, 0, 0);
    r = func_0885AB7C(h, 1, 0);
    func_0885AB7C(h, 2, 0);
    r->unk_20 = 0;
    r->unk_1A8 = 1;
    r->unk_330 = 2;
}

}
