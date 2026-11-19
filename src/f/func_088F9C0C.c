#include "common.h"

typedef struct {
    s32 *unk_00;
    u32 unk_04;
} Sub;

typedef struct {
    u8 pad_00[0x548];
    Sub unk_548;
} Obj;

void func_088F9C0C(Obj *arg0, s32 arg1) {
    s32 *temp = arg0->unk_548.unk_00;
    u32 off = arg0->unk_548.unk_04;
    Sub *sub = &arg0->unk_548;
    s32 *end;
    if ((u32)temp != (u32)(temp + off)) {
        end = *(s32 *volatile *)&sub->unk_00 + off;
        do {
            ++temp;
        } while (temp != end);
    }
    arg0->unk_548.unk_04 = 0;
    temp = arg0->unk_548.unk_00 + arg0->unk_548.unk_04;
    if (temp != NULL) {
        *temp = arg1;
    }
    ++arg0->unk_548.unk_04;
}
