#include "common.h"

extern "C" {
typedef struct {
    u8 pad_00[0x8F0];
} Obj_0890FCF0;

typedef struct {
    f32 unk_00, unk_04;
} V_088EECE0;

struct A {
    virtual void *unk_08(u32, s32);
};

struct N {
    s32 unk_00;
    N *unk_04;
    s32 unk_08;
};

extern u8 D_08A4535C[];
extern f32 D_089E6FE0[];
void func_0892E524(N *arg0);
s32 func_08827BB4(s32, s32, s32, s32, s32);
void *func_08827C34(void *);
void func_088D4220(Obj_0890FCF0 *);
void func_088D435C(void *, s32);
void func_088D43C8(void *, f32, f32);
void func_088D46FC(Obj_0890FCF0 *, f32, f32, f32, f32);
void func_088D4724(char *, s32);
void func_0892DFA0(s32, V_088EECE0 *);
f32 fabsf(f32);

struct E {
    u8 pad_00[0x48];
    f32 unk_48, unk_4C;
};

struct T {
    u8 pad_00[0x6E0];
    E *unk_6E0;
    u8 pad_6E4[0xC];
    f32 unk_6F0, unk_6F4, unk_6F8, unk_6FC;
    V_088EECE0 unk_700, unk_708;
    u8 pad_710[0x1B4];
    s32 unk_8C4;
    u8 pad_8C8[0xC];
    f32 unk_8D4, unk_8D8, unk_8DC;

    static inline void func_04(f32 *arg0, f32 arg1) {
        if (fabsf(arg1) < 0.001f) { *arg0 = 0.0f; return; }
        *arg0 = arg1;
    }
    void func_00(f32 arg0, f32 arg1, f32 arg2) {
        func_04(&unk_8D4, arg0);
        func_04(&unk_8D8, arg1);
        func_04(&unk_8DC, arg2);
    }
};

struct B {
    B *unk_00, *unk_04;
    T *unk_08;
    B *unk_0C;
    u8 pad_10[0xC];
    u8 *unk_1C;
    T unk_20;

    void func_00() {
        unk_1C = D_08A4535C;
        unk_00 = NULL;
        unk_04 = NULL;
        unk_08 = &unk_20;
        unk_0C = NULL;
        func_088D4220((Obj_0890FCF0 *)&unk_20);
    }
};

struct S {
    B *unk_00, *unk_04;
    u8 pad_08[0x18];
    s32 unk_20;
    u8 pad_24[0xC];
    u8 unk_30[0x24];
    A *unk_54;
    void *unk_58;
    u8 pad_5C[4];
    A *unk_60;

    s32 func_00(B *arg0) {
        if (unk_00 != (B *)this) {
            arg0->unk_00 = unk_00;
            (*(B *volatile *)&unk_00)->unk_04 = arg0;
            unk_00 = arg0;
            return 1;
        } else {
            unk_00 = arg0;
            unk_04 = arg0;
            arg0->unk_00 = (B *)this;
            return 1;
        }
    }

    void func_04(B *arg0) {
        if ((B *)this != arg0) {
            s32 temp = func_00(arg0);
            arg0->unk_04 = (B *)this;
            if (temp) {
                arg0->unk_0C = (B *)this;
                ++unk_20;
            }
        }
    }
};

static inline f32 func_00(f32 a, f32 b, f32 c) {
    return ((b - (*(const f32 *)&D_089E6FE0[1] / a)) - c);
}

void func_0892E258(S *arg0, u32 arg1) {
    V_088EECE0 temp;
    A *a;
    u32 i;
    B *b;
    T *p;
    E *e;
    f32 x, y;
    void *q;

    func_0892E524((N *)arg0);
    a = arg0->unk_60;
    q = a->unk_08(((arg1 + 1) * 4 + (arg1 * 0x910 + 0xF)) & ~0xFU, 0x10);
    arg0->unk_58 = q;
    func_08827BB4((s32)arg0->unk_30, arg1, 0x910, (s32)q, 0x10);
    arg0->unk_54 = a;
    i = 0;
    if (arg1 != 0) {
        x = D_089E6FE0[1];
        y = func_00(2.0f, 272.0f, 4.0f);
        do {
            b = (B *)func_08827C34(arg0->unk_30);
            if (b == NULL) {
                b = NULL;
            } else if (b != NULL) {
                b->func_00();
            }
            arg0->func_04(b);
            p = (T *)((u8 *)b + 0x20);
            func_088D435C(p, 2);
            p->unk_700.unk_00 = 240.0f;
            p->unk_700.unk_04 = y;
            temp.unk_00 = 240.0f;
            temp.unk_04 = y;
            func_0892DFA0((s32)p, &temp);
            p->unk_708.unk_00 = 480.0f;
            p->unk_708.unk_04 = x;
            e = p->unk_6E0;
            e->unk_48 = 480.0f;
            e->unk_4C = x;
            func_088D4724((char *)p, 3);
            func_088D46FC((Obj_0890FCF0 *)p, 0.25f, 0.25f, 0.25f, 1.0f);
            p->unk_6F0 = 0.0f;
            p->unk_6F4 = 0.0f;
            p->unk_6F8 = 0.0f;
            p->unk_6FC = 1.0f;
            func_088D43C8(p, 14.0f, 14.0f);
            func_088D4724((char *)p, 3);
            p->func_00(0.25f, 0.125f, 0.25f);
            p->unk_8C4 = 0x50;
            i++;
        } while (i < arg1);
    }
}
}
