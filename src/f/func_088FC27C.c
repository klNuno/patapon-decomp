#include "common.h"

typedef struct { f32 unk_00, unk_04; } V2;
typedef struct { f32 unk_00, unk_04, unk_08, unk_0C; } V4;
typedef struct { u8 pad_00[0x4C]; f32 unk_4C, unk_50; } W;
typedef struct { u32 unk_00, unk_04; s32 unk_08; } T;

extern V2 D_089FE360[];
extern V2 D_089FE368[];
void func_089B295C(s32, V4 *, s32);
void func_089B298C(s32, s32, T *, V2 *);
void func_089B2A88(s32);
W *func_089B2A98(s32, s32);

void func_088FC27C(T *arg0, V2 *arg1) {
    V2 a, b, c, d, e, f, g, h, i, j, k;
    struct { V4 unk_00; u8 pad_10[8]; } l;
    u32 temp;
    W *ptr;
    f32 x, y;

    l.unk_00.unk_00 = D_089FE360[0].unk_00;
    l.unk_00.unk_04 = D_089FE360[0].unk_04;
    l.unk_00.unk_08 = D_089FE368[0].unk_00;
    l.unk_00.unk_0C = D_089FE368[0].unk_04;
    func_089B295C(arg0->unk_08, &l.unk_00, 1);
    a.unk_00 = arg1->unk_00;
    a.unk_04 = arg1->unk_04;
    d.unk_00 = 1.0f; d.unk_04 = 1.0f;
    func_089B298C(arg0->unk_08, 0x22, (T *)&a, &d);
    a.unk_04 += func_089B2A98(arg0->unk_08, 0x22)->unk_50;
    for (temp = 0; temp < arg0->unk_04; ++temp) {
        e.unk_00 = 1.0f; e.unk_04 = 1.0f;
        func_089B298C(arg0->unk_08, 0x28, (T *)&a, &e);
        a.unk_04 += func_089B2A98(arg0->unk_08, 0x28)->unk_50;
    }
    f.unk_00 = 1.0f; f.unk_04 = 1.0f;
    func_089B298C(arg0->unk_08, 0x24, (T *)&a, &f);
    a.unk_00 += func_089B2A98(arg0->unk_08, 0x24)->unk_4C;
    g.unk_00 = (f32)arg0->unk_00;
    g.unk_04 = 1.0f;
    func_089B298C(arg0->unk_08, 0x27, (T *)&a, &g);
    ptr = func_089B2A98(arg0->unk_08, 0x27);
    a.unk_00 += (f32)arg0->unk_00 * ptr->unk_4C;
    h.unk_00 = 1.0f; h.unk_04 = 1.0f;
    func_089B298C(arg0->unk_08, 0x25, (T *)&a, &h);
    a.unk_04 -= func_089B2A98(arg0->unk_08, 0x25)->unk_50;
    a.unk_00 = arg1->unk_00;
    a.unk_04 = arg1->unk_04;
    a.unk_00 += func_089B2A98(arg0->unk_08, 0x22)->unk_4C;
    i.unk_00 = (f32)arg0->unk_00;
    i.unk_04 = 1.0f;
    func_089B298C(arg0->unk_08, 0x26, (T *)&a, &i);
    ptr = func_089B2A98(arg0->unk_08, 0x26);
    a.unk_00 += (f32)arg0->unk_00 * ptr->unk_4C;
    j.unk_00 = 1.0f; j.unk_04 = 1.0f;
    func_089B298C(arg0->unk_08, 0x23, (T *)&a, &j);
    a.unk_04 += func_089B2A98(arg0->unk_08, 0x23)->unk_50;
    for (temp = 0; temp < arg0->unk_04; ++temp) {
        k.unk_00 = 1.0f; k.unk_04 = 1.0f;
        func_089B298C(arg0->unk_08, 0x29, (T *)&a, &k);
        a.unk_04 += func_089B2A98(arg0->unk_08, 0x29)->unk_50;
    }
    y = arg1->unk_04 + func_089B2A98(arg0->unk_08, 0x22)->unk_50;
    x = arg1->unk_00 + func_089B2A98(arg0->unk_08, 0x22)->unk_4C;
    b.unk_04 = y;
    b.unk_00 = x;
    ptr = func_089B2A98(arg0->unk_08, 0x28);
    y = (f32)arg0->unk_04 * ptr->unk_50;
    ptr = func_089B2A98(arg0->unk_08, 0x26);
    x = (f32)arg0->unk_00 * ptr->unk_4C;
    c.unk_04 = y;
    c.unk_00 = x;
    func_089B298C(arg0->unk_08, 0x2A, (T *)&b, &c);
    func_089B2A88(arg0->unk_08);
}
