#include "common.h"

typedef struct {
    f32 unk_00;
    f32 unk_04;
    f32 unk_08;
    f32 unk_0C;
} V;

typedef struct {
    u8 pad_00[0x1070];
    u8 unk_1070[0x130];
    u8 unk_11A0[0x9C0];
    u8 unk_1B60[0x44];
    s32 unk_1BA4;
    u8 pad_1BA8[0x48];
    u8 unk_1BF0[0x44];
    s32 unk_1C34;
    u8 pad_1C38[0x48];
    u8 unk_1C80[0x44];
    s32 unk_1CC4;
    u8 pad_1CC8[0x48];
    u8 unk_1D10[0x44];
    s32 unk_1D54;
    u8 pad_1D58[0x48];
    u8 unk_1DA0[0x90];
    u8 unk_1E30[0x3050];
    u8 unk_4E80[0x184];
    u8 unk_5004[0x16FC];
    u8 unk_6700[0x10A48];
    u8 unk_17148[0x10A48];
    u8 unk_27B90[1];
} T;

extern void *D_08AD1E28[];
extern char D_089EF7D0[];
extern f32 D_089EF810[];
extern f32 D_089EF818[];
extern f32 D_089EF820[];
extern f32 D_089EF828[];
extern char D_08A071E4[];
extern char D_08A071F4[];
extern char D_08A07204[];
extern char D_08A07214[];
extern char D_08A07224[];
extern char D_08A07234[];

s32 func_08856400(s32);
s32 func_08868CAC(void *, s32, char *, s32);
void func_08865FE4(void *, s32);
void func_089A5784(void *, char *, f32);
void func_089BAE2C(void *, f32, f32);
void func_0899F284(void *);
void func_08994194(void *);
void func_089C66E8(void *);

void func_089A369C(T *arg0) {
    V a;
    V b;
    V c;
    V d;
    u8 *p;
    s32 n;
    void *g;
    f32 x;
    f32 y;

    g = D_08AD1E28[0];
    g = g != NULL ? g : NULL;
    func_089BAE2C(arg0->unk_11A0, 32.0f, 32.0f);
    func_089A5784(arg0->unk_1070, D_089EF7D0, 115.0f);
    func_08865FE4(arg0->unk_1B60, func_08868CAC(g, 10, D_08A071E4, 1));
    func_08865FE4(arg0->unk_1BF0, func_08868CAC(g, 10, D_08A071F4, 1));
    func_08865FE4(arg0->unk_1C80, func_08868CAC(g, 10, D_08A07204, 1));
    p = (u8 *)&a;
    n = 16;
    if (p != NULL) {
        do {
            *p++ = 0;
        } while (--n != 0);
    }
    x = D_089EF820[0];
    a.unk_00 = x;
    y = D_089EF820[1];
    a.unk_04 = y;
    x = D_089EF828[0];
    a.unk_08 = x;
    y = D_089EF828[1];
    a.unk_0C = y;
    arg0->unk_1BA4 = func_08856400((s32)&a);
    p = (u8 *)&b;
    n = 16;
    if (p != NULL) {
        do {
            *p++ = 0;
        } while (--n != 0);
    }
    x = D_089EF820[0];
    b.unk_00 = x;
    y = D_089EF820[1];
    b.unk_04 = y;
    x = D_089EF828[0];
    b.unk_08 = x;
    y = D_089EF828[1];
    b.unk_0C = y;
    arg0->unk_1C34 = func_08856400((s32)&b);
    p = (u8 *)&c;
    n = 16;
    if (p != NULL) {
        do {
            *p++ = 0;
        } while (--n != 0);
    }
    x = D_089EF820[0];
    c.unk_00 = x;
    y = D_089EF820[1];
    c.unk_04 = y;
    x = D_089EF828[0];
    c.unk_08 = x;
    y = D_089EF828[1];
    c.unk_0C = y;
    arg0->unk_1CC4 = func_08856400((s32)&c);
    func_08865FE4(arg0->unk_1D10, func_08868CAC(g, 10, D_08A07214, 1));
    p = (u8 *)&d;
    n = 16;
    if (p != NULL) {
        do {
            *p++ = 0;
        } while (--n != 0);
    }
    x = D_089EF810[0];
    d.unk_00 = x;
    y = D_089EF810[1];
    d.unk_04 = y;
    x = D_089EF818[0];
    d.unk_08 = x;
    y = D_089EF818[1];
    d.unk_0C = y;
    arg0->unk_1D54 = func_08856400((s32)&d);
    func_08865FE4(arg0->unk_1DA0, func_08868CAC(g, 10, D_08A07224, 1));
    func_08865FE4(arg0->unk_1E30, func_08868CAC(g, 10, D_08A07234, 1));
    func_0899F284(arg0->unk_4E80);
    func_08994194(arg0->unk_5004);
    func_089C66E8(arg0->unk_6700);
    func_089C66E8(arg0->unk_17148);
    func_089C66E8(arg0->unk_27B90);
}
