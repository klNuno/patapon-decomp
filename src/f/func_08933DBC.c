#include "common.h"

typedef struct {
    f32 unk_00;
    u8 pad_04[0xC];
    s32 unk_10;
    u8 pad_14[4];
    f32 unk_18;
    u8 pad_1C[0x14];
    s32 unk_30;
    u8 pad_34[0x20];
    f32 unk_54;
    u8 pad_58[4];
    f32 unk_5C;
    f32 unk_60;
    s32 unk_64;
} T;

extern s32 D_089E78D8[];
extern s32 D_089E78E4[];
extern f32 D_08A02E98[];
extern f32 D_08A02EA0[];
f32 fabsf(f32);
s32 func_088586E8(void);
f32 func_08866564(f32, u32, u32);
s32 func_088E5574(s32);
void func_0890AA8C(s32, s32, s32, s32);
void func_0890AB10(s32, s32, f32, f32, s32);
s32 func_0890ABC8(s32);
s32 func_0890AC7C(s32);
f32 func_089339A4(T *);
u32 func_089B5464(s32);

void func_08933DBC(T *arg0, u32 arg1)
{
    s32 a;
    f32 x;
    f32 y;
    s32 n;

    arg0->unk_18 = 0.0f;
    if (arg0->unk_5C <= 0.0f) {
        a = arg0->unk_30;
        if (a == func_0890AC7C(func_088E5574(arg0->unk_10))) {
            if (arg0->unk_64 != 0) {
                arg0->unk_54 = func_089339A4(arg0);
            }
            x = arg0->unk_54;
            y = 0.5f;
            x -= arg0->unk_00;
            if (fabsf(x) >= y * arg0->unk_60) {
                a = func_088E5574(arg0->unk_10);
                n = func_089B5464(func_088586E8()) & 1;
                func_0890AA8C(a, D_089E78E4[n], 1, 1);
                arg0->unk_64 = 3;
                arg0->unk_18 = D_08A02EA0[0];
                goto end;
            } else {
                func_0890AA8C(func_088E5574(arg0->unk_10), 3, 1, 1);
                arg0->unk_64 = 2;
                arg0->unk_18 = D_08A02E98[1];
            }
            goto end;
        }
    }
    x = func_08866564(1.0f, arg1, 0x12C0);
    arg0->unk_5C -= x;
    if (arg0->unk_5C > 0.0f &&
        (a = arg0->unk_30, a == func_0890AC7C(func_088E5574(arg0->unk_10)))) {
        if (func_089B5464(func_088586E8()) % 100U == 0) {
            s32 b = func_088E5574(arg0->unk_10);
            n = func_089B5464(func_088586E8()) % 3U;
            func_0890AB10(b, D_089E78D8[n], -1.0f, -1.0f, 0);
        }
    } else {
        a = arg0->unk_30;
        if (a != func_0890AC7C(func_088E5574(arg0->unk_10)) &&
            func_0890ABC8(func_088E5574(arg0->unk_10)) != 0) {
            func_0890AA8C(func_088E5574(arg0->unk_10), 1, 1, 1);
        }
    }
end:
    return;
}
