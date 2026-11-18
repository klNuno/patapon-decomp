#include "common.h"

typedef struct {
    f32 unk_00[4];
} T0;

typedef struct {
    u8 pad_00[0x10];
    T0 unk_10;
    f32 unk_20;
    f32 unk_24;
    f32 unk_28;
    f32 unk_2C;
    s32 unk_30;
    T0 *unk_34;
} T1;

typedef struct {
    u8 pad_00[0x440];
    T0 unk_440;
    u8 pad_450[0x700];
    T1 unk_B50;
} T;

void func_0893C6E4(void *);
void func_0893C604(void *, s32);
extern const f32 D_089DD508[];

T1 *func_088B47F4(T *arg0, f32 arg1, f32 arg2) {
    T0 *temp;
    func_0893C6E4(&arg0->unk_B50);
    arg0->unk_B50.unk_30 = 0;
    temp = &arg0->unk_440;
    arg0->unk_B50.unk_34 = temp;
    if (temp != NULL) {
        f32 temp1 = temp->unk_00[1];
        f32 temp2 = temp->unk_00[2];
        f32 temp3 = temp->unk_00[3];
        f32 temp0 = temp->unk_00[0];
        arg0->unk_B50.unk_10.unk_00[0] = temp0;
        arg0->unk_B50.unk_10.unk_00[1] = temp1;
        arg0->unk_B50.unk_10.unk_00[2] = temp2;
        arg0->unk_B50.unk_10.unk_00[3] = temp3;
    }
    arg0->unk_B50.unk_20 = 0.0f;
    arg0->unk_B50.unk_24 = (8.0f + 3.0f * D_089DD508[0]) + arg2;
    arg0->unk_B50.unk_28 = 0.0f;
    arg0->unk_B50.unk_2C = 0.0f;
    func_0893C604(&arg0->unk_B50, 1);
    return &arg0->unk_B50;
}
