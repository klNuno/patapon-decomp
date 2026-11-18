#include "common.h"

void func_08925F04(void *, s32, s32);
void func_08926090(void *);
extern f32 D_08A04AA8[];
extern f32 D_08A04AB0[];
extern f32 D_08A04AB8[];
extern f32 D_08A04ABC[];
extern f32 D_08A04AC0[];
extern f32 D_08A04AC8[];

typedef struct {
    u8 pad_00[0x8E4];
    u8 unk_8E4;
    u8 unk_8E5;
    u8 unk_8E6;
    u8 pad_8E7[0x11];
    u8 unk_8F8[1];
} T;

void func_08954200(T *arg0)
{
    f32 temp[3];
    f32 temp2[3];
    f32 temp3[3];

    func_08926090(arg0->unk_8F8);
    if (arg0->unk_8E6 != 0) {
        temp[0] = D_08A04AA8[0];
        temp[1] = D_08A04AA8[1];
        temp[2] = D_08A04AB0[0];
        func_08925F04(arg0->unk_8F8, (s32)temp, 3);
    }
    if (arg0->unk_8E4 != 0) {
        temp2[0] = D_08A04AB0[1];
        temp2[1] = D_08A04AB8[0];
        temp2[2] = D_08A04ABC[0];
        func_08925F04(arg0->unk_8F8, (s32)temp2, 3);
    }
    if (arg0->unk_8E5 != 0) {
        temp3[0] = D_08A04AC0[0];
        temp3[1] = D_08A04AC0[1];
        temp3[2] = D_08A04AC8[0];
        func_08925F04(arg0->unk_8F8, (s32)temp3, 3);
    }
}
