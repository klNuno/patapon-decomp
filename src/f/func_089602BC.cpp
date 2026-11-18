#include "common.h"

extern "C" {

struct Unk3 {
    u8 pad_00[8];
    virtual void func_00();
    virtual void func_04();
    virtual void func_08();
    virtual void func_0C();
    virtual void func_10();
    virtual void func_14();
    virtual void func_18();
    virtual void func_1C();
    virtual void func_20();
    virtual void func_24();
    virtual void func_28();
    virtual void func_2C();
    virtual void func_30();
    virtual void func_34();
    virtual void func_38();
    virtual void func_3C();
    virtual void func_40();
    virtual void func_44();
    virtual void func_48();
    virtual void func_4C();
    virtual void func_50();
};

struct L_08961998 {
    L_08961998 *unk_00;
    L_08961998 *unk_04;
    Unk3 *unk_08;
    u8 pad_0C[0x14];
    s32 unk_20;
};

struct Unk1 {
    u8 pad_00[0x18];
    s32 unk_18;
};

struct T;
struct L_0895F6F4;
struct N_0895F6F4;

struct Unk0 {
    u8 pad_00[0x20];
    Unk1 *unk_20;
    u8 pad_24[0x3C];
    u8 unk_60[0x20];
    s32 unk_80;
    L_08961998 unk_84;
    u8 pad_A8[0x2C];
    u8 unk_D4;
    u8 pad_D5[7];
    s32 unk_DC;
    u8 pad_E0[0x94];
    void *unk_174;
    void *unk_178;
    void *unk_17C;
    L_0895F6F4 *unk_180;
};

void func_0892AA94(s32, u32, f32, f32, s32);
void func_0895F810(L_0895F6F4 *, N_0895F6F4 *);
void func_0895FCC8(L_08961998 *);
void func_089603DC(u8 *);
void func_089606D8(T *arg0);

static inline s32 func_00(L_08961998 *arg0, Unk0 *arg2) {
    Unk3 *temp3 = arg2->unk_84.unk_08;
    L_08961998 *arg1 = &arg2->unk_84;
    s32 temp2 = 0;
    s32 temp = 0;
    if (arg0->unk_08 == temp3 && arg0->unk_04 == arg1->unk_04) {
        temp = 1;
    }
    if (temp != 0) {
        L_08961998 *temp4 = arg1->unk_00;
        L_08961998 *temp5 = arg0->unk_00;
        if (temp5 == temp4) {
            temp2 = 1;
        }
    }
    return (temp2 != 0) ^ 1;
}

void func_089602BC(Unk0 *arg0) {
    struct { L_08961998 *unk_00; } temp;

    if (arg0->unk_DC > 0) {
        func_0892AA94(arg0->unk_20->unk_18, arg0->unk_DC & 0x20, 0.0f, 0.0f, 0);
    }
    arg0->unk_D4 = 0;
    arg0->unk_DC = -1;
    func_089606D8((T *)arg0);
    if (arg0->unk_84.unk_20 != 0) {
        temp.unk_00 = arg0->unk_84.unk_04;
        while (func_00(temp.unk_00, arg0)) {
            (*(Unk3 *volatile *)8)->func_50();
            if (temp.unk_00 != NULL) {
                temp.unk_00 = temp.unk_00->unk_04;
            }
        }
    }
    func_089603DC(arg0->unk_60);
    arg0->unk_80 = 0;
    func_0895FCC8(&arg0->unk_84);
    if (arg0->unk_180 != NULL) {
        func_0895F810(arg0->unk_180, (N_0895F6F4 *)&arg0->unk_174);
    }
    arg0->unk_180 = NULL;
    arg0->unk_178 = NULL;
    arg0->unk_174 = NULL;
}

}
