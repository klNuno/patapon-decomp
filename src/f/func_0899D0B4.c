#include "common.h"

typedef struct {
    f32 unk_00[4];
} T;

typedef struct {
    T unk_00;
    T unk_10;
} S;

S *func_0899D0B4(S *arg0, const S *arg1) {
    arg0->unk_00 = arg1->unk_00;
    arg0->unk_10 = arg1->unk_10;
    return arg0;
}
