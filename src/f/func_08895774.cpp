#include "common.h"

extern "C" {

typedef struct {
    f32 unk_00, unk_04, unk_08, unk_0C;
} V4;

typedef struct {
    s32 unk_00;
    u8 unk_04, unk_05, unk_06, unk_07;
    u8 pad_08[8];
    V4 unk_10;
    f32 unk_20;
} A0;

typedef struct {
    u8 pad_00[0x14];
    s32 unk_14;
} A2;

typedef struct {
    u8 pad_00[0x10];
    void *unk_10;
} B;

typedef struct {
    u8 pad_00[0xB0];
    V4 unk_B0;
} P;

typedef struct {
    u8 pad_00[0x74];
    u8 unk_74[4];
} N;

typedef struct {
    u8 pad_00[0x114];
    B *unk_114;
    u8 pad_118[0x298];
    P unk_3B0;
    u8 pad_470[0x24];
    N unk_494;
} S;

typedef struct {
    u8 pad_00[0x77E4];
    f32 unk_77E4;
    u8 pad_77E8[0x568];
    S unk_7D50;
    u8 pad_825C[0x1084];
    s32 unk_92E0;
} A1;

typedef struct {
    s32 unk_00;
} It;

void func_08854CD8(V4 *, V4 *, V4 *);
s32 func_088586E8(void);
void func_08860FBC(It *, void *);
void func_08860FC4(It *, void *);
void func_08878864(s32, s32, s32, f32, f32, f32);
void func_08888C88(void *, s32 *);
void func_08888D18(It *, void *, s32);
s32 func_08888DA8(void);
s32 func_08888DB0(void *);
s32 func_08888DB8(It *, It *);
void func_08888DD0(It *);
s32 *func_08888DE4(It *);
void func_08888DF0(It *, It *);
void func_08888E00(It *);
s32 func_088F5BA0(s32);
void func_088F5D44(A2 *, A0 *, void *, void *, s32, f32);
s32 func_089B53D8(s32);

static inline It *unk_00(It *arg0, void *arg1) {
    func_08860FBC(arg0, arg1);
    return arg0;
}

s32 func_08895774(A0 *arg0, A1 *arg1, A2 *arg2) {
    s32 k;
    It it, a, b, c;
    struct { u8 pad_00[8]; It unk_08; } d;
    V4 v;
    N *n;
    s32 ret;
    S *s;
    P *p;
    f32 f;

    arg0->unk_00 = 0;
    arg0->unk_04 = 0;
    arg0->unk_06 = 0;
    arg0->unk_05 = 0;
    arg0->unk_07 = 0;
    arg0->unk_10.unk_00 = 0.0f;
    arg0->unk_10.unk_04 = 0.0f;
    arg0->unk_10.unk_08 = 0.0f;
    arg0->unk_10.unk_0C = 1.0f;
    arg0->unk_20 = 0.0f;
    s = &arg1->unk_7D50;
    if (func_088F5BA0((s32)s->unk_114) != 0) {
        return 0;
    }
    k = arg2->unk_14;
    n = &s->unk_494;
    func_08888E00(&it);
    func_08860FC4(&a, ((N *&)n)->unk_74);
    func_08888DF0(&it, &a);
    while (func_08888DB8(&it, unk_00(&b, ((N *&)n)->unk_74)) != 0) {
        if (k == *func_08888DE4(&it)) {
            ret = 1;
            goto end;
        }
        func_08888DD0(&it);
    }
    if (func_08888DB0(((N *&)n)->unk_74) == func_08888DA8()) {
        func_08860FC4(&c, ((N *&)n)->unk_74);
        func_08888DF0(&it, &c);
        func_08888D18(&d.unk_08, ((N *&)n)->unk_74, it.unk_00);
    }
    func_08888C88(((N *&)n)->unk_74, &k);
    ret = 0;
end:
    if (ret != 0) {
        return 0;
    }
    v.unk_00 = 0.0f;
    v.unk_04 = 0.0f;
    v.unk_08 = 0.0f;
    v.unk_0C = 0.0f;
    func_088F5D44(arg2, arg0, s->unk_114->unk_10, s->unk_114, (s32)&v, arg1->unk_77E4);
    f = arg1->unk_92E0 == 1 ? -1.0f : 1.0f;
    v.unk_00 *= f;
    if (v.unk_00 != 0.0f || v.unk_04 != 0.0f) {
        func_08878864(func_089B53D8(func_088586E8()), 0x150008, 2, 1.0f, 0.0f, 0.0f);
    }
    p = &s->unk_3B0;
    func_08854CD8(&p->unk_B0, &p->unk_B0, &v);
    p->unk_B0.unk_0C = 0.0f;
    return 0;
}

}
