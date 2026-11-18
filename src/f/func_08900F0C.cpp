#include "common.h"

extern "C" {
typedef struct {
    f32 unk_00;
    f32 unk_04;
} T;

class V {
    u8 pad_00[0x28];
public:
    virtual void unk_08();
    virtual void unk_0C();
    virtual void unk_10();
    virtual void unk_14();
    virtual void unk_18();
    virtual void unk_1C();
    virtual void unk_20();
    virtual void unk_24();
    virtual T *unk_28();
};

struct S : V {
    u8 pad_2C[0x3C4];
    u8 unk_3F0[4];
};

typedef struct {
    u8 pad_00[8];
    S *unk_08;
    u8 pad_0C[4];
} E_08900C4C;

typedef struct {
    u8 pad_00[0x404];
    E_08900C4C *unk_404;
    s32 unk_408;
} O_08900C4C;

typedef struct {
    u8 pad_00[0x506F0];
    u8 unk_506F0[4];
} W_08900C4C;

typedef struct {
    u8 pad_00[0x10];
    W_08900C4C *unk_10;
} T_08900C4C;

void func_08852F00(void *, s32);
s32 *func_0885356C(void *, s32, s32, s32);
s32 func_088C6464(void *);
s32 func_088F8DCC(s32, s32, O_08900C4C **);
void func_0890A238(void *, s32, s32, f32 *, f32);

void func_08900F0C(T_08900C4C *arg0, void *arg1) {
    O_08900C4C *temp;
    union { f32 unk_00[2]; f64 unk_00_f64; } temp2;
    s32 *temp3;
    s32 *temp4;
    s32 *temp5;
    f32 *temp6;
    f32 *temp7;
    f32 *temp8;
    s32 temp9;
    E_08900C4C *temp10;
    E_08900C4C *temp11;

    temp3 = func_0885356C(arg1, 0, 1, 4);
    temp4 = func_0885356C(arg1, 1, 1, 4);
    temp5 = func_0885356C(arg1, 2, 1, 4);
    temp6 = (f32 *)func_0885356C(arg1, 3, 1, 4);
    temp7 = (f32 *)func_0885356C(arg1, 4, 1, 4);
    temp8 = (f32 *)func_0885356C(arg1, 5, 1, 4);
    temp9 = func_088C6464(arg0->unk_10->unk_506F0);
    temp = NULL;
    if (func_088F8DCC(temp9, *temp3, &temp) != 0) {
        temp10 = temp->unk_404;
        temp11 = temp10 + temp->unk_408;
        for (; temp10 != temp11; temp10++) {
            if (temp10->unk_08 != NULL) {
                S **temp12 = &temp10->unk_08;
                T *temp13 = (*temp12)->unk_28();
                f32 temp14 = temp13->unk_04 + *temp7;
                f32 temp15 = temp13->unk_00 + *temp6;
                temp2.unk_00[0] = temp15;
                temp2.unk_00[1] = temp14;
                func_0890A238((*temp12)->unk_3F0, *temp4, *temp5, temp2.unk_00, *temp8);
            }
        }
    }
    func_08852F00(arg1, 0);
}
}
