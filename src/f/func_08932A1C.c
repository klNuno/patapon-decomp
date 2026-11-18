#include "common.h"

typedef struct L_0893236C {
    struct L_0893236C *unk_00, *unk_04;
    struct L_0893236C *unk_08, *unk_0C;
    u8 pad_10[0x10];
    s32 unk_20;
    void *unk_24;
} L_0893236C;
typedef struct {
    L_0893236C unk_00;
    u8 pad_28[4];
    f32 unk_2C, unk_30;
    s32 unk_34;
    u8 unk_38, unk_39, unk_3A, unk_3B;
    f32 unk_3C;
    s32 unk_40;
} T1;
typedef struct {
    u8 pad_00[0x11C];
    L_0893236C unk_11C, unk_144;
} T;
void func_088804AC(s32 *, L_0893236C *);
void func_088802D0(s32 *, L_0893236C *, s32);
s32 *func_08932B5C(s32 *);

static inline s32 func_inline(L_0893236C *arg0, L_0893236C *arg1) {
    L_0893236C *temp = arg0->unk_00;

    if (temp != arg0) {
        arg1->unk_00 = temp;
        (*(L_0893236C *volatile *)&arg0->unk_00)->unk_04 = arg1;
        arg0->unk_00 = arg1;
        return 1;
    }
    arg0->unk_00 = arg1;
    arg0->unk_04 = arg1;
    arg1->unk_00 = arg0;
    return 1;
}

void func_08932A1C(T *arg0, s32 arg1, f32 arg2, f32 arg3, u8 arg4, f32 arg5, s32 arg6) {
    struct { s32 unk_00, unk_04; u8 pad_08[4]; } temp;
    T1 *temp3;
    L_0893236C *temp4;
    s32 temp5;

    if (arg0->unk_144.unk_20 != 0) {
        temp4 = &arg0->unk_144;
        temp3 = (T1 *)(temp4 != NULL ? temp4->unk_00->unk_08 : temp4->unk_08);
        func_088804AC(&temp.unk_00, &arg0->unk_144);
        func_088802D0(&temp.unk_04, &arg0->unk_144, *func_08932B5C(&temp.unk_00));
        temp3->unk_00.unk_20 = arg1;
        temp3->unk_3B = arg4;
        temp3->unk_39 = 0;
        temp3->unk_34 = 0;
        temp3->unk_38 = arg3 > 0.0f ? 1 : 0;
        temp3->unk_30 = arg3;
        temp3->unk_2C = arg2;
        temp3->unk_3C = arg5;
        temp3->unk_40 = arg6;
        temp3->unk_3A = 0;
        if (&arg0->unk_11C != &temp3->unk_00) {
            temp5 = func_inline(&arg0->unk_11C, &temp3->unk_00);
            temp3->unk_00.unk_04 = &arg0->unk_11C;
            if (temp5) {
                temp3->unk_00.unk_0C = &arg0->unk_11C;
                arg0->unk_11C.unk_20++;
            }
        }
    }
}
