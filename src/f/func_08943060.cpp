#include "common.h"

extern "C" {

class V {
public:
    virtual void func_08();
    virtual void func_0C(void *, s32 *, s32);
};

typedef struct {
    s32 unk_00;
    V *unk_04;
    void *unk_08;
    s32 *unk_0C;
} H;

typedef struct {
    u8 pad_00[0x14];
    void *volatile unk_14;
    u8 pad_18[4];
    H unk_1C;
} C;

typedef struct {
    s32 unk_00;
    s32 unk_04;
    s32 unk_08;
    u8 unk_0C;
    u8 pad_0D[3];
    void *volatile unk_10;
} B;

typedef struct {
    u8 pad_00[0x18];
    char unk_18[0x240];
    s32 unk_258;
} T;

typedef struct {
    u8 pad_00[0x14A0];
    T *unk_14A0;
} G;

extern u8 D_08A44A3C[];
extern char D_08A03D2C[];
extern char D_08A03D40[];
extern char D_08A03D54[];
extern char D_08A03D6C[];
extern char D_08A03D78[];
extern void *D_08A8812C[];
extern void *D_08AD1E28[];
extern u8 *D_08AD1F14[];

s32 func_0887744C(u8 *, char *, s32);
s32 func_0885AB7C(s32, s32, s32);
void func_08822B3C(char *, char *);
void func_088226BC(char *, char *, ...);
void func_0885DE4C(void *);
void func_0885F7EC(void *, s32);
void func_08860490(void *, s32 *, char *, s32, s32, C *, s32, s32, s32);
s32 *func_08868F6C(void *, s32, s32);
void func_088698FC(void *, void *, void *, s32, s32, s32, s32, s32, s32);
void func_08869A88(C *, B *);
void func_08883470(void);
void func_0888382C(void);

static inline void temp(char *p, s32 n) {
    if (p != NULL) {
        do {
            *p++ = 0;
        } while (--n);
    }
}

static inline void *temp2(void *p) {
    if (p != NULL) {
        return p;
    }
    return NULL;
}

void func_08943060(void *arg0, s32 arg1) {
    char a[0x40];
    char b[0x100];
    char c[0x100];
    B d;
    C e;
    void *p;
    u8 *g;
    T *t;
    s32 n;
    s32 *r;
    s32 *v;
    void *w;

    p = temp2(D_08AD1E28[0]);
    t = ((G *)(D_08AD1F14[0] != NULL ? D_08AD1F14[0] : NULL))->unk_14A0;
    temp(a, sizeof(a));
    w = D_08A8812C[0] != NULL ? D_08A8812C[0] : NULL;
    func_088698FC(p, D_08A03D78, (void *)func_0888382C, 6, 0, 0, 0, 0, 1);
    if (t->unk_258 != -1) {
        temp(b, sizeof(b));
        g = D_08AD1F14[0];
        n = t->unk_258;
        g = (u8 *)temp2(g);
        func_088226BC(b, D_08A03D6C, (char *)func_0885AB7C(func_0887744C(g, D_08A03D2C, 1), 0, n) + 0x28);
        func_088226BC(a, b);
        r = func_08868F6C(p, 6, 3);
        if (*r != 0) {
            func_0885DE4C(r);
        }
        d.unk_10 = D_08A44A3C;
        d.unk_0C = 1;
        d.unk_08 = 6;
        d.unk_00 = 0;
        d.unk_04 = 0;
        func_08869A88(&e, &d);
        func_08860490(w, r, a, 0, 0, &e, 0, 0, 0);
        if (e.unk_1C.unk_08 != NULL) {
            --**(s32 *volatile *)&e.unk_1C.unk_0C;
            v = e.unk_1C.unk_0C;
            if ((v != NULL ? *v : 0) == 0) {
                V *h = *(V *volatile *)&e.unk_1C.unk_04;
                s32 *k = *(s32 *volatile *)&e.unk_1C.unk_0C;
                h->func_0C(*(void *volatile *)&e.unk_1C.unk_08, k, e.unk_1C.unk_00);
                func_0885F7EC(e.unk_1C.unk_08, e.unk_1C.unk_00);
            }
        }
        e.unk_14 = D_08A44A3C;
        d.unk_10 = D_08A44A3C;
    }
    temp(c, sizeof(c));
    if (arg1 < 0) {
        func_08822B3C(c, ((G *)(D_08AD1F14[0] != NULL ? D_08AD1F14[0] : NULL))->unk_14A0->unk_18);
    } else {
        func_088226BC(c, D_08A03D54, func_0885AB7C(func_0887744C(D_08AD1F14[0] != NULL ? D_08AD1F14[0] : NULL, D_08A03D40, 0xF), 0, arg1));
    }
    func_088698FC(p, c, (void *)func_08883470, 6, 0x800, 0, 0, 0, 0);
}

}
