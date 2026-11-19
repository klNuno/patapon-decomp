#include "common.h"

typedef struct S S;
struct S {
    S *unk_00;
    s32 unk_04;
    s32 unk_08;
};

extern S *D_08A490B8[];

s32 func_08804690(s32 arg0, s32 arg1, S *arg2) {
    arg2->unk_00 = D_08A490B8[0];
    arg2->unk_04 = arg1;
    arg2->unk_08 = arg0;
    D_08A490B8[0] = arg2;
    return arg0;
}
