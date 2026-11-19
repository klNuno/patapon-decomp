#include "common.h"

extern "C" {
struct Unk0 {
    u8 pad_00[4];
    s32 unk_04;
    u32 unk_08, unk_0C;
};
struct N;
struct B {
    N *unk_00, *unk_04;
};
struct N {
    B unk_00;
    Unk0 unk_08;
};
struct I {
    N *unk_00;

    s32 unk_04(const I &arg0) const { return unk_00 == arg0.unk_00; }
    bool unk_08(const I &arg0) const { return !(bool)unk_04(arg0); }
};
struct E { u8 pad_00[0x18]; };
struct V {
    E *unk_00;
    s32 unk_04;
};
struct T {
    u8 pad_00[0x10];
    f32 unk_10;
    u8 unk_14[0xB0];
    u8 unk_C4[0x2778];
    u8 unk_283C;
    u8 pad_283D[7];
    u8 unk_2844[0x854];
    u8 unk_3098;
    u8 pad_3099[0x607];
    V unk_36A0;
    u8 pad_36A8[0x814];
    B unk_3EBC;
    N *unk_3EC4;
    s32 unk_3EC8;
};

s32 func_088586E8(void);
u8 *func_089B53CC(s32);
f32 func_08866564(f32, s32, s32);
void func_0887B9C0(f32, u8 *);
void func_0883D7C4(s32, s32);
s32 func_0883C8A4(s32);
void func_088793A0(void *);
s32 func_0898E2AC(Unk0 *);
void func_0898E1AC(Unk0 *);
void func_08923298(void *, s32);
void func_0897BCA0(void *, s32);
void func_088A4040(void *, s32);
void func_088792C0(f32, T *);
void func_089233F4(void *);

void func_088785B4(T *arg0, s32 arg1) {
    I i, end;
    u32 a;
    u32 *u;
    s32 b;
    E *p;
    E *e;
    s32 n;
    f32 f, g;

    if (func_089B53CC(func_088586E8())[1] != 0) {
        f = func_08866564(1.0f, arg1, 0x12C0);
        g = arg0->unk_10;
        g *= f;
        func_0887B9C0(g, func_089B53CC(func_088586E8()));
        return;
    }
    func_0883D7C4(0x80, 0x80);
    i.unk_00 = arg0->unk_3EBC.unk_00;
    end.unk_00 = (N *)&arg0->unk_3EBC;
    if (i.unk_08(end)) {
        do {
            Unk0 *q = &i.unk_00->unk_08;
            if (q->unk_04 < 0) {
                b = 0;
            } else {
                b = (func_0883C8A4(*(volatile s32 *)&q->unk_04) & 7) != 0;
            }
            if (b == 0) {
                N *it, *r, *s, *t;
                it = i.unk_00;
                i.unk_00 = i.unk_00->unk_00.unk_00;
                --arg0->unk_3EC8;
                func_088793A0(&it->unk_08);
                r = arg0->unk_3EC4;
                s = it->unk_00.unk_00;
                it->unk_00.unk_04->unk_00.unk_00 = s;
                t = s->unk_00.unk_04;
                s->unk_00.unk_04 = it->unk_00.unk_04;
                it->unk_00.unk_04 = r->unk_00.unk_04;
                (*(N *volatile *)&r->unk_00.unk_04)->unk_00.unk_00 = it;
                r->unk_00.unk_04 = t;
                t->unk_00.unk_00 = r;
            } else {
                if (func_0898E2AC(q) == 0) {
                    a = (q->unk_08 += arg1);
                    u = q->unk_0C < a ? &q->unk_0C : &q->unk_08;
                    q->unk_08 = *u;
                    func_0898E1AC(q);
                } else {
                    if (q->unk_04 < 0) q->unk_04 = -1;
                }
                i.unk_00 = i.unk_00->unk_00.unk_00;
            }
        } while (i.unk_08(end));
    }
    func_08923298(arg0->unk_2844, arg1);
    func_0897BCA0(arg0->unk_14, arg1);
    func_088A4040(arg0->unk_C4, arg1);
    if (arg0->unk_283C != 0) {
        func_088792C0(-1.0f, arg0);
        func_089233F4(arg0->unk_2844);
        arg0->unk_283C = 0;
    }
    n = arg0->unk_36A0.unk_04;
    p = arg0->unk_36A0.unk_00;
    n *= sizeof(E);
    V *v = &arg0->unk_36A0;
    if ((u32)p != (u32)((u8 *)p + n)) {
        e = (E *)((u8 *)*(E *volatile *)&v->unk_00 + n);
        do {
            ++p;
        } while (p != e);
    }
    arg0->unk_36A0.unk_04 = 0;
    f = func_08866564(1.0f, arg1, 0x12C0);
    g = arg0->unk_10;
    g *= f;
    func_0887B9C0(g, func_089B53CC(func_088586E8()));
    arg0->unk_3098 = 0;
}
}
