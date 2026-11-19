#include "common.h"

typedef struct {
    f32 unk_00;
    f32 unk_04;
} V2;

typedef struct {
    f32 unk_00;
    f32 unk_04;
    f32 unk_08;
    f32 unk_0C;
} V4;

typedef struct {
    s32 unk_00;
    s32 unk_04;
} R_089033A4;

typedef struct {
    u8 *unk_00;
} T;

void func_08931CEC(R_089033A4 *, u8 *, s32, s32 *, void *, void *, void *);

void func_08985884(T *arg0, u32 arg1, V2 *arg2, f32 arg3) {
    struct { u8 pad_00[4]; R_089033A4 unk_04; u8 pad_0C[4]; } temp;
    V4 temp1;
    V4 temp2;
    V4 temp3;
    f32 temp4;
    f32 temp5;

    if (arg1 <= 0x89U) {
        temp5 = arg2->unk_04;
        temp4 = arg2->unk_00;
        temp1.unk_00 = temp4;
        temp1.unk_04 = temp5;
        temp1.unk_08 = 0.0f;
        temp1.unk_0C = 1.0f;
        temp2.unk_0C = 1.0f;
        temp2.unk_00 = 0.0f;
        temp2.unk_04 = 0.0f;
        temp2.unk_08 = 0.0f;
        temp3.unk_00 = arg3;
        temp3.unk_04 = arg3;
        temp3.unk_08 = arg3;
        temp3.unk_0C = 0.0f;
        func_08931CEC(&temp.unk_04, arg0->unk_00 + 0x1040, arg1, NULL, &temp1, &temp2, &temp3);
    }
}
