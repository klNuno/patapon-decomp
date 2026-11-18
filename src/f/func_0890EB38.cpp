#include "common.h"

extern "C" {

class C {
public:
    virtual void unk_08();
    virtual void unk_0C();
    virtual void unk_10();
    virtual void unk_14();
    virtual void unk_18(s32);
};

typedef struct {
    f32 unk_00[2];
} S2_089114C4;

typedef struct {
    S2_089114C4 unk_00;
    S2_089114C4 unk_08;
    S2_089114C4 unk_10;
    S2_089114C4 unk_18;
} S3_089114C4;

typedef struct {
    f32 unk_00;
    f32 unk_04;
    f32 unk_08;
    f32 unk_0C;
} V_089114C4;

typedef struct {
    f32 unk_00[3];
    f32 unk_0C;
    f32 unk_10[3];
    f32 unk_1C;
    f32 unk_20[3];
    f32 unk_2C;
    f32 unk_30[4];
} M_089114C4;

typedef struct {
    u8 pad_00[8];
    s32 unk_08;
    u8 unk_0C;
} U;

typedef struct {
    f32 unk_00;
    f32 unk_04;
    U *unk_08;
    u8 pad_0C[4];
} E;

typedef struct {
    E unk_00[10];
    u8 pad_A0[0x7D430];
    C unk_7D4D0;
} T;

void func_0886575C(s32, s32, s32);
void func_08866B54(M_089114C4 *, s32, V_089114C4 *);
void func_088651A4(void *, M_089114C4 *, S3_089114C4 *, s32, s32);
extern s32 func_08865870(void);
void *func_0890D084(s32, s32);
void *func_0890D09C(s32, s32);
s32 func_0890D0B4(s32);
s32 func_0890D0CC(s32);
void func_0890ED68(V_089114C4 *, s32, M_089114C4 *);

void func_0890EB38(T *arg0) {
    struct {
        M_089114C4 unk_00;
        u8 pad_40[0x10];
    } m;
    V_089114C4 a;
    V_089114C4 b;
    M_089114C4 n;
    V_089114C4 c;
    V_089114C4 d;
    u32 i;
    E *p;
    U *q;
    s32 v;
    void *t;

    i = 0;
    p = arg0->unk_00;
    do {
        q = p->unk_08;
        v = 0;
        if (q == NULL) {
            goto unk_00;
        }
        if ((1 ^ (q->unk_0C != 0)) == 0) {
            goto unk_00;
        }
        v = 1;
    unk_00:
        if (v != 0) {
            t = func_0890D084(q->unk_08, v);
            arg0->unk_7D4D0.unk_18(func_0890D0B4(p->unk_08->unk_08));
            func_0886575C(0, 1, 1);
            b.unk_00 = p->unk_00;
            b.unk_04 = p->unk_04;
            a.unk_0C = 1.0f;
            b.unk_08 = 0.0f;
            b.unk_0C = 0.0f;
            a.unk_00 = 0.0f;
            a.unk_04 = 0.0f;
            a.unk_08 = 0.0f;
            m.unk_00.unk_0C = 0.0f;
            m.unk_00.unk_1C = 0.0f;
            m.unk_00.unk_2C = 0.0f;
            func_08866B54(&m.unk_00, 3, &b);
            func_0890ED68(&a, 0, &m.unk_00);
            func_088651A4(t, &m.unk_00, NULL, 0, 1);
            func_08865870();
        }
        ++i;
        ++p;
    } while (i < 10);
    i = 0;
    p = arg0->unk_00;
    do {
        q = p->unk_08;
        v = 0;
        if (q == NULL) {
            goto unk_04;
        }
        if (q->unk_0C == 0) {
            goto unk_04;
        }
        v = 1;
    unk_04:
        if (v != 0) {
            t = func_0890D09C(q->unk_08, v);
            arg0->unk_7D4D0.unk_18(func_0890D0CC(p->unk_08->unk_08));
            func_0886575C(0, 1, 1);
            d.unk_00 = p->unk_00;
            d.unk_04 = p->unk_04;
            c.unk_0C = 1.0f;
            d.unk_08 = 0.0f;
            d.unk_0C = 0.0f;
            c.unk_00 = 0.0f;
            c.unk_04 = 0.0f;
            c.unk_08 = 0.0f;
            n.unk_0C = 0.0f;
            n.unk_1C = 0.0f;
            n.unk_2C = 0.0f;
            func_08866B54(&n, 3, &d);
            func_0890ED68(&c, 0, &n);
            func_088651A4(t, &n, NULL, 0, 1);
            func_08865870();
        }
        ++i;
        ++p;
    } while (i < 10);
}

}
