#include "common.h"

typedef struct {
    s32 unk_00;
    s32 unk_04;
    void *unk_08;
    s32 *unk_0C;
} T;

typedef struct {
    s32 unk_00;
    T unk_04;
} S;

S *func_0897AE24(S *arg0, s32 *arg1, T *arg2) {
    T *temp;

    arg0->unk_00 = *arg1;
    temp = &arg0->unk_04;
    temp->unk_00 = arg2->unk_00;
    temp->unk_04 = arg2->unk_04;
    temp->unk_08 = arg2->unk_08;
    temp->unk_0C = arg2->unk_0C;
    if (*(void *volatile *)&arg0->unk_04.unk_08 != NULL) {
        ++*temp->unk_0C;
    }
    return arg0;
}
