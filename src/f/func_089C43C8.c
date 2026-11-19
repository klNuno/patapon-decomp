#include "common.h"

typedef struct S {
    s32 unk_00;
    struct S *unk_04;
} S;

typedef struct {
    S *unk_00;
} T;

s32 func_089C43C8(T *arg0, T *arg1)
{
    S *temp;
    *arg0 = *arg1;
    temp = arg1->unk_00;
    if (temp != NULL) {
        arg1->unk_00 = *(S *volatile *)&temp->unk_04;
    }
    return 0;
}
