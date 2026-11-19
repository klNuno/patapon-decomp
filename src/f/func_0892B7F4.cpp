#include "common.h"

extern "C" {
class T {};
typedef void (T::*P)();

inline const f32 &func_1(const f32 &arg0, const f32 &arg1) {
    if (arg0 < arg1) {
        return arg0;
    } else {
        return arg1;
    }
}

struct E {
    T *unk_00;
    P unk_04;
    volatile u8 unk_10;
    u8 pad_11[3];
    f32 unk_14;
    f32 unk_18;

    void func_0(u32 arg0) {
        if (unk_10 == 1) {
            f32 temp = unk_14 + (f32)arg0 / 4800.0f;
            unk_14 = func_1(temp, unk_18);
            if (unk_14 >= unk_18 && unk_04) {
                (unk_00->*unk_04)();
            }
        }
    }
};

typedef struct {
    u8 pad_00[0x68];
    s32 unk_68;
} Res;

typedef struct {
    s32 unk_00;
    s32 unk_04;
    s32 unk_08;
    u8 pad_0C[4];
    u8 unk_10[1];
} S_089336F0;

struct C;
struct A {
    u8 pad_00[0x16C];

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
};

struct B {
    u8 pad_00[0x80];

    virtual void unk_08();
    virtual void unk_0C(u32);
};

struct S : A {
    u8 unk_170[0x80];
    S_089336F0 unk_1F0;
    u8 pad_204[0xA0];
    s32 unk_2A4;
    s32 unk_2A8;
    u8 pad_2AC[0x4C];
    void *unk_2F8;
    u8 pad_2FC[4];
    B unk_300;
    u8 pad_384[0xC];
    E unk_390;
    E unk_3AC;
    E unk_3C8;
    E unk_3E4;
    u8 pad_400[0x168];
    E unk_568;
    u8 pad_584[4];
    char unk_588[0x44];
    u8 unk_5CC;
    u8 pad_5CD[3];
    u8 unk_5D0;
};

Res *func_0892AE88(void *);
s32 func_0892C27C(s32);
void func_089325DC(void *, u32);
void func_08932EF4(C *, u32);
void func_089334D4(void *, s32);
void func_08933578(S_089336F0 *);
s32 func_089337AC(s32 *, s32);
void func_089D47D4(void *, u32);
s32 func_089D4FA4(char *, s32);

void func_0892B7F4(S *arg0, u32 arg1) {
    if (arg0->unk_2A4 != 0 && func_0892C27C(arg0->unk_2A4) != 0) {
        arg0->unk_68();
        return;
    }
    if (arg0->unk_2A8 != 0 && func_0892C27C(arg0->unk_2A8) != 0) {
        arg0->unk_2A8 = 0;
    }
    if (arg0->unk_5CC != 0) {
        if (arg0->unk_390.unk_10 == 1) {
            arg0->unk_390.func_0(arg1);
            return;
        }
        if (arg0->unk_5D0 != 0) {
            arg0->unk_300.unk_0C(arg1);
        }
        func_089325DC(arg0, arg1);
        func_08933578(&arg0->unk_1F0);
        func_089D47D4(arg0->unk_588, arg1);
        if (arg0->unk_3C8.unk_10 == 1) {
            arg0->unk_3C8.func_0(arg1);
            return;
        }
        arg0->unk_568.func_0(arg1);
        arg0->unk_3E4.func_0(arg1);
        arg0->unk_3AC.func_0(arg1);
        s32 temp = func_0892AE88(arg0->unk_2F8)->unk_68 == 1;
        if (temp != 0) {
            temp = (u8)func_089337AC(&arg0->unk_1F0.unk_00, temp) == 0;
        }
        if (temp != 0) {
            temp = (u8)func_089D4FA4(arg0->unk_588, temp) == 0;
        }
        func_089334D4(arg0->unk_170, temp);
        func_08932EF4((C *)arg0->unk_170, arg1);
    }
}
}
