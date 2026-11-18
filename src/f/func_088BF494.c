#include "common.h"

typedef struct { u8 pad_00[0x40F8]; s32 unk_40F8; } T;
typedef struct { u8 pad_00[4]; f32 unk_04; u8 pad_08[8]; } U;
extern U D_089E01B0[];
extern s32 func_088CEE58(T *);
extern s32 func_088CEE60(T *);
extern s32 func_088CEE68(T *);
extern f32 func_088CEE70(T *);

f32 func_088BF494(T *arg0) {
    f32 temp;
    f32 temp2;
    if ((u8)func_088CEE68(arg0) == 1) {
        if (func_088CEE60(arg0) == 0) {
            temp2 = 1.0f - func_088CEE70(arg0);
            temp = D_089E01B0[arg0->unk_40F8].unk_04;
            temp *= temp2;
        } else {
            temp2 = func_088CEE70(arg0);
            temp = D_089E01B0[arg0->unk_40F8].unk_04;
            temp *= temp2;
        }
        return temp;
    } else {
        if (func_088CEE58(arg0) == 1) {
            temp2 = func_088CEE70(arg0);
            temp = D_089E01B0[arg0->unk_40F8].unk_04;
            temp *= temp2;
        } else {
            temp = 0.0f;
        }
        return temp;
    }
}
