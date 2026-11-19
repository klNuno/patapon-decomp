#include "common.h"

extern "C" {

struct V {
    virtual void unk_08();
    virtual void unk_0C();
    virtual void unk_10();
    virtual void unk_14();
    virtual void unk_18();
};

struct B {
    u8 pad_00[0x18];
    s32 unk_18;
};
struct C {
    u8 pad_00[4];
    s32 unk_04;
    u32 unk_08;
    s32 unk_0C;
    u16 unk_10;
    u16 unk_12;
    u8 pad_14[4];
    u8 unk_18;
    u8 unk_19;
    u8 pad_1A[2];
};
struct D;
struct T;
struct E_088A4094;

struct S {
    V **unk_00;
    s32 unk_04;
};

struct A {
    u8 pad_00[0x28];
    S unk_28;
    u8 pad_30[0xC];
    B *unk_3C;
    C *unk_40;
    s32 unk_44[5];
    s32 unk_58;
    u8 pad_5C[0x10];
    u32 unk_6C;
    u32 unk_70;
    s32 unk_74;
    s32 unk_78;
    s32 unk_7C;
    u32 unk_80;
    u32 unk_84;
    u8 pad_88[8];
    s32 unk_90;
    s32 unk_94;
    s32 unk_98;
    u8 unk_9C;
    u8 unk_9D;
    u8 pad_9E[2];
    E_088A4094 *unk_A0;
};

void func_0889ADDC(D *arg0, A *arg1, s32 arg2, B *arg3, C *arg4);
void func_0889B214(D *, s32);
void func_0889BE68(T *arg0, s32 arg1);
u32 func_0889C3B8(T *arg0, u32 arg1);
E_088A4094 *func_088A4094(E_088A4094 *arg0);

static inline void func_inline(A *arg0, C *arg1) {
    arg0->unk_6C = func_0889C3B8((T *)arg0, arg1->unk_08);
    f32 temp = (f32)arg1->unk_08 / 1000000.0f;
    temp = 60.0f / temp;
    arg0->unk_70 = (u32)temp;
}

void func_0889BACC(A *arg0) {
    s32 k = arg0->unk_7C;
    C *p = arg0->unk_40 + k;
    u8 v = p->unk_19;
    if (v == 0xFFU && p->unk_12 == 0x2FU) {
        u8 a = arg0->unk_9D;
        s32 n;
        if (a != 0 && (n = arg0->unk_58) != 0) {
            arg0->unk_78 = n;
        } else {
            func_0889BE68((T *)arg0, a);
        }
        return;
    }
    if (v == 0xFFU && p->unk_12 == 0x51U) {
        if (arg0->unk_74 == 0) {
            func_inline(arg0, p);
        }
    } else if ((v & 0xF0) == 0x90) {
        D *q = (D *)func_088A4094(arg0->unk_A0);
        if ((arg0->unk_84 & (1U << p->unk_18)) == 0 && q != NULL) {
            func_0889B214(q, arg0->unk_90);
            func_0889ADDC(q, arg0, arg0->unk_44[p->unk_10], arg0->unk_3C, p);
        }
    } else if (v == 0xB0) {
        if (p->unk_12 == 0x63U) {
            s32 n = p->unk_0C;
            if (n == 20) {
                arg0->unk_94 = k;
            } else if (n == 30) {
                arg0->unk_98 = k;
                s32 j = arg0->unk_94;
                s32 off = j * sizeof(C);
                arg0->unk_7C = j;
                C *base = arg0->unk_40;
                B *b = arg0->unk_3C;
                C *q = (C *)((u8 *)base + off);
                arg0->unk_78 = q->unk_04 * b->unk_18;
                return;
            }
        }
    } else if (v == 0) {
        if ((arg0->unk_80 & 3) == 1U) {
            arg0->unk_9C = 1;
            V **it = arg0->unk_28.unk_00;
            S *s = &arg0->unk_28;
            if ((u32)it != (u32)(it + arg0->unk_28.unk_04)) {
                s32 *n = &arg0->unk_28.unk_04;
                do {
                    (*it)->unk_18();
                    ++it;
                } while (it != s->unk_00 + *n);
            }
        }
        if (arg0->unk_74 == 0) {
            func_inline(arg0, p);
        }
        ++arg0->unk_80;
    }
    s32 j = arg0->unk_7C + 1;
    s32 off = j * sizeof(C);
    arg0->unk_7C = j;
    C *base = arg0->unk_40;
    B *b = arg0->unk_3C;
    C *q = (C *)((u8 *)base + off);
    arg0->unk_78 = q->unk_04 * b->unk_18;
}

}
