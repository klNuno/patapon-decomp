#include "common.h"

extern "C" {

class T {
public:
    u8 pad_00[0x4C];
    s32 unk_4C;
    u8 pad_50[4];
    f32 unk_54;
    u8 pad_58[0x28];

    virtual void unk_08();
    virtual void unk_0C(s32);
    virtual void unk_10();
    virtual void unk_14(s32, s32);
};

typedef struct {
    char *unk_00;
    u8 pad_04[0x9C];
    T unk_A0;
    u8 pad_124[0xD];
    u8 unk_131;
    u8 pad_132[6];
    f32 unk_138;
    f32 unk_13C;
    f32 unk_140;
    u8 pad_144[4];
    s32 unk_148;
} S;

extern f32 D_089E9440[];
s32 func_088CEE58(char *arg0);
s32 func_088CEE60(char *arg0);
u8 func_088CEE68(char *arg0);
f32 func_088CEE70(char *arg0);
f32 func_0894B4A4(char *arg0);
f32 fabsf(f32);

void func_0894AD74(S *arg0, s32 arg1)
{
    u8 n;
    f32 x;
    f32 y;

    if (arg0->unk_131 != 0) {
        n = 1;
        if (func_088CEE68(arg0->unk_00) == 1) {
            x = func_088CEE70(arg0->unk_00);
            if (func_088CEE58(arg0->unk_00) == 1 && func_088CEE60(arg0->unk_00) == 0) {
                x *= -50.0f - func_0894B4A4((char *)arg0);
                y = func_0894B4A4((char *)arg0);
                y += x;
                arg0->unk_13C = y;
                if ((f32)(s32)arg0->unk_A0.unk_54 >= 100.0f) {
                    arg0->unk_A0.unk_54 = 0.0f;
                }
                arg0->unk_A0.unk_0C(arg1);
            } else if (func_088CEE58(arg0->unk_00) == 0 && func_088CEE60(arg0->unk_00) == 1) {
                arg0->unk_13C = func_0894B4A4((char *)arg0);
                if (arg0->unk_A0.unk_4C != 2) {
                    arg0->unk_A0.unk_14(2, 1);
                }
                arg0->unk_A0.unk_54 = 30.0f * x;
            }
        } else if (func_088CEE58(arg0->unk_00) == 1) {
            arg0->unk_13C = func_0894B4A4((char *)arg0);
            if (arg0->unk_A0.unk_4C != 3) {
                arg0->unk_A0.unk_14(3, 1);
            }
            if ((f32)(s32)arg0->unk_A0.unk_54 >= 100.0f) {
                arg0->unk_A0.unk_54 = 0.0f;
            }
            arg0->unk_A0.unk_0C(arg1);
        } else {
            arg0->unk_A0.unk_14(1, 1);
            arg0->unk_A0.unk_54 = 0.0f;
            y = func_0894B4A4((char *)arg0);
            arg0->unk_138 = 0.0f;
            arg0->unk_13C = y;
            n = 0;
        }
        if (n == 1) {
            y = arg0->unk_138 + arg0->unk_140 * D_089E9440[arg0->unk_148];
            arg0->unk_138 = y;
            if (fabsf(y) > 1100.0f) {
                arg0->unk_138 = 0.0f;
            }
        }
    }
}

}
