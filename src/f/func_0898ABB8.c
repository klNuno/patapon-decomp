#include "common.h"

typedef struct {
    u32 unk_00;
    u32 unk_04;
    f32 unk_08;
} V;

typedef struct N {
    struct N *unk_00;
    struct N *unk_04;
    u8 unk_08[12];
} N;

typedef struct {
    N *unk_00;
    N *unk_04;
    N *unk_08;
    s32 unk_0C;
} L;

typedef struct {
    u8 pad_00[0x354];
    L unk_354;
} T;

typedef union {
    N *unk_00;
    f32 unk_00_f32;
} I;

void func_08866240(T *, u32, u8);
void func_0898A7D4(s32 *, s32 *);
void func_0898A7CC(s32 *, s32);
void func_0898A854(s32 *, void *, s32, s32);

void func_0898ABB8(T *arg0, u32 arg1, u8 arg2, f32 arg3) {
    V temp;
    volatile I temp2;
    volatile I temp3;
    struct {
        u8 pad_00[0xC];
        s32 unk_0C;
        s32 unk_10;
        s32 unk_14;
        u8 pad_18[4];
    } temp4;

    if (arg3 > 0.0f) {
        u8 *temp5 = (u8 *)&temp;
        u32 temp6 = sizeof(temp);
        N *temp7;
        N *temp8;
        N *temp9;
        V *temp10;
        N *temp11;

        if (temp5 != NULL) {
            do {
                *temp5++ = 0;
            } while (--temp6);
        }
        temp.unk_04 = arg2;
        temp2.unk_00 = (N *)&arg0->unk_354;
        temp7 = arg0->unk_354.unk_08;
        temp.unk_00 = arg1;
        temp8 = temp7->unk_00;
        temp.unk_08 = arg3;
        temp3.unk_00_f32 = temp2.unk_00_f32;
        if (temp8 != temp7) {
            if (temp8->unk_00 != NULL) {
                temp8->unk_00->unk_04 = temp8->unk_04;
            }
            if (temp8->unk_04 != NULL) {
                temp8->unk_04->unk_00 = temp8->unk_00;
            }
            temp8->unk_00 = NULL;
            temp8->unk_04 = NULL;
        } else {
            temp8 = NULL;
        }
        temp9 = temp3.unk_00;
        temp11 = temp9->unk_04;
        arg0->unk_354.unk_0C++;
        temp10 = (V *)temp8->unk_08;
        temp11->unk_00 = temp8;
        temp9->unk_04 = temp8;
        temp8->unk_00 = temp9;
        temp8->unk_04 = temp11;
        if ((u32)temp10 != 0) {
            *temp10 = temp;
        }
    } else {
        func_0898A7D4(&temp4.unk_10, (s32 *)&arg0->unk_354);
        func_0898A7CC((s32 *)(u32)&temp4.unk_0C, (s32)&arg0->unk_354);
        func_0898A854(&temp4.unk_14, &arg0->unk_354, temp4.unk_10, temp4.unk_0C);
        func_08866240(arg0, arg1, arg2);
    }
}
