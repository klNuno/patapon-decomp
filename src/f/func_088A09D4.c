#include "common.h"

typedef struct {
    f32 unk_00;
    f32 unk_04;
    f32 unk_08;
    f32 unk_0C;
} V4;

typedef struct {
    u8 pad_00[0xB0];
    V4 unk_B0;
} T;

void func_08854F60(f32, V4 *, V4 *);
f32 func_088551EC(V4 *);

void func_088A09D4(T *arg0, f32 arg1) {
    V4 temp0;
    V4 temp1;
    if (func_088551EC(&arg0->unk_B0) > arg1) {
        func_08854F60(1.0f / func_088551EC(&arg0->unk_B0), &temp1, &arg0->unk_B0);
        func_08854F60(arg1, &temp0, &temp1);
        arg0->unk_B0.unk_00 = temp0.unk_00;
        arg0->unk_B0.unk_04 = temp0.unk_04;
        arg0->unk_B0.unk_08 = temp0.unk_08;
        arg0->unk_B0.unk_0C = temp0.unk_0C;
    }
}
