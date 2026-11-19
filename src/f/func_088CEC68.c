#include "common.h"

typedef struct {
    f32 unk_00;
    f32 unk_04;
    f32 unk_08;
} Vec;

typedef struct Obj {
    struct Obj *unk_00;
    Vec unk_04;
    u8 unk_10;
    u8 pad_11[3];
    s32 unk_14;
    s32 unk_18;
    s32 unk_1C;
    s32 unk_20;
    s32 unk_24;
    s32 unk_28;
    u8 unk_2C;
    u8 pad_2D[3];
    void *unk_30;
} Obj;

extern u8 D_08A460FC[];
extern f32 D_089FB914[];
extern f32 D_089FB918[];
extern f32 D_089FB91C[];

Obj *func_088CEC68(Obj *arg0) {
    volatile Vec temp;
    arg0->unk_30 = D_08A460FC;
    temp.unk_00 = D_089FB914[0];
    temp.unk_04 = D_089FB918[0];
    temp.unk_08 = D_089FB91C[0];
    arg0->unk_00 = arg0;
    arg0->unk_04 = *(Vec *)&temp;
    arg0->unk_10 = 0;
    arg0->unk_14 = 0;
    arg0->unk_18 = 0;
    arg0->unk_1C = 0;
    arg0->unk_20 = 0;
    arg0->unk_24 = 0;
    arg0->unk_28 = 0;
    arg0->unk_2C = 1;
    return arg0;
}
