#include "common.h"

s32 func_08814C0C(s32);
void func_088154E8(s32, s32);
extern u8 D_08AD279C[];
extern s32 D_08AD27B0[];
extern f32 *D_08AD27B4[];
extern s32 D_08AD27B8[];
extern s32 D_08AD27BC[];
extern s32 D_08AD27D0[];
extern s32 (*D_08AD27D4[])(s32);

void func_088A3450(s32 arg0, s32 arg1) {
    s32 temp;
    D_08AD27BC[0] = arg1;
    if (arg1 != 0) {
        func_088154E8(1, -1);
    } else {
        D_08AD279C[0] = arg0 >= 0;
        D_08AD27D0[0] = arg0;
        func_08814C0C(9);
        temp = D_08AD27D4[0](0x78);
        D_08AD27B0[0] = temp;
        D_08AD27B4[0] = (f32 *)temp;
        D_08AD27B8[0] = 0;
    }
}
