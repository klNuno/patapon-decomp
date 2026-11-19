#include "common.h"

typedef struct {
    f32 unk_00;
    s32 unk_04;
} E;

typedef struct {
    f32 unk_00[2];
} F;

typedef struct {
    u8 pad_00[0x7E4];
    E *unk_7E4;
    s32 unk_7E8;
} T;

void func_0899DECC(T *arg0, s32 arg1, f32 arg2) {
    E temp0;
    u8 *temp1 = (u8 *)&temp0;
    s32 temp2 = sizeof(temp0);
    E *temp3;

    if (temp1 != NULL) {
        do {
            *temp1++ = 0;
        } while (--temp2);
    }

    *(volatile s32 *)&temp0.unk_04 = arg1;
    temp3 = arg0->unk_7E4 + arg0->unk_7E8;
    *(volatile f32 *)&temp0.unk_00 = arg2;
    if (temp3 != NULL) {
        *(F *)temp3 = *(F *)&temp0;
    }
    ++arg0->unk_7E8;
}
