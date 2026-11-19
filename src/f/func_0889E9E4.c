#include "common.h"

typedef struct {
    f32 unk_00;
    f32 unk_04;
    f32 unk_08;
} T;

typedef struct S S;
struct S {
    T unk_00;
    f32 unk_0C;
    S *unk_10;
};

void func_0889E9E4(S *arg0, const S *arg1) {
    arg0->unk_00 = arg1->unk_00;
    arg0->unk_0C = arg1->unk_0C;
    arg0->unk_10 = arg0;
}
