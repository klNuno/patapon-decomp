#include "common.h"

typedef struct {
    f32 unk_00;
    f32 unk_04;
    f32 unk_08;
    f32 unk_0C;
} U;

typedef struct D_088901E4 {
    u8 pad_00[4];
    s32 unk_04;
} D_088901E4;

typedef struct {
    s32 unk_00;
    s32 unk_04;
    u8 pad_08[4];
    s32 unk_0C[5];
} X;

typedef struct {
    u8 pad_00[0xC];
    X unk_0C;
    u8 pad_2C[4];
    U unk_30;
    U *unk_40;
    u8 pad_44[0x10];
    s32 unk_54;
    s32 unk_58;
    s32 unk_5C;
    s32 unk_60;
    s32 unk_64;
    s32 unk_68;
    s32 unk_6C;
    u8 pad_70[0x10];
} V;

typedef struct {
    u8 pad_00[0x690];
    u8 unk_690;
    u8 pad_691[0x2DF];
    u8 unk_970[0x430];
    V *unk_DA0;
    u8 pad_DA4[0x729];
    u8 unk_14CD;
} W;

void func_088A8600(void *, s32);
void func_088A86A0(D_088901E4 *, s32, s32);
void func_088900AC(void *, V *);

s32 func_0888FF98(W *arg0, f32 arg2, s32 arg1) {
    V temp;
    V *p;

    if (arg0->unk_690 == 0) {
        return 0;
    }
    arg0->unk_14CD = 1;
    p = arg0->unk_DA0;
    if (p != NULL) {
        p->unk_30.unk_00 = arg2;
        p->unk_30.unk_04 = 0.0f;
        p->unk_30.unk_08 = 0.0f;
        p->unk_30.unk_0C = 1.0f;
        p->unk_40 = &p->unk_30;
        p->unk_0C.unk_00 = 0;
    } else {
        X *temp2 = &temp.unk_0C;
        temp2->unk_00 = 0;
        temp2->unk_04 = 0;
        temp2->unk_0C[0] = 0;
        temp2->unk_0C[1] = 1;
        temp2->unk_0C[2] = 2;
        temp2->unk_0C[3] = 3;
        temp2->unk_0C[4] = 4;
        temp.unk_6C = -1;
        temp.unk_40 = NULL;
        temp.unk_54 = 0;
        temp.unk_58 = 0;
        temp.unk_5C = 0;
        temp.unk_60 = 0;
        temp.unk_64 = 0;
        temp.unk_68 = 0;
        func_088A8600(&temp, 0);
        temp.unk_30.unk_00 = arg2;
        temp.unk_30.unk_04 = 0.0f;
        temp.unk_30.unk_08 = 0.0f;
        temp.unk_30.unk_0C = 1.0f;
        temp.unk_40 = &temp.unk_30;
        temp.unk_0C.unk_00 = 0;
        func_088A86A0((D_088901E4 *)&temp, arg1, 1);
        func_088900AC(arg0->unk_970, &temp);
    }
    return 1;
}
