#include "common.h"

typedef struct {
    s32 unk_00;
    f32 unk_04;
} E;

typedef struct {
    u8 pad_00[0x5D4];
    E *unk_5D4;
    s32 unk_5D8;
} T;

void func_088F9CE0(T *arg0, s32 arg1, f32 arg2) {
    E *temp0 = arg0->unk_5D4;
    E **temp2 = &arg0->unk_5D4;
    s32 temp1 = arg0->unk_5D8 * sizeof(E);

    if ((u32)temp0 != (u32)*temp2 + temp1) {
        E *temp3 = (E *)((u8 *)*(E *volatile *)temp2 + temp1);
        do {
            ++temp0;
        } while (temp0 != temp3);
    }
    arg0->unk_5D8 = 0;
    {
        s32 temp4 = arg0->unk_5D8;
        E *temp3 = (E *)((u8 *)arg0->unk_5D4 + temp4 * sizeof(E));
        if (temp3 != NULL) {
            temp3->unk_00 = arg1;
            temp3->unk_04 = arg2;
        }
        ++arg0->unk_5D8;
    }
}
