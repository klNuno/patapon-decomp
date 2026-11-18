#include "common.h"

typedef struct {
    f32 unk_00[3];
} V;

typedef struct {
    f32 unk_00[4];
} W;

typedef struct {
    s32 unk_00;
    s32 unk_04;
    s32 unk_08;
    s32 unk_0C;
    f32 unk_10;
    V unk_14;
    W unk_20;
    f32 unk_30;
    V unk_34;
} E;

typedef struct N {
    struct N *unk_00;
    struct N *unk_04;
    E unk_08;
} N;

typedef struct {
    u8 pad_00[8];
    N *unk_08;
    s32 unk_0C;
} T;

void func_088A669C(T *arg0, N *arg1, E *arg2)
{
    N *temp;
    N *temp4;
    N *temp2;
    N *temp3;
    s32 temp6;
    E *temp5;

    temp = arg0->unk_08;
    temp2 = temp->unk_00;
    if (temp2 != temp) {
        if ((temp3 = temp2->unk_00) != NULL) {
            temp3->unk_04 = temp2->unk_04;
        }
        if ((temp3 = temp2->unk_04) != NULL) {
            temp3->unk_00 = temp2->unk_00;
        }
        temp2->unk_00 = NULL;
        temp2->unk_04 = NULL;
    } else {
        temp2 = NULL;
    }
    temp6 = arg0->unk_0C;
    temp4 = arg1->unk_04;
    arg0->unk_0C = temp6 + 1;
    temp4->unk_00 = temp2;
    arg1->unk_04 = temp2;
    temp2->unk_00 = arg1;
    temp2->unk_04 = temp4;
    temp5 = &temp2->unk_08;
    if (temp5 != NULL) {
        temp5->unk_00 = arg2->unk_00;
        temp5->unk_04 = arg2->unk_04;
        temp5->unk_08 = arg2->unk_08;
        temp5->unk_0C = arg2->unk_0C;
        temp5->unk_10 = arg2->unk_10;
        temp5->unk_14 = arg2->unk_14;
        temp5->unk_20 = arg2->unk_20;
        temp5->unk_30 = arg2->unk_30;
        temp5->unk_34 = arg2->unk_34;
    }
}
