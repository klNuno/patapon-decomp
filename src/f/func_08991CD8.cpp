#include "common.h"

typedef struct {
    f32 unk_00;
    u8 pad_04[4];
    f32 unk_08;
    u8 pad_0C[4];
    f32 unk_10;
    u8 pad_14[4];
    f32 unk_18;
    u8 pad_1C[4];
    f32 unk_20;
    s32 unk_24;
    f32 unk_28;
    f32 unk_2C;
    f32 unk_30;
    s32 unk_34;
    s32 unk_38;
    u8 pad_3C[4];
    f32 unk_40[8];
    u8 pad_60[0x20];
    f32 unk_80[8];
    f32 unk_A0[8];
    f32 unk_C0[8];
    s32 unk_E0[8];
} T;

extern const f32 D_08A06738[];
extern const f32 D_08A0673C[];

static inline f32 unk_00(f32 arg0) {
    return arg0 > 1.0f ? 1.0f : (arg0 < 0.0f ? 0.0f : arg0);
}

extern "C" s32 func_08991CD8(T *arg0, T *arg1) {
    f32 temp;
    f32 temp2;
    f32 temp3;
    f32 temp4;
    s32 temp5;
    s32 temp6;
    T *temp7;
    const f32 *temp8;

    if (arg0 == NULL || arg1 == NULL) {
        return 0;
    }
    arg0->unk_00 += arg1->unk_00;
    temp3 = arg1->unk_08;
    if (temp3 < 0.0f) {
        arg0->unk_08 = -temp3;
    } else {
        arg0->unk_08 *= temp3;
    }
    temp3 = arg1->unk_10;
    if (temp3 < 0.0f) {
        arg0->unk_10 = -temp3;
    } else {
        arg0->unk_10 *= temp3;
    }
    temp3 = arg1->unk_18;
    arg0->unk_18 *= temp3;
    temp3 = arg1->unk_20;
    if (temp3 < 0.0f) {
        arg0->unk_20 *= -temp3;
    } else {
        arg0->unk_20 += temp3;
    }
    temp3 = arg1->unk_28;
    if (temp3 < 0.0f) {
        arg0->unk_28 *= -temp3;
    } else {
        arg0->unk_28 += temp3;
    }
    temp5 = arg1->unk_24;
    if (temp5 >= 0) {
        arg0->unk_24 = temp5;
    }
    temp = arg0->unk_2C + arg1->unk_2C;
    if (D_08A06738[0] > temp) {
        temp8 = D_08A06738;
    } else {
        temp8 = &temp;
    }
    arg0->unk_2C = *temp8;
    temp2 = arg0->unk_30 + arg1->unk_30;
    if (D_08A0673C[0] > temp2) {
        temp8 = D_08A0673C;
    } else {
        temp8 = &temp2;
    }
    arg0->unk_30 = *temp8;
    temp5 = arg1->unk_38;
    if (temp5 >= 0) {
        arg0->unk_38 = temp5;
    }
    temp5 = arg1->unk_34;
    if (temp5 >= 0) {
        arg0->unk_34 = temp5;
    }
    temp6 = 0;
    temp7 = arg0;
    do {
        temp3 = arg1->unk_40[0];
        if (temp3 < 0.0f) {
            temp7->unk_40[0] = -temp3;
        } else {
            temp7->unk_40[0] += temp3;
        }
        temp3 = arg1->unk_80[0];
        if (temp3 < 0.0f) {
            temp7->unk_80[0] = -temp3;
        } else {
            temp4 = temp7->unk_80[0] * temp3;
            temp7->unk_80[0] = unk_00(temp4);
        }
        temp3 = arg1->unk_A0[0];
        if (temp3 < 0.0f) {
            temp7->unk_A0[0] = -temp3;
        } else {
            temp7->unk_A0[0] += temp3;
        }
        temp3 = arg1->unk_C0[0];
        if (temp3 < 0.0f) {
            temp7->unk_C0[0] = -temp3;
        } else {
            temp7->unk_C0[0] += temp3;
        }
        temp5 = arg1->unk_E0[0];
        if (temp5 >= 0) {
            temp7->unk_E0[0] = temp5;
            temp6++;
        } else {
            temp6++;
        }
        arg1 = (T *)((u8 *)arg1 + 4);
        temp7 = (T *)((u8 *)temp7 + 4);
    } while (temp6 < 8);
    return arg0 != NULL;
}
