#include "common.h"

typedef struct T {
    struct T *volatile unk_00;
    struct T *volatile unk_04;
    s32 unk_08;
    s32 unk_0C;
} T;

typedef struct {
    u8 pad_00[8];
    T *unk_08;
    s32 unk_0C;
} S;

void func_0887BBF4(S *arg0, T *arg1, const s32 *arg2) {
    T *temp = arg0->unk_08;
    T *temp2 = temp->unk_00;
    T *temp3;
    T *temp4;
    s32 *temp5;

    if (temp2 != temp) {
        temp3 = temp2->unk_00;
        if (temp3 != NULL) {
            temp3->unk_04 = temp2->unk_04;
        }
        temp3 = temp2->unk_04;
        if (temp3 != NULL) {
            temp3->unk_00 = temp2->unk_00;
        }
        temp2->unk_00 = NULL;
        temp2->unk_04 = NULL;
    } else {
        temp2 = NULL;
    }
    temp4 = arg1->unk_04;
    temp5 = &temp2->unk_08;
    arg0->unk_0C++;
    temp4->unk_00 = temp2;
    arg1->unk_04 = temp2;
    temp2->unk_00 = arg1;
    temp2->unk_04 = temp4;
    if (temp5 != NULL) {
        temp5[0] = arg2[0];
        temp5[1] = arg2[1];
    }
}
