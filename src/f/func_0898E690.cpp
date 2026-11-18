#include "common.h"

extern "C" {

struct V_0898E100 {
    f32 unk_00;
    f32 unk_04;
    f32 unk_08;
    f32 unk_0C;

    V_0898E100(f32 a, f32 b, f32 c, f32 d)
    {
        u8 *p = (u8 *)this;
        s32 n = 0x10;
        if (p != NULL) {
            do {
                *p++ = 0;
            } while (--n);
        }
        unk_00 = a;
        unk_04 = b;
        unk_08 = c;
        unk_0C = d;
    }
};

typedef struct {
    f32 unk_00;
    f32 unk_04;
    f32 unk_08;
    f32 unk_0C;
} V4;

typedef struct {
    f32 unk_00;
    u8 pad_04[0x10];
    f32 unk_14;
    u8 pad_18[0x10];
    f32 unk_28;
    u8 pad_2C[0x14];
} M;

class T {
public:
    u8 pad_00[0x80];
    virtual void unk_08();
    virtual void unk_0C();
};

typedef struct {
    u8 pad_00[0x1040];
    u8 unk_1040[1];
} B;

typedef struct {
    B *unk_00;
    u8 pad_04[0xC];
    T unk_10;
    u8 pad_94[0x24];
    u32 unk_B8;
    u8 pad_BC[0x24];
    u8 unk_E0;
} S;

extern V4 D_089EE200[];
extern u8 D_089EE1F0[];
void func_08854CD8(V4 *, V4 *, V4 *);
s32 func_08856400(V_0898E100 *);
extern int func_08864E80(char *, char *);
void func_08866B54(void *, s32, s32);
s32 func_08866B80(void *, s32);
struct R_089033A4;
void func_08931CEC(R_089033A4 *, u8 *, s32, s32 *, void *, void *, void *);

void func_0898E690(S *arg0, u32 arg1)
{
    u8 a[8];
    struct {
        V4 unk_00;
        u8 pad_10[8];
    } b;
    M c;
    M d;
    u32 n;
    T *p;
    f32 x;

    arg0->unk_10.unk_0C();
    if (arg0->unk_E0 != 0) {
        func_08854CD8(&b.unk_00, (V4 *)&arg0->unk_10.pad_00[0x30], D_089EE200);
        func_08931CEC((R_089033A4 *)a, arg0->unk_00->unk_1040, 0x82, NULL, &b.unk_00, NULL, D_089EE1F0);
        arg0->unk_E0 = 0;
    }
    n = arg0->unk_B8;
    if (n < 0x320U) {
        arg0->unk_B8 = n + arg1;
        x = (f32)arg0->unk_B8;
        x /= 800.0f;
        p = &arg0->unk_10;
        func_08866B54(&c, 0, func_08866B80(p, 0));
        func_08866B54(&c, 1, func_08866B80(p, 1));
        func_08866B54(&c, 2, func_08866B80(p, 2));
        func_08866B54(&c, 3, func_08866B80(p, 3));
        c.unk_00 = x;
        c.unk_14 = x;
        c.unk_28 = x;
        func_08864E80((char *)p, (char *)&c);
        V_0898E100 e(1.0f, 1.0f, 1.0f, x);
        *(s32 *)&arg0->unk_10.pad_00[0x44] = func_08856400(&e);
    } else {
        p = &arg0->unk_10;
        func_08866B54(&d, 0, func_08866B80(p, 0));
        func_08866B54(&d, 1, func_08866B80(p, 1));
        func_08866B54(&d, 2, func_08866B80(p, 2));
        func_08866B54(&d, 3, func_08866B80(p, 3));
        d.unk_00 = 1.0f;
        d.unk_14 = 1.0f;
        d.unk_28 = 1.0f;
        func_08864E80((char *)&arg0->unk_10, (char *)&d);
        V_0898E100 f(1.0f, 1.0f, 1.0f, 1.0f);
        *(s32 *)&arg0->unk_10.pad_00[0x44] = func_08856400(&f);
    }
}

}
