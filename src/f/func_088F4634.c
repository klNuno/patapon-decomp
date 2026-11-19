#include "common.h"

typedef struct {
    f32 unk_00;
    f32 unk_04;
} V2;

typedef struct {
    V2 unk_00;
    V2 unk_08;
} V4;

typedef struct {
    u8 pad_00[0x50560];
    V2 unk_50560;
} T;

typedef struct {
    u8 pad_00[0x60];
    T *unk_60;
    u8 pad_64[0xC];
    V4 unk_70;
} S;

void func_088F333C(void *, V2 *);

void func_088F4634(S *arg0, V4 *arg1) {
    V2 temp;
    f32 temp1;
    f32 temp2;
    arg0->unk_70.unk_00.unk_00 = arg1->unk_00.unk_00;
    arg0->unk_70.unk_00.unk_04 = arg1->unk_00.unk_04;
    arg0->unk_70.unk_08.unk_00 = arg1->unk_08.unk_00;
    arg0->unk_70.unk_08.unk_04 = arg1->unk_08.unk_04;
    temp2 = arg1->unk_00.unk_04;
    temp1 = arg1->unk_00.unk_00;
    temp.unk_00 = temp1;
    temp.unk_04 = temp2;
    func_088F333C(&arg0->unk_60->unk_50560, &temp);
}
