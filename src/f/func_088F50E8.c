#include "common.h"

typedef struct {
    s32 *unk_00;
    s32 unk_04;
} Unk;

typedef struct {
    u8 pad_00[0x4AD4];
    Unk unk_4AD4;
} Obj;

void func_088F50E8(Obj *arg0) {
    s32 *temp;
    s32 *temp2;
    s32 temp3;
    Unk *temp4;

    temp3 = arg0->unk_4AD4.unk_04;
    temp = arg0->unk_4AD4.unk_00;
    temp4 = &arg0->unk_4AD4;
    if ((u32)temp != (u32)(temp + temp3)) {
        temp2 = *(s32 *volatile *)&temp4->unk_00 + temp3;
        do {
            temp++;
        } while (temp != temp2);
    }
    arg0->unk_4AD4.unk_04 = 0;
}
