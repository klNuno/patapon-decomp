#include "common.h"

typedef struct {
    f32 unk_00;
    f32 unk_04;
} T0;
typedef struct {
    u8 pad_00[0xA0];
} T3;
typedef struct {
    u8 pad_00[0x10];
    s32 unk_10;
} A;
typedef struct {
    u8 pad_00[0x44];
    f32 unk_44;
    f32 unk_48;
} B;
typedef struct {
    u8 pad_00[0x18];
    s32 unk_18[10];
    T0 *unk_40;
} C;
typedef struct {
    u8 pad_00[0x9300];
    T0 unk_9300;
} D;
typedef struct {
    u8 pad_00[0x118];
    s32 unk_118;
    u8 pad_11C[0x25C];
    u8 unk_378[0x28];
    D *unk_3A0;
    u8 pad_3A4[0x9FC];
    C *unk_DA0;
} E;
typedef struct {
    u8 pad_00[0x7C];
    s32 unk_7C;
} F;

extern u8 *D_08AD1F14[];
extern const f32 D_089DD508[];
extern s32 func_0885AB7C(s32, s32, s32);
A *func_08877444(u8 *);
void func_08882E70(void *);
extern void func_088830C8(T3 *, T0 *, T0 *);
void func_08883150(void *);
s32 func_08965A10(s32, s32);
s32 func_0893D3C4(void *);
s32 func_088829E4(s32, T3 *, s32);
void func_088804C0(void *, s32);

static inline T0 *func_0889080C_inline(E *arg0) {
    if (arg0->unk_DA0 != NULL) {
        T0 *temp = arg0->unk_DA0->unk_40;
        if (temp != NULL) {
            return temp;
        }
    }
    return &arg0->unk_3A0->unk_9300;
}

s32 func_0889080C(E *arg0, s32 arg1, s32 arg2) {
    T0 temp;
    T0 temp2;
    T3 temp3;
    s32 temp4;
    s32 *temp5;
    s32 temp6;
    B *temp7;
    T0 *temp8;
    F *temp9;
    s32 temp10;

    temp4 = -1;
    switch (arg2) {
    case 5:
        temp4 = 0x3FFF;
        break;
    case 3:
        temp4 = 0x1FF8000;
        break;
    }
    temp.unk_00 = 0.0f;
    temp.unk_04 = 0.0f;
    temp2.unk_00 = 0.0f;
    temp2.unk_04 = 0.0f;

    if (arg0->unk_DA0 == NULL) {
        return 0;
    }
    temp5 = arg0->unk_DA0->unk_18;
    if (temp5 == NULL) {
        return 0;
    }
    temp6 = *(s32 *)((u8 *)temp5 + arg1 * 4);
    temp7 = (B *)func_0885AB7C(func_08877444(D_08AD1F14[0] != NULL ? D_08AD1F14[0] : NULL)->unk_10, 0, temp6);
    temp.unk_00 = D_089DD508[0] * (temp7->unk_44 + temp7->unk_48);
    temp.unk_04 = 300.0f;
    temp8 = func_0889080C_inline(arg0);
    if (temp8 != NULL) {
        temp2.unk_00 = temp8->unk_00;
        temp2.unk_04 = temp8->unk_04;
    }
    temp9 = (F *)func_08965A10(arg0->unk_118, 1);
    func_08882E70(&temp3);
    func_088830C8(&temp3, &temp2, &temp);
    func_08883150(&temp3);
    temp10 = (u8)func_088829E4(func_0893D3C4(arg0->unk_378), &temp3, temp4 & temp9->unk_7C);
    func_088804C0(&temp3, -1);
    return temp10;
}
