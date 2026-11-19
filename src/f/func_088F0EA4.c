#include "common.h"
typedef struct {
    f32 unk_00;
    f32 unk_04;
} A;

typedef struct {
    u8 pad_00[0x818];
    A *unk_818;
    u8 pad_81C[0xC];
    A unk_828;
    u8 pad_830[0x120];
    A unk_950;
    A unk_958;
} T;

void func_088F0EA4(T *arg0, const A *arg1, const A *arg2) {
    A *temp;
    f32 temp0, temp1;
    arg0->unk_958.unk_00 = arg1->unk_00;
    arg0->unk_958.unk_04 = arg1->unk_04;
    arg0->unk_950.unk_00 = arg2->unk_00;
    arg0->unk_950.unk_04 = arg2->unk_04;
    temp = arg0->unk_818;
    temp0 = arg2->unk_00;
    temp1 = arg2->unk_04;
    arg0->unk_828.unk_00 = temp0 - temp->unk_00;
    arg0->unk_828.unk_04 = temp1 - temp->unk_04;
}
