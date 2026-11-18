#include "common.h"

typedef struct {
    f32 unk_00;
    f32 unk_04;
    f32 unk_08;
} S3;

typedef struct {
    f32 unk_00;
    f32 unk_04;
    f32 unk_08;
    f32 unk_0C;
} S4;

typedef struct {
    s32 unk_00;
    s32 unk_04;
    s32 unk_08;
    s32 unk_0C;
    f32 unk_10;
    S3 unk_14;
    S4 unk_20;
    f32 unk_30;
    S3 unk_34;
} T;

T *func_088A635C(T *arg0, T *arg1) {
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
