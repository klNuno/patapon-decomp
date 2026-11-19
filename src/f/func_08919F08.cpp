#include "common.h"

extern "C" {

typedef struct S S;
typedef struct {
    f32 unk_00[2];
} V;

typedef struct {
    u8 pad_00[0x66C];
    u8 unk_66C;
    u8 pad_66D[3];
    f32 unk_670;
    f32 unk_674;
    u8 unk_678[0x16D0 - 0x678];
    u8 unk_16D0[0x2728 - 0x16D0];
    u8 unk_2728;
    u8 unk_2729;
    u8 unk_272A;
    u8 unk_272B;
} T;

void func_08815CD0(s32, s32, s32, s32);
f32 func_0881A1E0(f32);
void func_0891A268(T *);
void func_0891C4AC(S *, f32 *, s32);
void func_0891C4DC(S *arg0, s32 arg1, const V *arg2, const V *arg3);
void func_0891C5D8(S *);
void func_08926200(void *, u8 *, s32);

extern V D_089E5BA8[];
extern V D_089E5BB0[];
extern f32 D_089E5BC0[];
extern f32 D_089E5BC4[];
extern f32 D_089E5BC8[];
extern V D_089E5BD8[];
extern V D_089E5BE0[];
extern u8 D_089E5BE8[];
extern f32 D_08A00970[];
extern f32 D_08A00978[];

static inline f32 func_08919F08_00(f32 arg0, const f32 *arg1, const f32 *arg2) {
    if (*arg2 <= 0.0001f) {
        return 1.0f;
    }
    return *arg1 / arg0;
}

void func_08919F08(T *arg0, S *arg1, s32 arg2) {
    f32 temp;
    struct { V unk_00; u8 pad_08[4]; } temp2;
    V temp3;
    V temp4;
    V temp5;
    V temp6;
    V temp7;
    V temp8;
    volatile f32 temp10[4];
    f32 temp11;
    f32 temp12;
    f32 temp13;
    f32 temp14;
    f32 temp15;
    f32 temp16;
    f32 temp17;
    u32 temp18;
    u32 *temp19;

    if (arg0->unk_272B == 0) {
        return;
    }
    if (arg0->unk_66C == 0) {
        temp11 = 0.0f;
    } else {
        temp12 = arg0->unk_674;
        temp = temp12;
        temp18 = *(u32 *)&temp;
        temp19 = (u32 *)&temp;
        temp19 = (u32 *)(u32)temp19;
        temp18 = (temp18 << 1) >> 1;
        *(u32 *)&temp = temp18;
        temp11 = func_08919F08_00(temp12, &arg0->unk_670, (f32 *)temp19);
    }
    temp13 = func_0881A1E0((3.1415927f * (90.0f * temp11)) / 180.0f);
    temp10[0] = D_08A00970[0];
    temp10[1] = D_08A00970[1];
    temp10[2] = D_08A00978[0];
    temp10[3] = D_08A00978[1];
    temp10[3] = 0.3f + 0.5f * temp13;
    func_0891C4AC(arg1, (f32 *)temp10, 1);

    temp15 = D_089E5BA8[0].unk_00[1];
    temp14 = D_089E5BA8[0].unk_00[0];
    temp16 = D_089E5BB0[0].unk_00[0];
    temp17 = D_089E5BB0[0].unk_00[1];
    temp16 -= temp14;
    *(u32 *)&temp3.unk_00[0] = 0x3F800000;
    temp17 -= temp15;
    *(u32 *)&temp3.unk_00[1] = 0x3F800000;
    temp16 *= temp13;
    temp17 *= temp13;
    temp14 += temp16;
    temp15 += temp17;
    temp2.unk_00.unk_00[0] = temp14;
    temp2.unk_00.unk_00[1] = temp15;
    func_0891C4DC(arg1, 0, &temp2.unk_00, &temp3);

    *(u32 *)&temp4.unk_00[0] = 0x3F800000;
    *(u32 *)&temp4.unk_00[1] = 0x3F800000;
    func_0891C4DC(arg1, 1, &temp2.unk_00, &temp4);

    *(u32 *)&temp5.unk_00[0] = 0x3F800000;
    *(u32 *)&temp5.unk_00[1] = 0x3F800000;
    func_0891C4DC(arg1, 2, &temp2.unk_00, &temp5);

    *(u32 *)&temp6.unk_00[0] = 0x3F800000;
    *(u32 *)&temp6.unk_00[1] = 0x3F800000;
    func_0891C4DC(arg1, 3, &temp2.unk_00, &temp6);
    func_0891C5D8(arg1);

    if (arg0->unk_272A == 1) {
        if (arg0->unk_2728 != 0) {
            temp11 = 1.0f;
        } else {
            temp11 = 0.3f;
        }
        temp10[3] = temp11;
        func_0891C4AC(arg1, (f32 *)temp10, 1);
        *(u32 *)&temp7.unk_00[0] = 0x3F800000;
        *(u32 *)&temp7.unk_00[1] = 0x3F800000;
        func_0891C4DC(arg1, 7, D_089E5BD8, &temp7);
        func_0891C5D8(arg1);

        if (arg0->unk_2729 != 0) {
            temp11 = 1.0f;
        } else {
            temp11 = 0.3f;
        }
        temp10[3] = temp11;
        func_0891C4AC(arg1, (f32 *)temp10, 1);
        *(u32 *)&temp8.unk_00[0] = 0x3F800000;
        *(u32 *)&temp8.unk_00[1] = 0x3F800000;
        func_0891C4DC(arg1, 8, D_089E5BE0, &temp8);
        func_0891C5D8(arg1);

        if (arg2 != 0) {
            func_08926200(arg0->unk_16D0, D_089E5BE8, 0);
        } else {
            func_08926200(arg0->unk_678, D_089E5BE8, 0);
        }
    }

    func_08815CD0((s32)D_089E5BC0[0], (s32)D_089E5BC4[0],
                 (s32)D_089E5BC8[0], (s32)D_089E5BC8[1]);
    func_0891A268(arg0);
    func_08815CD0(0, 0, 0x1E0, 0x110);
}

}
