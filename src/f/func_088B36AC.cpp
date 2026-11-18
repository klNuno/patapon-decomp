#include "common.h"

extern "C" {
typedef struct {
    f32 unk_00;
    f32 unk_04;
} S;

typedef struct {
    f32 unk_00;
    f32 unk_04;
    f32 unk_08;
    f32 unk_0C;
} T;

typedef struct {
    s32 unk_00;
    s32 unk_04;
    f32 unk_08;
    f32 unk_0C;
    u8 unk_10;
    u8 unk_11;
    u8 unk_12;
    u8 unk_13;
    s32 unk_14;
    s32 unk_18;
    u8 unk_1C;
    u8 unk_1D;
    u8 pad_1E[2];
} P;

typedef struct {
    u8 pad_00[12];
} R;

class V {
public:
    virtual void unk_08();
    virtual R unk_0C(P *, u8 **, f32, f32);
};

typedef struct {
    V unk_00;
    u8 pad_04[4];
    S *unk_08;
    u8 pad_0C[12];
    f32 unk_18;
    f32 unk_1C;
} A;

void func_088B3120(u8 *, s32, char *);

static inline R func_088B36AC_1(A *arg0, T *arg1, u8 **arg2, f32 arg3, f32 arg4) {
    P temp3;
    f32 temp5;
    f32 temp4;
    S *temp6;

    {
        f32 temp8 = *(volatile f32 *)&arg1->unk_00;
        f32 temp9 = 255.0f * temp8;
        temp3.unk_10 = (u32)temp9;
    }
    {
        f32 temp8 = *(volatile f32 *)&arg1->unk_04;
        f32 temp9 = 255.0f * temp8;
        temp3.unk_11 = (u32)temp9;
    }
    {
        f32 temp8 = *(volatile f32 *)&arg1->unk_08;
        f32 temp9 = 255.0f * temp8;
        temp3.unk_12 = (u32)temp9;
    }
    {
        f32 temp8 = *(volatile f32 *)&arg1->unk_0C;
        f32 temp9 = 255.0f * temp8;
        temp3.unk_13 = (u32)temp9;
    }
    temp3.unk_00 = 0;
    temp3.unk_04 = 0;
    temp3.unk_14 = -1;
    temp6 = arg0->unk_08;
    temp5 = temp6->unk_04 + arg0->unk_1C;
    temp4 = temp6->unk_00 + arg0->unk_18;
    temp3.unk_18 = 0;
    temp3.unk_1C = 0;
    temp3.unk_1D = 0;
    temp3.unk_0C = temp5;
    temp3.unk_08 = temp4;
    return arg0->unk_00.unk_0C(&temp3, arg2, arg3, arg4);
}

void func_088B36AC(A *arg0, T *arg1, char *arg2, f32 arg3, f32 arg4) {
    u8 temp[0x200];
    u8 *temp2;

    func_088B3120(temp, 0x100, arg2);
    temp2 = temp;
    R temp7 = func_088B36AC_1(arg0, arg1, &temp2, arg3, arg4);
}
}

