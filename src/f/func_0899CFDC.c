#include "common.h"

typedef struct {
    f32 unk_00;
    f32 unk_04;
    f32 unk_08;
    f32 unk_0C;
    f32 unk_10;
    f32 unk_14;
    f32 unk_18;
    f32 unk_1C;
} T;

T *func_0899CFDC(T *arg0, const volatile T *arg1) {
    f32 a, b, c, d;

    a = arg1->unk_00;
    b = arg1->unk_04;
    c = arg1->unk_08;
    d = arg1->unk_0C;
    arg0->unk_00 = a;
    arg0->unk_04 = b;
    arg0->unk_08 = c;
    arg0->unk_0C = d;
    a = arg1->unk_10;
    b = arg1->unk_14;
    c = arg1->unk_18;
    d = arg1->unk_1C;
    arg0->unk_10 = a;
    arg0->unk_14 = b;
    arg0->unk_18 = c;
    arg0->unk_1C = d;
    return arg0;
}
