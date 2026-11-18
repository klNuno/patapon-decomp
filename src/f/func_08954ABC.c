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

void func_08954ABC(T *arg0, u8 arg1) {
    f32 a[3];
    f32 b[3];
    f32 c[3];

    arg0->unk_8E6 = arg1;
    func_08926090(arg0->unk_8F8);
    if (arg0->unk_8E6) {
        a[0] = D_08A04AA8[0];
        a[1] = D_08A04AA8[1];
        a[2] = D_08A04AB0[0];
        func_08925F04(arg0->unk_8F8, (s32)a, 3);
    }
    if (arg0->unk_8E4) {
        b[0] = D_08A04AB0[1];
        b[1] = D_08A04AB8[0];
        b[2] = D_08A04ABC[0];
        func_08925F04(arg0->unk_8F8, (s32)b, 3);
    }
    if (arg0->unk_8E5) {
        c[0] = D_08A04AC0[0];
        c[1] = D_08A04AC0[1];
        c[2] = D_08A04AC8[0];
        func_08925F04(arg0->unk_8F8, (s32)c, 3);
    }
}
