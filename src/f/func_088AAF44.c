#include "common.h"

typedef struct {
    u8 pad_00[0x10];
    s32 unk_10;
    u8 *unk_14;
} S;

typedef struct {
    f32 unk_00;
    f32 unk_04;
} V2;

void func_08852F00(void *, s32);
s32 *func_0885356C(void *, s32, s32, s32);
void func_08853894(void *, char *);
u8 *func_0888A5A0(s32, s32);
s32 func_088BCF58(s32);
s32 func_0892A498(void *, s32, V2 *, V2 *, s32, s32, f32);
void func_08935924(void *, s32, s32, u32, char *, V2 *, s32, f32);

void func_088AAF44(S *arg0, void *arg1) {
    char t[0x20];
    V2 a;
    V2 b;
    V2 c;
    s32 *p0 = func_0885356C(arg1, 0, 1, 4);
    s32 *p1 = func_0885356C(arg1, 1, 1, 4);
    s32 *p2 = func_0885356C(arg1, 2, 1, 4);
    s32 *p3 = func_0885356C(arg1, 3, 1, 4);
    s32 *p4 = func_0885356C(arg1, 4, 1, 4);
    f32 *p5 = (f32 *)func_0885356C(arg1, 5, 1, 4);
    s32 *p6 = func_0885356C(arg1, 6, 1, 4);
    u8 *q;
    s32 r;

    func_08853894(arg1, t);
    if ((q = func_0888A5A0(func_088BCF58(arg0->unk_10), *p0)) == NULL) {
        func_08852F00(arg1, 0);
    } else {
        b.unk_00 = 0.0f;
        b.unk_04 = 1.0f;
        a.unk_00 = 0.0f;
        a.unk_04 = 0.0f;
        r = func_0892A498(arg0->unk_14 + 0x53CC0, *p1, &a, &b, *p3, 0, 0.0f);
        c.unk_00 = 0.0f;
        c.unk_04 = 0.0f;
        func_08935924(q + 0xF8, *p2, r, *p6, t, &c, 3, *p5);
        func_08852F00(arg1, 0);
    }
}
