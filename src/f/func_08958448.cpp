#include "common.h"

extern "C" {

class V {
public:
    virtual void unk_08();
    virtual void unk_0C();
    virtual void unk_10();
    virtual void unk_14();
    virtual void unk_18();
    virtual void unk_1C(s32);
};

class Unk {
public:
    virtual void unk_08();
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
};

struct Unk1 {
    u8 pad_00[0x10];
    Unk *unk_10;
};

struct It {
    Unk1 *unk_00;
    It(const It &arg0) : unk_00(arg0.unk_00) {}
};

struct Unk2 {
    u8 pad_00[0x9C];
    Unk1 unk_9C;
};

struct CIt {
    Unk1 *unk_00;
    CIt(const It &arg0) : unk_00(arg0.unk_00) {}
};

struct R {
    u8 pad_00[0x36B10];
    s32 unk_36B10;
};

struct S {
    u8 pad_00[0xA90];
    V *unk_A90;
    u8 pad_A94[8];
    V *unk_A9C;
    V *unk_AA0;
    Unk2 *unk_AA4;
    void *unk_AA8;
    u8 pad_AAC[0x12A4];
    u8 unk_1D50[0x1E2B0];
    R *unk_20000;
    u8 pad_20004[0x20A4];
    s32 unk_220A8;
    s32 unk_220AC;
};

struct E {
    u8 pad_00[4];
    s32 unk_04;
};

struct A {
    u8 pad_00[0x7E64];
    E *unk_7E64;
};

struct B {
    u8 pad_00[0x14CF];
    u8 unk_14CF;
};

s32 func_088586E8(void);
void func_088790E0(Unk *arg0, f32 arg1);
s32 func_0889039C(s32, s32);
s32 func_08894FBC(s32, s32, s32);
s32 func_08899E18(s32, s32);
void func_088A4138(f32, void *, s32);
extern s32 func_08950BC4(s32);
void func_08951918(void *);
void func_08952660(void *, s32);
void func_08956B4C(S *, s32, s32, f32);
void func_089578A8(S *arg0, s32 arg1, s32 arg2, f32 arg3);
void func_0897C3F4(f32, void *, s32);
It func_0897C818(void *, s32);
s32 func_089B53D8(s32);

static inline Unk1 *unk_00(Unk2 *arg0) { return &arg0->unk_9C; }
static inline bool unk_04(Unk1 *arg0, CIt arg1) { return arg1.unk_00 != arg0; }

void func_08958448(S *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, f32 arg5) {
    V *v;

    func_0897C3F4(arg5, arg0->unk_AA4, 0);
    func_088A4138(0.0f, arg0->unk_AA8, 0);
    arg0->unk_220A8 = 4;
    arg0->unk_220AC = 0;
    switch (arg2) {
    case 0:
        func_08956B4C(arg0, arg2, arg4, arg5);
        return;
    case 1:
        if (arg0->unk_20000 != NULL) {
            A *a = (A *)func_08899E18(arg0->unk_20000->unk_36B10, 0);
            if (a->unk_7E64->unk_04 <= 0) {
                func_08950BC4((s32)arg0->unk_1D50);
                return;
            }
            s32 n = 0;
            u32 i = 0;
            do {
                B *b = (B *)func_08894FBC(func_08899E18(arg0->unk_20000->unk_36B10, 0), i, 0);
                if (b != NULL) {
                    if (b->unk_14CF != 0) {
                        if ((f32)func_0889039C((s32)b, 0) > 0.0f) n++;
                    }
                }
                i++;
            } while (i < 3U);
            if (n == 0) {
                func_08956B4C(arg0, 0, arg4, 0.0f);
                return;
            }
        }
        v = arg0->unk_A90;
        arg0->unk_A9C = v;
        arg0->unk_AA0 = v;
        arg0->unk_A9C->unk_1C(0);
        func_088790E0((Unk *)func_089B53D8(func_088586E8()), 0.5f);
        func_089578A8(arg0, 1, arg4, arg5);
        {
            It it = func_0897C818(arg0->unk_AA4, 1);
            if (unk_04(unk_00(arg0->unk_AA4), CIt(it))) {
                it.unk_00->unk_10->unk_3C(0);
            }
        }
        arg0->unk_220A8 = 1;
        arg0->unk_220AC = 0;
        func_08951918(arg0->unk_1D50);
        func_08952660(arg0->unk_1D50, 1);
        return;
    }
}

}
