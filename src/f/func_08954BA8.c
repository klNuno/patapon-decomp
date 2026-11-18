#include "common.h"

void func_08925F04(void *, s32, s32);
void func_08926090(void *);
extern f32 D_08A04AF0[];
extern f32 D_08A04AF8[];
extern f32 D_08A04B00[];
extern f32 D_08A04B04[];
extern f32 D_08A04B08[];
extern f32 D_08A04B10[];

typedef struct {
    u8 pad_00[0x8E7];
    u8 unk_8E7;
    u8 pad_8E8[0x10];
    u8 unk_8F8[1];
} T;

void func_08954BA8(T *arg0) {
    f32 a[3];
    f32 b[3];
    f32 c[3];

    func_08926090(arg0->unk_8F8);
    a[0] = D_08A04AF0[0];
    a[1] = D_08A04AF0[1];
    a[2] = D_08A04AF8[0];
    func_08925F04(arg0->unk_8F8, (s32)a, 3);
    b[0] = D_08A04AF8[1];
    b[1] = D_08A04B00[0];
    b[2] = D_08A04B04[0];
    func_08925F04(arg0->unk_8F8, (s32)b, 3);
    c[0] = D_08A04B08[0];
    c[1] = D_08A04B08[1];
    c[2] = D_08A04B10[0];
    func_08925F04(arg0->unk_8F8, (s32)c, 3);
    arg0->unk_8E7 = 1;
}
