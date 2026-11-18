#include "common.h"

extern "C" {

struct A_08944DA0 {
    virtual void v0();
    virtual void v1(void *, s32 *, s32);
};

struct H_08944DA0 {
    s32 unk_00;
    A_08944DA0 *unk_04;
    void *unk_08;
    s32 *unk_0C;
};

struct N_08944DA0 {
    N_08944DA0 *unk_00;
    N_08944DA0 *unk_04;
    H_08944DA0 unk_08;
};

struct I_08944DA0 {
    N_08944DA0 *unk_00;
    int eq(const N_08944DA0 *o) const { return unk_00 == o; }
    bool ne(const N_08944DA0 *o) const { return !(bool)eq(o); }
};

struct S_08944DA0 {
    u8 pad_00[0x380];
    struct {
        N_08944DA0 *unk_00;
        u8 pad_04[0xC];
    } unk_380;
    H_08944DA0 unk_390;
};

void func_08853A80(s32, s32);
void func_08891578(s32, s32);
void func_088E6294(s32, void *);
void func_088E634C(s32, void *);
void func_088E6134(s32, void *);
void func_088E61FC(s32, void *);

void func_08944DA0(S_08944DA0 *arg0, s32 arg1) {
    struct { H_08944DA0 unk_00; u8 pad_10[4]; } h0;
    H_08944DA0 h1;
    H_08944DA0 h2;
    struct { u8 pad_00[0x20]; H_08944DA0 unk_20; } h3;
    I_08944DA0 it;

    if (arg1 != 0) {

        {
            const volatile u32 *p = (const volatile u32 *)&arg0->unk_390;
            volatile u32 *d = (volatile u32 *)&h0.unk_00;
            d[0] = p[0];
            d[1] = p[1];
            d[2] = p[2];
            d[3] = p[3];
            if (*(void *volatile *)((u8 *)&h0.unk_00 + 8) != NULL) {
                ++**(s32 *volatile *)&h0.unk_00.unk_0C;
            }
            func_088E6294(arg1, &h0.unk_00);
            if (h0.unk_00.unk_08 != NULL) {
                s32 *c;
                --**(s32 *volatile *)&h0.unk_00.unk_0C;
                c = h0.unk_00.unk_0C;
                if ((c != NULL ? *c : 0) == 0) {
                    s32 *r = *(s32 *volatile *)&h0.unk_00.unk_0C;
                    h0.unk_00.unk_04->v1(*(void *volatile *)&h0.unk_00.unk_08, r, h0.unk_00.unk_00);
                    func_08853A80((s32)h0.unk_00.unk_08, h0.unk_00.unk_00);
                }
            }
        }
        it.unk_00 = arg0->unk_380.unk_00;
        if (it.ne((N_08944DA0 *)&arg0->unk_380)) {
            do {
                const volatile H_08944DA0 *p = &it.unk_00->unk_08;
                volatile H_08944DA0 *d = &h1;
                d->unk_00 = p->unk_00;
                d->unk_04 = p->unk_04;
                d->unk_08 = p->unk_08;
                d->unk_0C = p->unk_0C;
                if (*(void *volatile *)&((volatile H_08944DA0 *)&h1)->unk_08 != NULL) {
                    ++**(s32 *volatile *)&h1.unk_0C;
                }
                func_088E634C(arg1, &h1);
                if (h1.unk_08 != NULL) {
                    s32 *c;
                    --**(s32 *volatile *)&h1.unk_0C;
                    c = h1.unk_0C;
                    if ((c != NULL ? *c : 0) == 0) {
                        h1.unk_04->v1(h1.unk_08, c, h1.unk_00);
                        func_08891578((s32)h1.unk_08, h1.unk_00);
                    }
                }
                it.unk_00 = it.unk_00->unk_00;
            } while (it.ne((N_08944DA0 *)&arg0->unk_380));
        }

        {
            const volatile u32 *p = (const volatile u32 *)&arg0->unk_390;
            volatile u32 *d = (volatile u32 *)&h2;
            d[0] = p[0];
            d[1] = p[1];
            d[2] = p[2];
            d[3] = p[3];
            if (*(void *volatile *)((u8 *)&h2 + 8) != NULL) {
                ++**(s32 *volatile *)&h2.unk_0C;
            }
            func_088E6134(arg1, &h2);
            if (h2.unk_08 != NULL) {
                s32 *c;
                --**(s32 *volatile *)&h2.unk_0C;
                c = h2.unk_0C;
                if ((c != NULL ? *c : 0) == 0) {
                    s32 *r = *(s32 *volatile *)&h2.unk_0C;
                    h2.unk_04->v1(*(void *volatile *)&h2.unk_08, r, h2.unk_00);
                    func_08853A80((s32)h2.unk_08, h2.unk_00);
                }
            }
        }
        it.unk_00 = arg0->unk_380.unk_00;
        if (it.ne((N_08944DA0 *)&arg0->unk_380)) {
            do {
                const volatile u32 *p = (const volatile u32 *)&it.unk_00->unk_08;
                volatile u32 *d = (volatile u32 *)&h3.unk_20;
                d[0] = p[0];
                d[1] = p[1];
                d[2] = p[2];
                d[3] = p[3];
                if (*(void *volatile *)((u8 *)&h3.unk_20 + 8) != NULL) {
                    ++**(s32 *volatile *)&h3.unk_20.unk_0C;
                }
                func_088E61FC(arg1, &h3.unk_20);
                if (h3.unk_20.unk_08 != NULL) {
                    s32 *c;
                    --**(s32 *volatile *)&h3.unk_20.unk_0C;
                    c = h3.unk_20.unk_0C;
                    if ((c != NULL ? *c : 0) == 0) {
                        h3.unk_20.unk_04->v1(h3.unk_20.unk_08, c, h3.unk_20.unk_00);
                        func_08891578((s32)h3.unk_20.unk_08, h3.unk_20.unk_00);
                    }
                }
                it.unk_00 = it.unk_00->unk_00;
            } while (it.ne((N_08944DA0 *)&arg0->unk_380));
        }
    }
}

}
