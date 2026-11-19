#include "common.h"

extern "C" {

typedef struct {
    f32 unk_00;
    f32 unk_04;
    f32 unk_08;
} V;

typedef struct {
    s32 unk_00;
    V unk_04;
    s32 unk_10;
} T;

typedef struct {
    u8 pad_00[8];
    T *unk_08;
    u32 unk_0C;
} G;

typedef struct {
    s32 unk_00;
    u8 unk_04;
    u8 pad_05[3];
} K;

typedef struct {
    f32 unk_00;
    f32 unk_04;
} F;

void func_088FAA3C(V *arg0, G *arg1, s32 arg2) {
    struct { u8 unk_00; u8 pad_01[3]; } temp;
    u8 *q;
    struct { u8 unk_00; u8 pad_01[7]; } temp2;
    volatile K temp3;
    volatile K temp4;
    f32 temp5;
    f32 temp6;
    T *p = arg1->unk_08;
    T *end;
    s32 key;
    f32 b;
    f32 c;
    f32 a;

    temp3.unk_00 = arg2;
    q = &temp2.unk_00;
    temp.unk_00 = *(*(volatile u8 **)&q);
    end = p + arg1->unk_0C;
    temp3.unk_04 = *(volatile u8 *)&temp.unk_00;
    temp5 = ((volatile F *)&temp3)->unk_00;
    temp6 = ((volatile F *)&temp3)->unk_04;
    ((volatile F *)&temp4)->unk_00 = temp5;
    ((volatile F *)&temp4)->unk_04 = temp6;
    key = temp4.unk_00;
    while (p != end && key != p->unk_00) {
        ++p;
    }
    a = ((volatile V *)&p->unk_04)->unk_00;
    b = ((volatile V *)&p->unk_04)->unk_04;
    c = ((volatile V *)&p->unk_04)->unk_08;
    arg0->unk_00 = a;
    arg0->unk_04 = b;
    arg0->unk_08 = c;

}

}
