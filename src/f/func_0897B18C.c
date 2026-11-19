#include "common.h"

typedef struct {
    u32 unk_00;
    u32 unk_04;
    u32 unk_08;
    void *unk_0C;
    s32 *unk_10;
} T;

T *func_0897B18C(T *arg0, const T *arg1) {
    T *temp = (T *)&arg0->unk_04;

    arg0->unk_00 = arg1->unk_00;
    arg0->unk_04 = arg1->unk_04;
    arg0->unk_08 = arg1->unk_08;
    arg0->unk_0C = arg1->unk_0C;
    arg0->unk_10 = arg1->unk_10;
    if (arg0->unk_0C != NULL) {
        ++*(s32 *)temp->unk_0C;
    }
    return arg0;
}
