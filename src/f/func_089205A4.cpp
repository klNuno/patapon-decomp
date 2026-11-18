#include "common.h"

extern "C" {

class A {
public:
    u8 pad_00[0x10];
    virtual void unk_08();
    virtual void unk_0C();
    virtual void unk_10();
    virtual void unk_14();
    virtual void unk_18();
    virtual void unk_1C();
    virtual u32 unk_20();
};

class B {
public:
    virtual void unk_08();
    virtual void unk_0C(A *, s32 *, s32);
};

class C {
public:
    u8 pad_00[0x80];
    virtual void unk_08();
    virtual void unk_0C();
    virtual void unk_10();
    virtual void unk_14(s32, s32);
};

typedef struct {
    s32 unk_00;
    B *unk_04;
    A *unk_08;
    s32 *unk_0C;
} V;

typedef struct {
    u8 pad_00[0x48];
    char unk_48[0x28];
    f32 unk_70;
} W;

typedef struct {
    u8 pad_00[0xC0];
    s32 unk_C0[4];
    f32 unk_D0, unk_D4, unk_D8, unk_DC;
    u8 pad_E0[0x30];
    C unk_110;
    u8 pad_194[0xC];
    f32 unk_1A0;
} T;

u32 func_08822BC4(char *);
extern void func_08865FEC(s32, s32, s32);
void func_08866028(void *);
void func_0886A45C(A *, s32);
s32 func_08945908(s32 *arg0, s32 arg1);
s32 func_08991310(void *, void *);
void func_089913A0(char *arg0, char *arg1, s32 arg2);

void func_089205A4(T *arg0, s32 arg1, void *arg2) {
    V temp;
    W *p;
    s32 i;
    f32 a, b, c, d;

    a = -arg0->unk_D0;
    d = -arg0->unk_DC;
    c = -arg0->unk_D8;
    b = -arg0->unk_D4;
    arg0->unk_D0 = a;
    arg0->unk_D4 = b;
    arg0->unk_D8 = c;
    arg0->unk_DC = d;

    p = (W *)func_08945908(arg0->unk_C0, arg1);
    arg0->unk_1A0 = p->unk_70;
    func_08866028(&arg0->unk_110);
    if (func_08822BC4(p->unk_48) != 0) {
        i = func_08991310(arg2, p->unk_48);
        if (i != -1) {
            func_089913A0((char *)&temp, (char *)arg2, i);
            func_08865FEC((s32)&arg0->unk_110, (s32)temp.unk_08, 1);
            if (temp.unk_08->unk_20() >= 3U) {
                arg0->unk_110.unk_14(2, 1);
            }
            if (temp.unk_08 != NULL) {
                --**(s32 *volatile *)&temp.unk_0C;
                s32 *q = *(s32 *volatile *)&temp.unk_0C;
                if ((q != NULL ? *q : 0) == 0) {
                    temp.unk_04->unk_0C(temp.unk_08, temp.unk_0C, temp.unk_00);
                    func_0886A45C(temp.unk_08, temp.unk_00);
                }
            }
        }
    }
}

}
