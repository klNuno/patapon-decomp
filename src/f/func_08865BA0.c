#include "common.h"

typedef struct {
    u8 pad_00[0x18];
} E_088C11CC;

typedef struct {
    s32 unk_00;
    s32 unk_04;
} L_0893CEA8;

typedef struct {
    s32 unk_00;
    s16 unk_04;
    s16 unk_06;
    u8 pad_08[4];
} T;

void func_08814BB4(s32);
s32 func_08814C0C(s32);
void func_088155E4(s32);
void func_0881F120(void *, void *, s32);
void func_088581F4(s32, s32, s32, s32, E_088C11CC *);
E_088C11CC *func_08859B14(s32);
void func_08864A30(L_0893CEA8 *);
void func_08864A68(L_0893CEA8 *, s32);

void func_08865BA0(s32 arg0, f32 arg1, f32 arg2, f32 arg3, f32 arg4) {
    T temp0[4];
    L_0893CEA8 temp1;
    u8 *temp2 = (u8 *)temp0;
    s32 temp3 = sizeof(temp0);
    s32 temp4;
    s32 temp5;
    s32 temp6;
    s32 temp7;
    E_088C11CC *temp8;

    if (temp2 != NULL) {
        do {
            *temp2++ = 0;
        } while (--temp3);
    }
    temp0[0].unk_00 = arg0;
    temp0[1].unk_00 = arg0;
    temp0[2].unk_00 = arg0;
    temp0[3].unk_00 = arg0;
    temp4 = (s32)(arg2 + arg4);
    temp0[0].unk_06 = (s16)temp4;
    temp0[2].unk_06 = (s16)temp4;
    temp5 = (s32)arg2;
    temp0[1].unk_06 = (s16)temp5;
    temp0[3].unk_06 = (s16)temp5;
    temp6 = (s32)arg1;
    temp0[0].unk_04 = (s16)temp6;
    temp0[1].unk_04 = (s16)temp6;
    temp7 = (s32)(arg1 + arg3);
    temp0[2].unk_04 = (s16)temp7;
    temp0[3].unk_04 = (s16)temp7;

    temp8 = func_08859B14(sizeof(temp0));
    if (temp8 != NULL) {
        func_0881F120(temp8, temp0, sizeof(temp0));
        func_08864A30(&temp1);
        func_088155E4(1);
        func_08814C0C(9);
        func_08814C0C(0xA);
        func_08814C0C(0xB);
        func_08814C0C(1);
        func_08814C0C(0);
        func_08814C0C(1);
        func_08814BB4(4);
        func_088581F4(4, 0x80011C, 4, 0, temp8);
        func_08864A68(&temp1, -1);
    }
}
