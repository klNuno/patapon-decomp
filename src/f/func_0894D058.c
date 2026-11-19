#include "common.h"

extern f32 D_089E9484[];
extern f32 D_089E9488[];

typedef struct {
    f32 unk_00;
    f32 unk_04;
    f32 unk_08;
    f32 unk_0C;
    f32 unk_10;
    f32 unk_14;
    f32 unk_18;
    f32 unk_1C;
    f32 unk_20;
    f32 unk_24;
    f32 unk_28;
    f32 unk_2C;
} Unk00;

void func_0894D058(Unk00 *arg0, f32 arg1, f32 arg2, f32 arg3, f32 arg4) {
    f32 temp;
    f32 temp3;
    f32 temp2;
    f32 temp4;

    temp = -1.0f + arg4;
    temp3 = (1.0f + D_089E9488[0]) - arg1;
    temp2 = -1.0f + arg3;
    temp4 = (1.0f + D_089E9484[0]) - arg2;

    arg0->unk_00 = temp3;
    arg0->unk_04 = temp4;
    arg0->unk_08 = 0.0f;
    arg0->unk_0C = temp;
    arg0->unk_10 = temp4;
    arg0->unk_14 = 0.0f;
    arg0->unk_18 = temp;
    arg0->unk_1C = temp2;
    arg0->unk_20 = 0.0f;
    arg0->unk_24 = temp3;
    arg0->unk_28 = temp2;
    arg0->unk_2C = 0.0f;
}
