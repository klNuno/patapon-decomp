#include "common.h"

typedef struct {
    u8 pad_00[8];
    s32 unk_08;
    u8 pad_0C[0x14];
    f32 unk_20;
} Unk;

typedef struct {
    s32 unk_00;
    u8 pad_04[0x24];
    u8 unk_28;
    u8 pad_29[3];
} T;

void func_0889B178(Unk *arg0, f32 arg1);

void func_088A42A0(T *arg0, s32 arg1, f32 arg2) {
    u32 i;
    T *temp = arg0;
    s32 temp2 = arg1;
    i = 0;
    do {
        if (temp2 == 0 || temp2 == (temp->unk_28 != 0 ? 0 : temp->unk_00)) {
            func_0889B178((Unk *)temp, arg2);
            i++;
        } else {
            i++;
        }
        temp++;
    } while (i < 0x20U);
}
