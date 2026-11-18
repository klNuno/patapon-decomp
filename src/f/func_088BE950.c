#include "common.h"

typedef struct {
    u8 pad_00[0x40];
} Elem40_088BE950;

typedef struct {
    Elem40_088BE950 *unk_00;
    s32 unk_04;
} Vec_088BE950;

typedef struct {
    u8 pad_00[0x4004];
    Vec_088BE950 unk_4004;
} Obj_088BE950;

s32 func_088804C0(Elem40_088BE950 *, s32);

void func_088BE950(Obj_088BE950 *arg0) {
    Vec_088BE950 *temp;
    Elem40_088BE950 *temp2;
    s32 *temp3;

    temp = &arg0->unk_4004;
    temp2 = arg0->unk_4004.unk_00;
    if ((u32)temp2 != (u32)(temp2 + arg0->unk_4004.unk_04)) {
        temp3 = &arg0->unk_4004.unk_04;
        do {
            if (temp2 != NULL) {
                func_088804C0(temp2, -1);
            }
            temp2++;
        } while (temp2 != temp->unk_00 + *temp3);
    }
    arg0->unk_4004.unk_04 = 0;
}
