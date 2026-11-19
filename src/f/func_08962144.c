#include "common.h"

typedef struct T T;
struct T {
    u8 pad_00[4];
    T *unk_04;
};

typedef struct {
    T *unk_00;
} S;

s32 func_08962144(S *arg0, S *arg1) {
    T *temp;

    *arg0 = *arg1;
    temp = *(T *volatile *)&arg1->unk_00;
    if (temp != NULL) {
        arg1->unk_00 = temp->unk_04;
    }
    return 0;
}
