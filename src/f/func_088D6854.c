#include "common.h"

typedef struct {
    f32 unk_00[4];
} T0;

typedef struct {
    T0 unk_00;
    T0 unk_10;
    f32 unk_20;
    f32 unk_24;
    f32 unk_28;
    f32 unk_2C;
} T;

T *func_088D6854(T *arg0, const T *arg1) {
    arg0->unk_00 = arg1->unk_00;
    arg0->unk_10 = arg1->unk_10;
    arg0->unk_20 = arg1->unk_20;
    arg0->unk_24 = arg1->unk_24;
    arg0->unk_28 = arg1->unk_28;
    arg0->unk_2C = arg1->unk_2C;
    return arg0;
}
