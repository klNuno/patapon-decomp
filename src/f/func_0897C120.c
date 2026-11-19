#include "common.h"

typedef struct {
    s32 unk_00, unk_04, unk_08;
    s32 *unk_0C;
    s32 unk_10, unk_14;
} T;

T *func_0897C120(T *arg0, const volatile T *arg1, s32 arg2, s32 arg3) {
    s32 a, b, c;
    a = arg1->unk_00;
    b = arg1->unk_04;
    c = arg1->unk_08;
    arg0->unk_00 = a;
    arg0->unk_04 = b;
    arg0->unk_08 = c;
    arg0->unk_0C = arg1->unk_0C;
    if (*(volatile s32 *)&arg0->unk_08 != 0) {
        ++*arg0->unk_0C;
        arg0->unk_10 = arg2;
    } else {
        arg0->unk_10 = arg2;
    }
    arg0->unk_14 = arg3;
    return arg0;
}
