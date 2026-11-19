#include "common.h"

typedef struct {
    void *unk_00;
} T0;

typedef struct {
    T0 unk_00;
    s8 unk_04;
} T1;

void func_088F8200(T1 *arg0, T0 arg1, s8 arg2) {
    arg0->unk_00 = arg1;
    arg0->unk_04 = arg2;
}
