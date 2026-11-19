#include "common.h"

extern "C" {

typedef struct {
    f32 unk_00, unk_04;
} V2;

typedef struct {
    f32 unk_00, unk_04, unk_08, unk_0C;
} V4;
typedef V4 V;

typedef struct {
    V unk_00[4];
} Mtx;

class T {
public:
    u8 pad_00[0x80];
    virtual void unk_08();
    virtual void unk_0C();
    virtual void unk_10();
};

class A {
public:
    u8 pad_00[0x54];
    s32 unk_54;
    virtual void unk_08();
    virtual void unk_0C();
    virtual void unk_10();
    virtual void unk_14();
    virtual void unk_18();
    virtual void unk_1C();
    virtual void unk_20();
    virtual void unk_24();
    virtual void unk_28();
    virtual void unk_2C(s32);
};

class B {
public:
    virtual void unk_08();
    virtual void unk_0C(s32, s32 *, s32);
};

struct E {
    s32 unk_00;
    B *unk_04;
    s32 unk_08;
    s32 *unk_0C;
};

struct S : A {
    u8 pad_5C[0x24];
    T unk_80;
    u8 pad_104[0xCC];
    u32 unk_1D0;
    u8 unk_1D4[0x1024];
    E *unk_11F8;
};

typedef struct {
    s32 unk_00;
    s32 unk_04;
} T0;

extern f32 D_089F0968[];
extern f32 D_089F0970[];
extern f32 D_089F0978[];
extern f32 D_089F0980[];
extern f32 D_089F0984[];
extern f32 D_089F0988[];
extern f32 D_08A08580[];
extern f32 D_08A08588[];

void func_08815CD0(s32, s32, s32, s32);
s32 func_0887C5A8(Mtx *);
char *func_0887C590(char *arg0, f32 fparg0, f32 fparg1, f32 fparg2, f32 fparg3);
void func_08858024(s32);
extern s32 func_088581B0(s32);
f32 func_08856234(f32);
void func_08866B54(Mtx *, s32, void *);
extern int func_08864E80(char *, char *);
void func_089B1324(s32, T0 *);
void func_089B1338(T0 *, s32);
void func_089B1658(void *, s32, T0 *);
s32 func_089B1704(void *);
s32 func_089B17F0(void *);
void func_089B2430(s32, s32);
void func_089B295C(s32, V4 *, s32);
void func_089B298C(s32, s32, T0 *, V2 *);
void func_089B2A88(s32);
void func_089B34E8(S *);

void func_089B1E10(S *arg0) {
    volatile E temp_120;
    T0 temp_118;
    T0 temp_110;
    V2 temp_108;
    T0 temp_100;
    Mtx temp5;
    V temp_B0;
    Mtx temp6;
    V temp7, temp8, temp9, temp10;
    f32 temp11;
    u32 j, i;

    func_0887C5A8(&temp6);
    func_08858024(1);
    func_088581B0((s32)&temp6);
    func_08858024(2);
    func_0887C590((char *)&temp7, 0.0f, 0.0f, 0.0f, 1.0f);
    temp11 = -temp6.unk_00[3].unk_08 * func_08856234(45.0f) / 136.0f;
    temp7.unk_00 = -temp6.unk_00[3].unk_00 + (D_089F0978[0] - 240.0f) * temp11;
    temp7.unk_04 = -temp6.unk_00[3].unk_04 + (136.0f - D_089F0978[1]) * temp11;
    func_08866B54(&temp5, 0, func_0887C590((char *)&temp8, temp11, 0.0f, 0.0f, 0.0f));
    func_08866B54(&temp5, 1, func_0887C590((char *)&temp9, 0.0f, temp11, 0.0f, 0.0f));
    func_08866B54(&temp5, 2, func_0887C590((char *)&temp10, 0.0f, 0.0f, 1.0f, 0.0f));
    func_08866B54(&temp5, 3, &temp7);
    func_08864E80((char *)&arg0->unk_80, (char *)&temp5);
    arg0->unk_80.unk_10();

    temp_B0.unk_00 = D_08A08580[0];
    temp_B0.unk_04 = D_08A08580[1];
    temp_B0.unk_08 = D_08A08588[0];
    temp_B0.unk_0C = D_08A08588[1];
    func_089B295C(arg0->unk_54, &temp_B0, 1);
    j = 0;
    do {
        i = 0;
        if (i < arg0->unk_1D0) {
            do {
                temp_108.unk_00 = 1.0f;
                temp_108.unk_04 = 1.0f;
                f32 x = (f32)i * D_089F0968[0];
                x += D_089F0970[0];
                *(f32 *)&temp_110.unk_00 = x;
                f32 y = (f32)j * D_089F0968[1];
                y += D_089F0970[1];
                *(f32 *)&temp_110.unk_04 = y;
                func_089B298C(arg0->unk_54, 0xA, &temp_110, &temp_108);
            } while (++i < arg0->unk_1D0);
        }
    } while (++j < 6);
    func_089B2A88(arg0->unk_54);
    func_08815CD0((s32)D_089F0980[0], (s32)D_089F0984[0],
                  (s32)D_089F0988[0], (s32)D_089F0988[1]);

    s32 n;
    s32 neg;
    f32 z;
    u32 i0;
    u32 i1;
    E **base;
    u32 off;
    s32 *volatile *count;
    neg = -(n = func_089B17F0(arg0->unk_1D4));
    z = (f32)neg;
    i0 = n * 4;
    i1 = i0 + 0x18;
    temp_118.unk_00 = 0;
    *(f32 *)&temp_118.unk_04 = z * D_089F0968[1];
    if (i0 < i1) {
        volatile E *t = &temp_120;
        if (i0 < i1) {
            off = i0 * sizeof(E);
            base = &arg0->unk_11F8;
            count = (s32 *volatile *)((u32)t + 0xC);
            do {
                const volatile E *p = (const volatile E *)((const u8 *)*base + off);
                s32 c = p->unk_08;
                s32 a = p->unk_00;
                B *b = p->unk_04;
                temp_120.unk_08 = c;
                s32 *r = p->unk_0C;
                temp_120.unk_00 = a;
                temp_120.unk_04 = b;
                temp_120.unk_0C = r;
                if (temp_120.unk_08 != 0) {
                    ++**count;
                }
                func_089B1324(temp_120.unk_08, &temp_118);
                arg0->unk_2C(temp_120.unk_08);
                if (temp_120.unk_08 != 0) {
                    --*temp_120.unk_0C;
                    s32 *r = temp_120.unk_0C;
                    s32 v;
                    if (r != NULL) {
                        v = *r;
                    } else {
                        v = 0;
                    }
                    if (v == 0) {
                        B *b = temp_120.unk_04;
                        s32 a = temp_120.unk_00;
                        b->unk_0C(temp_120.unk_08, r, a);
                        a = temp_120.unk_00;
                        func_089B2430(temp_120.unk_08, a);
                    }
                }
                ++i0;
                off += sizeof(E);
            } while (i0 < i1);
        }
    }
    func_08815CD0(0, 0, 0x1E0, 0x110);
    u32 a0 = func_089B1704(arg0->unk_1D4) * sizeof(E);
    func_089B1338(&temp_100, ((E *)((u32)arg0->unk_11F8 + a0))->unk_08);
    func_089B1658(arg0->unk_1D4, arg0->unk_54, &temp_100);
    func_089B34E8(arg0);
}

}
