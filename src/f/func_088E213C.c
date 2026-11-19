#include "common.h"

typedef struct {
    s32 unk_00;
    s32 unk_04;
    void *unk_08;
    s32 *unk_0C;
    s32 unk_10;
} T;

void func_088E213C(T *arg0, const volatile T *arg1, s32 arg2) {
    s32 temp0 = arg1->unk_00;
    s32 temp1 = arg1->unk_04;
    void *temp2 = arg1->unk_08;

    arg0->unk_00 = temp0;
    arg0->unk_04 = temp1;
    arg0->unk_08 = temp2;
    arg0->unk_0C = arg1->unk_0C;
    if (*(void *volatile *)&arg0->unk_08 != NULL) {
        ++*arg0->unk_0C;
    }
    arg0->unk_10 = arg2;
}
