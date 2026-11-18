#include "common.h"

extern "C" {

class T {
public:
    virtual void unk_08(f32);
    virtual void unk_0C();
    virtual void unk_10();
    virtual void unk_14();
    virtual void unk_18();
    virtual void unk_1C();
    virtual void unk_20();
    virtual void unk_24();
    virtual void unk_28();
    virtual void unk_2C();
    virtual void unk_30();
    virtual void unk_34();
    virtual void unk_38();
    virtual void unk_3C(s32);
    virtual s32 unk_40();
};

struct N {
    u8 pad_00[0x10];
    T *unk_10;
};

struct It {
    N *unk_00;
    It(const It &arg0) : unk_00(arg0.unk_00) {}
};

union W {
    N *unk_00;
    f32 unk_04;
};

typedef struct {
    T unk_00;
    u8 pad_04[0x10];
    f32 unk_14;
    f32 unk_18;
} S;

struct O_089A6180 {
    u8 pad_00[0x100];
    s32 unk_100;
    u8 pad_104[0xC];
    s32 unk_110;
    u8 pad_114[0x18];
    u8 unk_12C[0x158];
    s32 unk_284;
    u8 unk_288;
    u8 pad_289[3];
    s32 unk_28C;
    s32 unk_290;
};

extern s32 D_089EF8C8[];
extern s32 func_08837814(s32, s32);
extern s32 func_0883B984(s32, s32);
s32 func_088586E8(void);
s32 func_0887ED88(s32, s32);
void func_08885840(void *, s32);
u8 *func_088860C0(void *);
void func_08920CFC(T *, s32, f32, f32);
S *func_0897BE0C(void *, s32, s32, s32);
void func_0897C3F4(f32, void *, s32);
It func_0897C818(void *, s32);
void func_089A6180(O_089A6180 *arg0, s32 *arg1);
u8 *func_089B53D8(s32);

void func_089A630C(O_089A6180 *arg0, s32 arg1)
{
    u8 *p;
    T *t;
    S *s;
    s32 n;
    f32 x;
    f32 y;

    p = func_089B53D8(func_088586E8());
    arg0->unk_100 = D_089EF8C8[arg0->unk_28C];
    switch (arg0->unk_284) {
    case 0:
        func_08885840(arg0->unk_12C, arg1);
        if (func_088860C0(arg0->unk_12C) != NULL) {
            func_089A6180(arg0, &arg0->unk_110);
            n = func_08837814(arg0->unk_110, 0);
            arg0->unk_290 = n;
            if (n >= 0) {
                arg0->unk_288 = 0;
                arg0->unk_284 = 1;
            }
        }
        break;
    case 1:
        if (func_0887ED88(arg1, 0x4000) != 0) {
            func_0897C3F4(0.0f, func_089B53D8(func_088586E8()) + 0x14, 8);
        } else if (func_0887ED88(arg1, 0x8000) != 0) {
            It it = func_0897C818(p + 0x14, 8);
            volatile W a;
            volatile W b;
            a.unk_00 = it.unk_00;
            b.unk_04 = a.unk_04;
            if (b.unk_00 != (N *)(p + 0xB0)) {
                t = it.unk_00->unk_10;
                t->unk_3C((t->unk_40() != 0) ^ 1);
            }
        } else if (func_0887ED88(arg1, 0x1000) != 0) {
            p = func_089B53D8(func_088586E8());
            if (*(volatile s32 *)&arg0->unk_290 >= 0) {
                s = func_0897BE0C(p + 0x14, 8, arg0->unk_290, 3);
                f32 z = s->unk_18;
                f32 w = 1.0f;
                if (z != w) {
                    s->unk_18 = 1.0f;
                    x = s->unk_14;
                    y = *(volatile f32 *)&s->unk_18;
                    x *= y;
                    s->unk_00.unk_08(x);
                }
                func_08920CFC(&s->unk_00, 0, 1.0f, 0.0f);
            }
        } else if (func_0887ED88(arg1, 0x2000) != 0) {
            func_0897C3F4(0.0f, func_089B53D8(func_088586E8()) + 0x14, 8);
            func_0883B984(arg0->unk_290, 0);
            arg0->unk_290 = -1;
            arg0->unk_288 = 1;
            arg0->unk_284 = 0;
        }
        break;
    }
}

}
