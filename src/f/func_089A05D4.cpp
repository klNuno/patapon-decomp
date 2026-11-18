#include "common.h"

extern "C" {
class V {
public:
    virtual s32 *func_08(void *, s32);
    virtual void func_0C(void *, s32 *, s32);
};

void func_089A134C(s32, s32);

struct E {
    s32 unk_00;
    V *unk_04;
    void *unk_08;
    s32 *unk_0C;

    E() {}
    E(E &arg0) : unk_00(*(volatile s32 *)&arg0.unk_00), unk_04(arg0.unk_04),
        unk_08(*(void *volatile *)&arg0.unk_08), unk_0C(arg0.unk_0C) {
        if (unk_08 != NULL) ++*unk_0C;
    }

    void func_00() {
        if (unk_08 != NULL) {
            --**(s32 *volatile *)&unk_0C;
            s32 *p = unk_0C;
            s32 n;
            if (p != NULL) {
                n = *p;
            } else {
                n = 0;
            }
            if (n == 0) {
                unk_04->func_0C(unk_08, p, unk_00);
                func_089A134C((s32)unk_08, unk_00);
            }
        }
    }
};

struct M {
    void *unk_00;
    u8 unk_04[0xD84];
    u8 *unk_D88;
    s32 unk_D8C;
};

typedef struct {
    u8 unk_00;
    u8 pad_01[3];
    s32 unk_04;
    void *unk_08;
    u8 unk_0C[0x14];
    u8 unk_20[0x14];
    M unk_34;
    s32 unk_DC4;
    u8 unk_DC8[0xC];
    u8 unk_DD4[0xC];
    u8 unk_DE0[0x130];
    E *unk_F10;
    u32 unk_F14;
} S;

void func_0881F5C0(void *, s32, s32);
s32 func_08827A50(s32, s32);
extern s32 func_08827AD4(void);
s32 func_08858B9C(void);
void func_0893E8E0(void *);
extern s32 func_08975794(s32);
void *func_089933F8(void *, s32, s32);
s32 func_0899F148(s32, u32, u32);
extern u8 D_08A44C14[], D_08A44C60[], D_08A44CAC[];
}

inline void *operator new(unsigned int, void *p) { return p; }

extern "C" {
S *func_089A05D4(S *arg0, s32 arg1, s32 arg2) {
    E e;
    M *m;
    s32 h;
    u32 i, j;
    void *p;

    arg0->unk_00 = 0;
    arg0->unk_04 = arg1;
    arg0->unk_08 = arg0->unk_0C;
    func_08975794((s32)arg0->unk_08);
    func_0893E8E0(arg0->unk_20);
    arg0->unk_34.unk_00 = D_08A44C14;
    m = &arg0->unk_34;
    m->unk_00 = D_08A44C60;
    m->unk_D88 = (u8 *)(((u32)m->unk_04 & 3) + (u32)m + 4);
    m->unk_D8C = 0;
    m->unk_00 = D_08A44CAC;
    arg0->unk_DC4 = 0;
    arg0->unk_F10 = (E *)(((u32)arg0->unk_DE0 & 0xF) + (u32)arg0 + 0xDE0);
    arg0->unk_F14 = 0;
    h = func_08858B9C();
    i = 0;
    do {
        j = 0;
        do {
            p = (void *)func_08827A50(0xDF8, h);
            if (p != NULL) {
                p = func_089933F8(p, func_0899F148(arg0->unk_04, i, j), arg2);
            }
            e.unk_00 = h;
            e.unk_04 = (V *)func_08827AD4();
            e.unk_08 = p;
            s32 *r = e.unk_04->func_08(p, *(volatile s32 *)&e.unk_00);
            *r = 1;
            E *q = arg0->unk_F10 + arg0->unk_F14;
            e.unk_0C = r;
            new (q) E(e);
            ++arg0->unk_F14;
            e.func_00();
        } while (++j < 3U);
    } while (++i < 6U);
    func_0881F5C0(arg0->unk_DC8, 0, 0xC);
    func_0881F5C0(arg0->unk_DD4, 0, 0xC);
    return arg0;
}
}
