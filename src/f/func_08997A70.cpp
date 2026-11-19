#include "common.h"

extern "C" {

class T {
public:
    u8 pad_00[0x100];
    virtual void unk_08();
    virtual void unk_0C();
    virtual void unk_10(u32);
};

class U {
public:
    u8 pad_00[0x1058];
    virtual void unk_08(u32);
};

class P {
public:
    void unk_00();
};

typedef struct {
    u8 pad_00[8];
    void *unk_08;
    u8 pad_0C[4];
} V;

typedef struct {
    u8 pad_00[0xC];
} W;

typedef struct { u8 pad_00[0xC]; } S1;
struct V_088EECE0 {
    u8 pad_00[0xC];
};

typedef struct {
    u8 pad_00[0x14];
    s32 unk_14;
    u8 pad_18[8];
    u8 unk_20[0x21C0];
    u8 unk_21E0[0x483D4];
    V *unk_4A5B4;
    u32 unk_4A5B8;
    u8 pad_4A5BC[0x1794];
    u8 unk_4BD50;
    u8 unk_4BD51;
    u8 pad_4BD52[2];
    s32 *unk_4BD54;
    u8 pad_4BD58[0x18];
    u8 unk_4BD70[0x10A60];
    u8 unk_5C7D0[0x10AEC];
    P *unk_6D2BC;
    void (P::*unk_6D2C0)();
    volatile u8 unk_6D2CC;
    u8 pad_6D2CD[3];
    f32 unk_6D2D0;
    f32 unk_6D2D4;
    u8 pad_6D2D8[0x10];
    s32 unk_6D2E8;
} S;

extern S1 D_089EEE90[];
extern void *D_08A8812C[];
void func_0885A870(V_088EECE0 *, S1 *);
s32 func_08860820(void *, s32);
void func_0892DFA0(s32, V_088EECE0 *);
struct T_08995C2C;
T_08995C2C *func_08995710(void *);
void func_08995C2C(T_08995C2C *arg0, u32 arg1);
s32 func_089973C8(S *);
void func_08999FD8(void *, u32);
void func_089C6864(void *, u32);

void func_08997A70(S *arg0, u32 arg1) {
    f32 temp;
    V_088EECE0 temp2;
    const f32 *temp3;
    void *temp4;
    u32 temp5;
    u32 temp6;

    if (arg0->unk_4BD50 == 1) {
        temp4 = D_08A8812C[0];
        if (func_08860820(temp4 != NULL ? temp4 : NULL, 0) == 0) {
            arg0->unk_14 = 3;
            *arg0->unk_4BD54 = 1;
        }
    } else if (arg0->unk_4BD51 == 1) {
        temp4 = D_08A8812C[0];
        if (func_08860820(temp4 != NULL ? temp4 : NULL, 0) == 0) {
            arg0->unk_14 = 5;
            *arg0->unk_4BD54 = 0;
        }
    } else if (func_089973C8(arg0) & 0xFF) {
        temp5 = 0;
        if (temp5 < arg0->unk_4A5B8) {
            temp6 = 0;
            V *&temp7 = arg0->unk_4A5B4;
            do {
                func_08999FD8(((V *)((u8 *)temp7 + temp6))->unk_08, arg1);
                ++temp5;
                temp6 += sizeof(V);
            } while (temp5 < arg0->unk_4A5B8);
        }
        if (arg0->unk_14 == 2) {
            func_089C6864(arg0->unk_4BD70, arg1);
        } else if (arg0->unk_14 == 4) {
            func_089C6864(arg0->unk_5C7D0, arg1);
        } else if (arg0->unk_6D2CC != 0) {
            if (arg0->unk_6D2CC == 1) {
                temp = arg0->unk_6D2D0 + (f32)arg1 / 4800.0f;
                temp3 = temp < arg0->unk_6D2D4 ? &temp : &arg0->unk_6D2D4;
                arg0->unk_6D2D0 = *temp3;
                if (arg0->unk_6D2D0 >= arg0->unk_6D2D4 && arg0->unk_6D2C0 != NULL) {
                    (arg0->unk_6D2BC->*arg0->unk_6D2C0)();
                }
            }
            func_08995C2C(func_08995710(arg0->unk_21E0), arg1);
        } else {
            ((U *)arg0->unk_21E0)->unk_08(arg1);
        }
        ((T *)arg0->unk_20)->unk_10(arg1);
        if (arg0->unk_6D2E8 != 0) {
            func_0885A870(&temp2, D_089EEE90);
            func_0892DFA0(arg0->unk_6D2E8, &temp2);
        }
    }
}

}
