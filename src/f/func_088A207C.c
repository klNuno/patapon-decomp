#include "common.h"

typedef struct {
    s32 unk_00;
    s32 unk_04;
} T;

typedef struct {
    u8 pad_00[0xC];
    T unk_0C;
    T unk_14;
} U;

typedef struct {
    u8 pad_00[0x20];
    U **unk_20;
} V;

s32 func_0881AD24(s32);

void func_088A207C(f32 *arg0, V *arg1) {
    U *temp = *arg1->unk_20;
    T *temp2 = &temp->unk_0C;
    f32 temp3 = (f32)func_0881AD24(temp->unk_14.unk_04 - temp->unk_14.unk_00) / 20.0f;
    arg0[0] = (f32)func_0881AD24(temp2->unk_04 - temp2->unk_00) / 20.0f;
    arg0[1] = temp3;
}
