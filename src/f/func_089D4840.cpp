#include "common.h"

extern "C" {

struct M {
    f32 unk_00[4][4];
    u8 pad_40[8];
};

struct T2 {
    u8 pad_00[0x16C];
    virtual void unk_08();
    virtual void unk_0C();
    virtual s32 unk_10();
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
    virtual void unk_3C();
    virtual void unk_40();
    virtual void unk_44();
    virtual void unk_48();
    virtual void unk_4C();
    virtual void unk_50();
    virtual void unk_54();
    virtual void unk_58();
    virtual void unk_5C();
    virtual void unk_60();
    virtual void unk_64();
    virtual void unk_68();
    virtual void unk_6C();
    virtual void unk_70();
    virtual void unk_74();
    virtual void unk_78(M *);
};

struct T {
    T2 *unk_00;
    u8 pad_04[8];
    f32 unk_0C;
    u8 pad_10[0x10];
    f32 unk_20;
    f32 unk_24;
    s32 unk_28;
};

f32 func_0881A1E0(f32);
void func_08866B54(void *, s32, s32);
s32 func_08866B80(s32, s32);
extern f32 D_08A0A0A4[];
extern f32 D_08A0A0A8[];
extern f32 D_089F4CE8[];

static inline const f32 &unk_00(const f32 &arg0, const f32 &arg1) {
    return arg0 < arg1 ? arg0 : arg1;
}

void func_089D4840(T *arg0) {
    f32 a, b;
    M m;
    f32 c, d, f, e, x;
    s32 p;

    a = 0.1f + arg0->unk_20;
    arg0->unk_20 = unk_00(a, D_08A0A0A4[0]);
    b = 0.1f + arg0->unk_24;
    arg0->unk_24 = unk_00(b, D_08A0A0A8[0]);
    x = 2.617994f;
    c = 80.0f * func_0881A1E0(arg0->unk_20 * x);
    d = func_0881A1E0(0.017453292f * (180.0f * arg0->unk_24));
    e = 1.0f + ((D_089F4CE8[1] - 1.0f) * d);
    f = 1.0f + ((D_089F4CE8[0] - 1.0f) * d);
    p = arg0->unk_00->unk_10();
    func_08866B54(&m, 0, func_08866B80(p, 0));
    func_08866B54(&m, 1, func_08866B80(p, 1));
    func_08866B54(&m, 2, func_08866B80(p, 2));
    func_08866B54(&m, 3, func_08866B80(p, 3));
    m.unk_00[0][0] = f;
    m.unk_00[1][1] = e;
    m.unk_00[3][1] = arg0->unk_0C + c;
    arg0->unk_00->unk_78(&m);
    if (arg0->unk_24 >= 1.0f) {
        arg0->unk_28 = 2;
    }
}

}
