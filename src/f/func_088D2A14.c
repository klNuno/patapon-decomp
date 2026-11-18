#include "common.h"

typedef struct { f32 unk_00; f32 unk_04; } T0;
typedef struct { T0 unk_00; T0 unk_08; u8 unk_10[1]; } T1;
typedef struct T2 T2;
typedef struct {
    u8 pad_00[0x28];
    T0 *unk_28;
    u8 pad_2C[0x18];
    void (*unk_44)(void);
    T2 *unk_48;
    u8 pad_4C[8];
    s32 unk_54;
    s32 unk_58;
} T3;
struct T2 {
    u8 pad_00[0x10];
    T3 *unk_10;
    u8 pad_14[0x10];
    void *unk_24;
    T1 *unk_28;
    u8 pad_2C[4];
    T0 unk_30;
};
extern s32 func_08882F6C(s32, s32);
extern void func_088830C8(T3 *, T0 *, T0 *);
extern T2 *func_088D1A98(T2 *, s32, s32, void *, s32, s32);
extern void func_088D2A0C(void);
extern u8 D_08A461C0[];

T2 *func_088D2A14(T2 *arg0, s32 arg1, T1 *arg2, s32 arg3, s32 arg4) {
    T0 temp1;
    T0 temp2;
    T3 *temp3;
    T1 *temp4;
    f32 temp5;
    f32 temp6;
    f32 temp7;
    f32 temp8;

    func_088D1A98(arg0, arg1, 1, arg2->unk_10, arg3, arg4);
    arg0->unk_24 = D_08A461C0;
    arg0->unk_28 = arg2;
    temp5 = arg2->unk_00.unk_04;
    temp6 = arg2->unk_00.unk_00;
    arg0->unk_30.unk_00 = temp6;
    arg0->unk_30.unk_04 = temp5;
    temp3 = arg0->unk_10;
    temp3->unk_44 = func_088D2A0C;
    temp3->unk_54 = 6;
    temp3->unk_58 = 0;
    temp3->unk_48 = arg0;
    func_08882F6C((s32)arg0->unk_10, 0);
    temp4 = arg0->unk_28;
    temp5 = temp4->unk_08.unk_04;
    temp6 = temp4->unk_08.unk_00;
    temp7 = 0.5f * temp5;
    temp8 = 0.5f * temp6;
    temp2.unk_04 = temp7;
    temp1.unk_04 = temp7;
    temp2.unk_00 = temp8;
    temp1.unk_00 = temp8;
    func_088830C8(arg0->unk_10, &temp1, &temp2);
    arg0->unk_10->unk_28 = &arg0->unk_30;
    return arg0;
}
