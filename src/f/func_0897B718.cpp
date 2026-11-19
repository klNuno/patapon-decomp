#include "common.h"

extern "C" {

typedef struct N {
    struct N *unk_00;
    struct N *unk_04;
    u8 unk_08[1];
} N;

typedef struct {
    u8 pad_00[8];
    N *unk_08;
    s32 unk_0C;
} T;

static inline N *func_0897B718_1(N *arg0) {
    N *temp;
    N *temp2;

    temp = arg0->unk_00;
    if (temp != arg0) {
        temp2 = temp->unk_00;
        if (temp2 != NULL) {
            temp2->unk_04 = temp->unk_04;
        }
        temp2 = temp->unk_04;
        if (temp2 != NULL) {
            temp2->unk_00 = temp->unk_00;
        }
        temp->unk_00 = NULL;
        temp->unk_04 = NULL;
    } else {
        temp = NULL;
    }
    return temp;
}

u8 *func_0897B718(T *arg0, N *arg1) {
    N *temp;
    N *temp2;
    u8 *temp3;

    temp = func_0897B718_1(arg0->unk_08);
    temp2 = arg1->unk_04;
    temp3 = temp->unk_08;
    arg0->unk_0C++;
    temp2->unk_00 = temp;
    arg1->unk_04 = temp;
    temp->unk_00 = arg1;
    temp->unk_04 = temp2;
    return temp3;
}
}
