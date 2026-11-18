#include "common.h"

extern "C" {

typedef struct {
    u8 pad_00[4];
    u8 unk_04;
    u8 pad_05;
    u8 unk_06;
} A0;

typedef struct {
    u8 pad_00[0xB0];
    s32 unk_B0;
    u8 pad_B4[0x14];
    u8 unk_C8[4];
} B;

typedef struct {
    u8 pad_00[0x658];
    B *unk_658;
    u8 pad_65C[0xD0];
    u8 unk_72C[0x14];
    u8 unk_740[0x258];
    u8 unk_998[4];
} A1;

typedef struct {
    u8 pad_00[0x14];
    s32 unk_14;
    u8 pad_18[8];
    u8 unk_20[0x1C];
    s32 unk_3C;
} A2;

typedef struct {
    s32 unk_00;
} It;

extern f32 D_089FA244[];
extern s32 func_088D1C7C(A0 *, A1 *, A2 *);
extern s32 func_088D1EF0(A1 *);
f32 *func_08992A3C(void *, s32);
void func_08860FBC(It *, void *);
void func_08860FC4(It *, void *);
void func_08888C88(void *, s32 *);
void func_08888D18(It *, void *, s32);
s32 func_08888DA8(void);
s32 func_08888DB0(void *);
s32 func_08888DB8(It *, It *);
void func_08888DD0(It *);
s32 *func_08888DE4(It *);
void func_08888DF0(It *, It *);
void func_08888E00(It *);
void func_0888926C(A1 *, void *, f32);
void func_088F5D44(A2 *, A0 *, void *, void *, s32, f32);
void func_089922B4(f32 *);

static inline It *end(It *e, void *c) { func_08860FBC(e, c); return e; }

static inline s32 add(void *c, s32 *v) {
    It it;
    It b;
    It e;
    func_08888E00(&it);
    func_08860FC4(&b, c);
    func_08888DF0(&it, &b);
    while (func_08888DB8(&it, end(&e, c)) != 0) {
        if (*v == *func_08888DE4(&it)) {
            return 1;
        }
        func_08888DD0(&it);
    }
    if (func_08888DB0(c) == func_08888DA8()) {
        It b2;
        It r;
        func_08860FC4(&b2, c);
        func_08888DF0(&it, &b2);
        func_08888D18(&r, c, it.unk_00);
    }
    func_08888C88(c, v);
    return 0;
}

static inline const f32 *max_f(const f32 *a, const f32 *b) { return (*a < *b) ? b : a; }

s32 func_08888A78(A0 *arg0, A1 *arg1, A2 *arg2) {
    func_088D1C7C(arg0, arg1, arg2);
    if (arg0->unk_04 == 1) {
        arg0->unk_06 = arg1->unk_658->unk_B0 != 0;
        if (arg2->unk_3C != 0) {
            s32 v;
            arg0->unk_04 = 0;
            v = arg2->unk_14;
            if ((u8)add(arg1->unk_998, &v) == 0) {
                void *p;
                func_088F5D44(arg2, arg0, arg1->unk_658->unk_C8, arg1->unk_72C, 0, 0.5f);
                p = arg1->unk_740;
                if (p != NULL) {
                    f32 *f = func_08992A3C(p, 0);
                    if (f[0] > 0.0f) {
                        func_0888926C(arg1, arg2->unk_20, *max_f(D_089FA244, &f[1]));
                        func_089922B4(f);
                    }
                }
            }
        }
        if (arg0->unk_04 == 1) {
            func_088D1EF0(arg1);
        }
    }
    return 0;
}

}
