#include "common.h"

typedef struct S {
    u8 pad_00[0x4];
    struct S *unk_04;
} S;

typedef struct {
    S *unk_00;
} T;

s32 func_0893FCC4(T *arg0, T *arg1) {
    S *temp;

    *arg0 = *arg1;
    temp = arg1->unk_00;
    if (temp != NULL) {
        arg1->unk_00 = temp->unk_04;
    }
    return 0;
}
