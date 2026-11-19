#include "common.h"

extern "C" {
class V {
public:
    virtual void unk_08();
    virtual void unk_0C();
    virtual void unk_10(u32);
    virtual void unk_14();
    virtual void unk_18(f32);
};
class W {
public:
    virtual void unk_08();
    virtual void unk_0C(u32, s32);
    virtual void unk_10();
    virtual s32 unk_14();
    virtual void unk_18();
    virtual void unk_1C();
    virtual void unk_20();
};
class T2 {
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
    virtual void unk_3C();
    virtual void unk_40();
    virtual void unk_44();
    virtual void unk_48();
    virtual void unk_4C();
    virtual s32 unk_50();
};
typedef V T;
typedef struct {
    u8 pad_00[0x10];
    T2 *unk_10;
} N;
struct It {
    N *unk_00;
    It(const It &arg0) : unk_00(arg0.unk_00) {}
};
union I {
    N *unk_00;
    f32 unk_04;
};
typedef struct {
    u8 pad_00[0x9C];
    N unk_9C;
} F;
typedef struct S {
    u8 pad_00[8];
    u8 unk_08[0x2E];
    u8 unk_36;
    u8 pad_37[0xA90 - 0x37];
    W *unk_A90;
    u8 pad_A94[8];
    s32 unk_A9C;
    u8 pad_AA0[4];
    F *unk_AA4;
    u8 pad_AA8[0x48];
    u8 unk_AF0[0x1D50 - 0xAF0];
    char unk_1D50[0x1C];
    char unk_1D6C[0x2F0];
    char unk_205C[0x22F4];
    u8 unk_4350[0x70];
    char unk_43C0[0x1E6B0 - 0x43C0];
    V unk_1E6B0;
    u8 pad_1E6B4[0x714];
    s32 unk_1EDC8;
    u8 pad_1EDCC[0x1C8];
    u8 unk_1EF94;
    u8 pad_1EF95[2];
    u8 unk_1EF97;
    u8 pad_1EF98[0x1078];
    char unk_20010[0x2050];
    u8 unk_22060[0x44];
    s32 unk_220A4, unk_220A8;
    u32 unk_220AC;
    u8 pad_220B0[8];
    s32 unk_220B8;
    u8 pad_220BC[4];
    s32 unk_220C0;
    u8 pad_220C4[0x70];
    u8 unk_22134[0x50];
    s32 unk_22184;
} S;
typedef struct Unk1 Unk1;
typedef struct Unk2 Unk2;

extern s32 func_088586E8(void);
void func_088795DC(char *arg0, s8 arg1);
void func_0887AA78(void *, u32);
s32 func_0887ED78(s32, s32);
void func_088D52D0(T *arg0, f32 arg1);
void func_0894B61C(void *, u32);
s32 func_0894BDF4(void *);
void func_0894C5F0(char *arg0, s32 arg1);
s32 func_0894CEC0(char *arg0, s32 arg1);
void func_0894CF88(char *arg0, s8 arg1);
void func_0894DAE8(s32 arg0, s32 arg1);
void func_0894DB58(char *arg0, s32 arg1);
void func_089509B0(void *, s32, u32);
void func_08952700(char *arg0, s32 arg1);
void func_08953084(s32 arg0, s32 arg1);
void func_08956B4C(S *, s32, s32, f32);
void func_08958DC8(void *, u32);
s32 func_08958F68(Unk1 *arg0, Unk2 *arg1);
It func_0897C818(void *, s32);
s32 func_089B53CC(s32 *arg0);

inline s32 func_08956414_00(s32 arg0) {
    s32 temp = 1;
    if (arg0 != 2 && arg0 != 4) {
        temp = 0;
    }
    return temp;
}

void func_08956414(S *arg0, s32 arg1, u32 arg2) {
    if (((u8 *)func_089B53CC((s32 *)func_088586E8()))[1] != 0) {
        return;
    }
    arg0->unk_220A4 = arg0->unk_220A8;
    arg0->unk_1E6B0.unk_10(arg2);
    if (arg0->unk_220A4 == 2) {
        func_08958F68((Unk1 *)arg0->unk_22134, (Unk2 *)arg0->unk_08);
        return;
    }
    if (func_0887ED78(arg1, 1) != 0) {
        if (!func_08956414_00(arg0->unk_1EDC8) &&
            arg0->unk_1EF94 != 0 && arg0->unk_1EF97 == 0) {
            func_088D52D0(&arg0->unk_1E6B0, 0.12f);
        }
    } else {
        if (func_08956414_00(arg0->unk_1EDC8)) {
            arg0->unk_1E6B0.unk_18(0.12f);
        }
    }
    func_0887AA78(arg0->unk_08, arg2);
    if (arg0->unk_36 != 0) {
        s32 temp = arg0->unk_22184;
        if (temp != 0) {
            --temp;
            if ((arg0->unk_22184 = temp) == 0) {
                It temp2 = func_0897C818(arg0->unk_AA4, 1);
                volatile I temp3;
                volatile I temp4;
                N *temp5 = temp2.unk_00;
                F *temp6 = arg0->unk_AA4;
                temp3.unk_00 = temp5;
                temp4.unk_04 = temp3.unk_04;
                if (temp4.unk_00 != &temp6->unk_9C) {
                    if (temp5->unk_10->unk_50() != 0) {
                        temp2.unk_00->unk_10->unk_34();
                    }
                }
            }
        }
    }
    func_0894C5F0(arg0->unk_20010, arg2);
    func_0894B61C(arg0->unk_22060, arg2);
    func_08958F68((Unk1 *)arg0->unk_22134, (Unk2 *)arg0->unk_08);
    func_089509B0(arg0->unk_1D50, arg1, arg2);
    if (arg0->unk_A90 != NULL) {
        W *&temp = arg0->unk_A90;
        temp->unk_0C(arg2, arg1);
        if (temp->unk_14() != 0 && arg0->unk_A9C != 0) {
            func_08952700(arg0->unk_1D50, 1);
            temp->unk_20();
            arg0->unk_A9C = 0;
        }
    }
    func_08958DC8(arg0->unk_4350, arg2);
    func_0894DB58(arg0->unk_43C0, func_0894BDF4(arg0->unk_22060));
    func_0894DAE8((s32)arg0->unk_43C0, arg2);
    func_08953084((s32)arg0->unk_AF0, arg2);
    u32 temp = arg0->unk_220AC;
    if (temp >= arg2) {
        arg0->unk_220AC = temp - arg2;
    } else {
        arg0->unk_220AC = 0;
    }
    switch (arg0->unk_220A4) {
    case 0:
        func_08956B4C(arg0, arg0->unk_220B8, arg0->unk_220C0, 0.0f);
        arg0->unk_220A8 = 1;
        arg0->unk_220AC = 0;
        break;
    case 1:
    case 4:
    case 2:
        break;
    case 3:
        func_08956B4C(arg0, arg0->unk_220B8, arg0->unk_220C0, 0.0f);
        func_088795DC(arg0->unk_205C, 1);
        func_0894CF88(arg0->unk_1D6C, 0);
        func_0894CEC0(arg0->unk_1D6C, 1);
        arg0->unk_220A8 = 1;
        arg0->unk_220AC = 0;
        break;
    }
}
}
