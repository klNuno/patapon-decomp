#include "common.h"

typedef struct {
    u8 pad_00[0x40F8];
    s32 unk_40F8;
} U;

typedef struct {
    f32 unk_00;
    u8 pad_04[0xC];
} V;

extern V D_089E01B8[];

s32 func_088CEE58(U *);
s32 func_088CEE60(U *);
s32 func_088CEE68(U *);
f32 func_088CEE70(U *);

f32 func_088BF574(U *arg0) {
    f32 temp2;

    if ((u8)func_088CEE68(arg0) == 1) {
        if (func_088CEE60(arg0) == 0) {
            temp2 = D_089E01B8[arg0->unk_40F8].unk_00 * (1.0f - func_088CEE70(arg0));
        } else {
            temp2 = D_089E01B8[arg0->unk_40F8].unk_00 * func_088CEE70(arg0);
        }
        return temp2;
    } else {
        if (func_088CEE58(arg0) == 1) {
            return D_089E01B8[arg0->unk_40F8].unk_00 * func_088CEE70(arg0);
        } else {
            return 0.0f;
        }
    }
}
