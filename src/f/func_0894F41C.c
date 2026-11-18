#include "common.h"

typedef struct {
    f32 unk_00;
    f32 unk_04;
} T;

typedef struct {
    u8 pad_00[0x190B0];
    u8 unk_190B0[0xFD0];
    u32 unk_1A080;
    u8 pad_1A084[0xDC];
    T *unk_1A160;
    u8 pad_1A164[8];
    u32 unk_1A16C;
    u8 pad_1A170[4];
    s32 unk_1A174;
} S;

typedef struct {
    f32 unk_00;
    f32 unk_04;
    f32 unk_08;
    f32 unk_0C;
    f32 unk_10;
    f32 unk_14;
    f32 unk_18;
    f32 unk_1C;
    f32 unk_20;
    f32 unk_24;
    u32 unk_28;
    u8 pad_2C[8];
} Q;

typedef u8 Obj_0895395C;
void *func_088D669C(void *, u8 *);
void func_088D6314(Obj_0895395C *, Q *, void *, u8 *, void *, f32);
void func_0894F210(S *, s32);
extern f32 D_08A044F8[];
extern f32 D_08A04500[];
extern f32 D_08A04508[];
extern f32 D_08A04510[];
extern f32 D_08A04518[];

void func_0894F41C(S *arg0, s32 arg1) {
    struct {
        u8 unk_00;
        u8 pad_01[3];
    } temp;
    Q temp2;
    u8 temp3[8];
    T *temp5;
    u32 temp4;
    u32 temp10;
    f32 temp6;
    f32 temp7;
    f32 temp8;
    f32 temp9;

    if (*(volatile u32 *)&arg0->unk_1A080 != 0 && arg0->unk_1A174 != 0) {
        temp4 = arg0->unk_1A080;
        temp9 = 0.0f;
        arg0->unk_1A080 = --temp4;
        temp10 = arg0->unk_1A16C + temp4;
        temp5 = (T *)((u8 *)arg0->unk_1A160 + temp10 * sizeof(T));
        temp6 = temp5->unk_04;
        temp6 += temp9;
        temp8 = 48.0f * (f32)temp4;
        temp7 = temp5->unk_00 + temp8;
        temp2.unk_24 = temp6;
        temp2.unk_28 = 0;
        temp2.unk_00 = D_08A044F8[1];
        temp2.unk_20 = temp7;
        temp.unk_00 = 0;
        temp2.unk_04 = D_08A04500[0];
        temp2.unk_08 = D_08A04500[1];
        temp2.unk_0C = D_08A04508[0];
        temp2.unk_10 = D_08A04508[1];
        temp2.unk_14 = D_08A04510[0];
        temp2.unk_18 = D_08A04510[1];
        temp2.unk_1C = D_08A04518[0];
        func_088D6314(arg0->unk_190B0, &temp2, func_088D669C(temp3, &temp.unk_00), 0, 0, 1.0f);
        func_0894F210(arg0, arg1);
    }
}
