#include "common.h"

void func_0894F0C8(void *, void *);
void func_088D637C(void *, void *);

typedef struct {
    f32 unk_00[4];
} V;

typedef struct {
    s32 unk_00;
    s32 unk_04;
    u8 unk_08[0xFD0];
    u8 unk_FD8[0xA8];
    V unk_1080;
    s32 unk_1090;
    s32 unk_1094;
    u8 unk_1098;
} E;

typedef struct N {
    struct N *unk_00;
    struct N *unk_04;
    u8 pad_08[8];
    E unk_10;
} N;

typedef struct {
    u8 pad_00[8];
    N *unk_08;
    s32 unk_0C;
} T;

void func_0894EFD4(T *arg0, N *arg1, E *arg2)
{
    N *temp;
    N *temp4;
    N *temp2;
    N *temp3;
    s32 temp6;
    struct { E *unk_00; } temp5;

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
    temp5.unk_00 = &temp2->unk_10;
    if (temp5.unk_00 != NULL) {
        temp5.unk_00->unk_00 = arg2->unk_00;
        temp5.unk_00->unk_04 = arg2->unk_04;
        func_0894F0C8(temp5.unk_00->unk_08, arg2->unk_08);
        func_088D637C(temp5.unk_00->unk_FD8, arg2->unk_FD8);
        temp5.unk_00->unk_1080 = arg2->unk_1080;
        temp5.unk_00->unk_1090 = arg2->unk_1090;
        temp5.unk_00->unk_1094 = arg2->unk_1094;
        temp5.unk_00->unk_1098 = arg2->unk_1098;
    }
}
