#include "common.h"

extern "C" {

typedef struct {
    u8 pad_00[4];
    s16 unk_04;
    u8 pad_06[0x72];
    s32 unk_78;
} E;

typedef struct {
    u8 pad_00[4];
    s32 unk_04;
} F;

typedef struct {
    f32 unk_00;
    f32 unk_04;
} V;

typedef struct {
    f32 unk_00;
    f32 unk_04;
    f32 unk_08;
    f32 unk_0C;
} R;

class T {
public:
    virtual void unk_08();
    virtual void unk_0C();
    virtual void unk_10();
    virtual void unk_14(f32, f32, s32, R *, u16 *);
    virtual void unk_18(s32);
};

typedef struct {
    u8 pad_00[0x5C];
    s32 unk_5C;
    u8 pad_60[0x10];
    T unk_70;
    u8 pad_74[0x6CC];
    f32 unk_740;
} S;

extern u8 *D_08AD1F14[];
extern f32 D_08A08490[];
extern f32 D_08A08494[];
extern f32 D_08A08498[];

s32 func_08945908(s32 *arg0, s32 arg1);
s32 func_08945924(char *arg0, s32 arg1);
s32 func_089A8B5C(u8 *, s32, s32);
void func_0882687C(u16 *, u16 *);
void func_08826830(u16 *, u16 *);
void func_088AF2FC(V *, T *, u16 *);

static inline u8 *func_089AF428_1(void) {
    u8 *p = D_08AD1F14[0];
    return p != NULL ? p : NULL;
}

void func_089AF428(S *arg0, s32 arg1) {
    u16 a[0x100];
    V b;
    struct {
        R unk_00;
        u8 pad_10[8];
    } c;
    u16 *temp = (u16 *)(u32)&a;
    E *p;
    F *q;
    u8 *g;
    f32 z = 0.0f;
    f32 x, y, u, v;

    if (arg1 != -1) {
        p = (E *)func_08945908(&arg0->unk_5C, arg1);
        q = (F *)func_08945924((char *)&arg0->unk_5C, p->unk_04);
        g = func_089AF428_1() + 0x2460;
        func_0882687C(a, (u16 *)func_089A8B5C(g, 0, p->unk_78));
        func_08826830(a, (u16 *)func_089A8B5C(g, 2, 4));
        func_08826830(a, (u16 *)func_089A8B5C(g, 0, q->unk_04));
    } else {
        a[0] = 0;
    }
    func_088AF2FC(&b, &arg0->unk_70, a);
    arg0->unk_740 = b.unk_04;
    x = D_08A08490[0];
    y = D_08A08494[0];
    u = D_08A08498[0];
    v = D_08A08498[1];
    c.unk_00.unk_00 = x;
    c.unk_00.unk_04 = y;
    c.unk_00.unk_08 = u;
    c.unk_00.unk_0C = v;
    arg0->unk_70.unk_14(z, z, 0, &c.unk_00, temp);
    arg0->unk_70.unk_18(0xA0);
}

}
