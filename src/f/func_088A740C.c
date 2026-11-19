#include "common.h"
typedef struct {
    f32 unk_00;
    f32 unk_04;
    f32 unk_08;
    f32 unk_0C;
} T;
typedef struct {
    u8 pad_00[0x1AB0];
    T unk_1AB0;
    T *unk_1AC0;
} S;
void func_088A740C(S *arg0, T *arg1) {
    f32 temp0, temp1, temp2, temp3;
    if (arg1 != NULL) {
        temp3 = arg1->unk_04;
        temp2 = arg1->unk_08;
        temp1 = arg1->unk_0C;
        temp0 = arg1->unk_00;
        arg0->unk_1AB0.unk_00 = temp0;
        arg0->unk_1AB0.unk_04 = temp3;
        arg0->unk_1AB0.unk_08 = temp2;
        arg0->unk_1AB0.unk_0C = temp1;
        arg0->unk_1AC0 = &arg0->unk_1AB0;
    } else {
        arg0->unk_1AC0 = NULL;
    }
}
