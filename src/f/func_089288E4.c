#include "common.h"

typedef struct {
    f32 unk_00;
    f32 unk_04;
    f32 unk_08;
} V;
typedef struct {
    V unk_00;
    f32 unk_0C;
} W;
typedef struct {
    W unk_00[4];
} Mtx;
typedef struct {
    u8 pad_00[0x40];
    Mtx unk_40;
} A;
typedef struct {
    u8 pad_00[4];
    A *unk_04;
} B;
typedef struct {
    s32 unk_00;
    u8 pad_04[0x24];
    B *unk_28;
    void *unk_2C;
} C;
typedef struct {
    u8 pad_00[4];
    s32 unk_04;
    s32 unk_08;
    u8 pad_0C[0xC];
    f32 unk_18;
} D;

f32 func_0885606C(f32);
f32 func_08856234(f32);
void func_08866464(Mtx *, void *, void *);
void func_08866B54(Mtx *, s32, void *);
void *func_08866B80(Mtx *, s32);
typedef struct { u8 pad_00[0xC]; } R_089033A4;
void func_08931CEC(R_089033A4 *, u8 *, s32, s32 *, void *, void *, void *);
s32 func_0893D420(void *, s32);

static inline void func_089288E4_inline(V *arg0, f32 arg1, f32 arg2, f32 arg3, f32 arg4) {
    f32 temp = arg1 * arg2;
    f32 temp2 = arg1 * arg3;
    f32 temp3 = arg1 * arg4;
    arg0->unk_00 = temp;
    arg0->unk_04 = temp2;
    arg0->unk_08 = temp3;
}

s32 func_089288E4(C *arg0, D *arg1) {
    struct {
        u8 unk_00[0xC];
        s32 unk_0C;
    } temp;
    Mtx temp2;
    W temp3;
    W temp4;
    Mtx temp5;
    f32 temp6;
    f32 temp7;

    if (arg1 == NULL) {
        return 0;
    }
    func_08866464(&temp5, arg0->unk_2C, &arg0->unk_28->unk_04[arg1->unk_04].unk_40);
    func_08866B54(&temp2, 0, func_08866B80(&temp5, 0));
    func_08866B54(&temp2, 1, func_08866B80(&temp5, 1));
    func_08866B54(&temp2, 2, func_08866B80(&temp5, 2));
    func_08866B54(&temp2, 3, func_08866B80(&temp5, 3));
    temp3.unk_00 = temp2.unk_00[3].unk_00;
    temp3.unk_0C = 1.0f;
    {
        f32 temp8 = 3.1415927f;
        f32 temp9 = arg1->unk_18;
        f32 temp10 = 180.0f;
        f32 temp11 = 0.5f;
        f32 temp12 = temp8 * temp9;
        temp9 = temp12 / temp10;
        temp6 = temp9 * temp11;
    }
    temp7 = func_08856234(temp6);
    temp4.unk_0C = func_0885606C(temp6);
    func_089288E4_inline(&temp4.unk_00, temp7, 0.0f, 0.0f, 1.0f);
    if (arg0->unk_00 != 0) {
        temp.unk_0C = arg0->unk_00;
        func_08931CEC((R_089033A4 *)&temp, (u8 *)func_0893D420(&temp.unk_0C, 1), arg1->unk_08, NULL, &temp3, &temp4, NULL);
    }
    return 1;
}
