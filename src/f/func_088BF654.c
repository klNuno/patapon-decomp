#include "common.h"

typedef struct T {
    u8 pad_00[0x40F8];
    s32 unk_40F8;
} T;
typedef struct {
    u32 unk_00;
    u8 pad_04[0xC];
} A;

extern f32 func_088CEE70(T *);
extern s32 func_088CEE58(T *);
extern s32 func_088CEE60(T *);
extern s32 func_088CEE68(T *);
extern A D_089E01BC[];

f32 func_088BF654(T *arg0) {
    f32 temp;
    f32 temp2;

    if ((u8)func_088CEE68(arg0) == 1) {
        if (func_088CEE60(arg0) == 0) {
            f32 temp4 = func_088CEE70(arg0);
            s32 temp5 = arg0->unk_40F8;
            u32 temp6 = D_089E01BC[temp5].unk_00;
            temp4 = 1.0f - temp4;
            temp = (f32)temp6;
            temp *= temp4;
        } else {
            temp2 = (f32)D_089E01BC[arg0->unk_40F8].unk_00;
            temp = temp2 * func_088CEE70(arg0);
        }
        return temp;
    } else {
        if (func_088CEE58(arg0) == 1) {
            temp2 = (f32)D_089E01BC[arg0->unk_40F8].unk_00;
            temp = temp2 * func_088CEE70(arg0);
        } else {
            temp = 0.0f;
        }
        return temp;
    }
}
