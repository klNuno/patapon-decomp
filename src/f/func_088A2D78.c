#include "common.h"

typedef struct {
    u16 unk_00;
    u8 pad_02[6];
    s32 unk_08;
    s32 unk_0C;
    s32 unk_10;
    s32 unk_14;
} T0;

typedef struct {
    s32 unk_00;
    u8 pad_04[0x14];
    s32 unk_18;
    u8 pad_1C[4];
    f32 unk_20;
    f32 unk_24;
    f32 unk_28;
    u8 pad_2C[4];
    f32 unk_30;
    f32 unk_34;
    f32 unk_38;
    u8 pad_3C[4];
    T0 *unk_40;
    u8 pad_44[0xC];
} T1;

typedef struct {
    u8 pad_00[0x70];
    u32 unk_70;
    u8 pad_74[0x10];
    T1 *unk_84;
} T;

void func_088A2D78(T *arg0, T0 *arg1) {
    T1 *temp;
    T1 *temp1;
    u32 i;
    T1 *temp2;
    u32 temp3 = arg0->unk_70;
    i = 0;
    if (temp3 != 0) {
        temp1 = arg0->unk_84;
        temp2 = temp1;
        do {
            if (temp2->unk_00 == 0) {
                temp1[i].unk_00 = 1;
                arg0->unk_84[i].unk_40 = NULL;
                temp = &arg0->unk_84[i];
                goto end;
            }
            i++;
            temp2++;
        } while (i < temp3);
    }
    temp = NULL;
end:
    temp->unk_18 = arg1->unk_00;
    temp->unk_20 = 0.05f * (f32)arg1->unk_08;
    temp->unk_24 = 0.05f * (f32)arg1->unk_10;
    temp->unk_28 = 0.0f;
    temp->unk_30 = 0.05f * (f32)arg1->unk_0C;
    temp->unk_34 = 0.05f * (f32)arg1->unk_14;
    temp->unk_38 = 0.0f;
    temp->unk_40 = arg1;
}
