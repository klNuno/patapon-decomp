#include "common.h"

extern "C" {

struct E {
    u8 pad_00[4];
    s16 unk_04;
    u8 pad_06[0x72];
    s32 unk_78;
    s32 unk_7C;
};

struct F {
    u8 pad_00[4];
    s32 unk_04;
};

struct R {
    f32 unk_00;
    f32 unk_04;
    f32 unk_08;
    f32 unk_0C;
};

class T {
public:
    virtual void unk_08();
    virtual void unk_0C();
    virtual void unk_10();
    virtual void unk_14(f32, f32, s32, R *, u16 *);
    virtual void unk_18(s32);
};

struct S {
    u8 pad_00[0x100];
    s32 unk_100;
    u8 pad_104[0xC];
    T unk_110;
    u8 pad_114[0x6CC];
    T unk_7E0;
    u8 pad_7E4[0x6B8];
    s32 unk_E9C;
    u8 pad_EA0[0x14];
    s32 unk_EB4;
};

extern u8 *D_08AD1F14[];
extern f32 D_089F0748[];
extern f32 D_089F0750[];
extern f32 D_089F0760[];
extern f32 D_08A08400[];
extern f32 D_08A08408[];
extern s32 D_08A08410[];
extern char D_08A08414[];

s32 func_08945908(s32 *arg0, s32 arg1);
s32 func_08945924(char *arg0, s32 arg1);
s32 func_089A8B5C(u8 *, s32, s32);
void func_0882687C(u16 *, u16 *);
void func_08826830(u16 *, u16 *);
void func_088B3120(u8 *, s32, char *);

static inline u8 *func_089AEBE4_1(void) {
    u8 *p = D_08AD1F14[0];
    return p != NULL ? p : NULL;
}

static inline const s32 &func_089AEBE4_2(const s32 &a, const s32 &b) {
    return a < b ? b : a;
}

void func_089AEBE4(S *arg0, s32 arg1) {
    u16 a[0x400];
    u16 b[4];
    u16 c[4];
    s32 n;
    struct {
        R unk_00;
        u8 pad_10[0xC];
    } d;
    f32 y, x;
    u16 *p;

    x = D_089F0760[0];
    y = D_089F0760[1];
    p = (u16 *)(u32)&b;

    if (arg1 != -1) {
        E *e = (E *)func_08945908(&arg0->unk_100, arg1);
        F *f = (F *)func_08945924((char *)&arg0->unk_100, e->unk_04);
        u8 *g = func_089AEBE4_1();
        func_088B3120((u8 *)c, 4, D_08A08414);
        u16 *q = (u16 *)func_089A8B5C(g + 0x2460, 0, e->unk_78);
        u16 *r = (u16 *)func_089A8B5C(g + 0x2460, 0, f->unk_04);
        func_0882687C(a, q);
        func_08826830(a, c);
        func_08826830(a, r);
        p = (u16 *)func_089A8B5C(g + 0x2460, 0, e->unk_7C);
    } else {
        b[0] = 0;
        a[0] = 0;
    }
    d.unk_00.unk_00 = D_08A08400[0];
    d.unk_00.unk_04 = D_08A08400[1];
    d.unk_00.unk_08 = D_08A08408[0];
    d.unk_00.unk_0C = D_08A08408[1];
    arg0->unk_110.unk_14(D_089F0750[0] + D_089F0748[0], D_089F0750[1] + D_089F0748[1], 0, &d.unk_00, a);
    arg0->unk_110.unk_18(0xA0);
    arg0->unk_7E0.unk_14(x + D_089F0748[0], y + D_089F0748[1], 0, &d.unk_00, p);
    arg0->unk_7E0.unk_18(0xA0);
    n = arg0->unk_E9C - 6;
    arg0->unk_EB4 = -func_089AEBE4_2(D_08A08410[0], n);
}

}
