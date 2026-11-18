#include "common.h"

extern "C" {

class V {
public:
    virtual void func_08();
    virtual void func_0C();
    virtual s32 func_10();
};

typedef struct {
    u8 pad_00[0x10A0];
    V unk_10A0;
} A;

typedef struct {
    u8 pad_00[0x10];
    A *unk_10;
    u8 pad_14[0x1C];
    s32 unk_30;
    s32 unk_34;
    s32 *unk_38;
} T;

typedef struct {
    u8 pad_00[0x1AEF4];
    u16 unk_1AEF4[32];
} R;

typedef struct {
    u8 pad_00[0x1498];
    R *unk_1498;
} S;

typedef struct {
    u8 pad_00[0x42820];
    S *unk_42820;
} G;

typedef struct {
    u8 pad_00[0x14];
    s32 unk_14;
} B;

typedef struct {
    s32 unk_00;
    s32 unk_04;
} P;

extern void *D_08AD1E28[];
extern u8 *D_08AD1F14[];

void func_0881F5C0(void *, s32, s32);
void func_0882687C(u16 *, u16 *);
s32 func_08852EB8(void *);
void func_08852EDC(void *, s32);
void func_08852F00(void *, s32);
s32 *func_0885356C(void *, s32, s32, s32);
void func_088FD068(u16 *);
void func_08975F58(V *, u16 *, s32);
s32 func_08975FC0(V *);
s32 func_08976028(s32);
void func_08990390(V *, s32, P *, u16 *);
s32 func_089A8B74(u8 *, s32);

static inline void *temp(void *arg0) {
    if (arg0 != NULL) {
        return arg0;
    }
    return NULL;
}

static inline s32 temp2(s32 arg0) {
    switch (arg0) {
    case -1:
        return -2;
    case 0:
        return 1;
    case 1:
        return 0;
    case 2:
        return -3;
    case 3:
        return -1;
    }
    return 0;
}

void func_0890636C(T *arg0, void *arg1) {
    u16 a[32];
    P b;
    s32 *p;
    s32 *q;
    s32 *r;
    s32 *s;
    s32 *t;
    s32 n;
    s32 x;
    u8 *g;
    V *v;
    R *w;

    n = func_08852EB8(arg1);
    switch (n) {
    case 0: {
        p = func_0885356C(arg1, 0, 1, 4);
        q = func_0885356C(arg1, 1, 1, 4);
        r = func_0885356C(arg1, 2, 1, 4);
        s = func_0885356C(arg1, 0xF, 1, 4);
        t = func_0885356C(arg1, 4, 1, 4);
        arg0->unk_30 = *t;
        arg0->unk_34 = *r;
        arg0->unk_38 = s;
        g = (u8 *)temp(D_08AD1F14[0]) + 0x2460;
        x = *p;
        if (x == -1) {
            x = ((B *)g)->unk_14;
        }
        s32 y = *r;
        b.unk_00 = *q;
        b.unk_04 = y;
        v = &arg0->unk_10->unk_10A0;
        func_08990390(v, x, &b, (u16 *)func_089A8B74(g, *t));
        func_08852EDC(arg1, n + 1);
        break;
    }
    case 1:
        if (func_08975FC0(&arg0->unk_10->unk_10A0) != 1) {
            x = temp2(arg0->unk_10->unk_10A0.func_10());
            *arg0->unk_38 = x;
            func_08976028((s32)&arg0->unk_10->unk_10A0);
            w = ((G *)temp(D_08AD1E28[0]))->unk_42820->unk_1498;
            func_0881F5C0(a, 0, 0x40);
            if (x == 0) {
                g = (u8 *)temp(D_08AD1F14[0]) + 0x2460;
                func_0882687C(a, (u16 *)func_089A8B74(g, arg0->unk_30));
                a[arg0->unk_34] = 0;
                *arg0->unk_38 = 1;
            } else {
                func_08975F58(&arg0->unk_10->unk_10A0, a, 0x20);
            }
            func_088FD068(a);
            func_0882687C(w->unk_1AEF4, a);
            arg0->unk_38 = NULL;
            func_08852F00(arg1, 0);
        }
        break;
    }
}

}
