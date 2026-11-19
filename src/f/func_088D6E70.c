#include "common.h"

typedef struct {
    f32 unk_00;
    f32 unk_04;
    f32 unk_08;
} U;

typedef struct {
    U unk_00;
    f32 unk_0C;
} V;

typedef struct {
    u8 pad_00[0x2D4];
    V unk_2D4;
} T;

void func_088D6E70(T *arg0, const V *arg1) {
    volatile V temp;

    *(U *)&temp.unk_00 = arg1->unk_00;
    temp.unk_0C = arg1->unk_0C;
    arg0->unk_2D4.unk_00 = *(const U *)&temp.unk_00;
    arg0->unk_2D4.unk_0C = temp.unk_0C;
}
