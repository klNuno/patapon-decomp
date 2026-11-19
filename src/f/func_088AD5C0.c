#include "common.h"

typedef struct {
    s16 unk_00;
    s16 unk_02;
} E;

typedef struct {
    s32 unk_00;
    E unk_04[0x40];
} T;

T *func_088AD5C0(T *arg0, const s32 *arg1, const volatile E *arg2)
{
    E *temp;
    s32 count;
    s16 temp0;
    s16 temp1;
    s32 value = *arg1;

    temp = arg0->unk_04;
    count = 0x40;
    arg0->unk_00 = value;
    do {
        temp0 = arg2->unk_00;
        temp1 = arg2->unk_02;
        count--;
        temp->unk_00 = temp0;
        temp->unk_02 = temp1;
        arg2++;
        temp++;
    } while (count > 0);
    return arg0;
}
