#include "common.h"

typedef struct V3_088A63E4 {
    f32 unk_00;
    f32 unk_04;
    f32 unk_08;
} V3_088A63E4;

typedef struct V4_088A63E4 {
    f32 unk_00;
    f32 unk_04;
    f32 unk_08;
    f32 unk_0C;
} V4_088A63E4;

typedef struct S_088A63E4 {
    s32 unk_00;
    s32 unk_04;
    s32 unk_08;
    s32 unk_0C;
    f32 unk_10;
    V3_088A63E4 unk_14;
    V4_088A63E4 unk_20;
    f32 unk_30;
    V3_088A63E4 unk_34;
} S_088A63E4;

S_088A63E4 *func_088A63E4(S_088A63E4 *arg0, S_088A63E4 *arg1) {
    arg0->unk_00 = arg1->unk_00;
    arg0->unk_04 = arg1->unk_04;
    arg0->unk_08 = arg1->unk_08;
    arg0->unk_0C = arg1->unk_0C;
    arg0->unk_10 = arg1->unk_10;
    arg0->unk_14 = arg1->unk_14;
    arg0->unk_20 = arg1->unk_20;
    arg0->unk_30 = arg1->unk_30;
    arg0->unk_34 = arg1->unk_34;
    return arg0;
}
