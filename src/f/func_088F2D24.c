#include "common.h"

typedef struct {
    u8 unk_00[4];
} U;

typedef struct {
    f32 unk_00, unk_04, unk_08, unk_0C;
    s32 unk_10, unk_14, unk_18;
    U unk_1C;
} T;

T *func_088F2D24(T *arg0, const T *arg1) {
    arg0->unk_00 = arg1->unk_00;
    arg0->unk_04 = arg1->unk_04;
    arg0->unk_08 = arg1->unk_08;
    arg0->unk_0C = arg1->unk_0C;
    arg0->unk_10 = arg1->unk_10;
    arg0->unk_14 = arg1->unk_14;
    arg0->unk_18 = arg1->unk_18;
    arg0->unk_1C = arg1->unk_1C;
    return arg0;
}
