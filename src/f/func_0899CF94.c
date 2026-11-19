#include "common.h"

typedef struct {
    f32 unk_00;
    f32 unk_04;
    f32 unk_08;
    f32 unk_0C;
} U;

typedef struct {
    U unk_00;
    U unk_10;
} T;

T *func_0899CF94(T *arg0, const T *arg1) {
    arg0->unk_00 = arg1->unk_00;
    arg0->unk_10 = arg1->unk_10;
    return arg0;
}
