#include "common.h"

typedef struct {
    u8 pad_00[4];
    s32 unk_04;
    u8 pad_08[4];
    s32 unk_0C;
    f32 unk_10;
    u8 pad_14[0x10C];
    f32 unk_120;
    f32 unk_124;
    f32 unk_128;
    f32 unk_12C;
    f32 unk_130;
    f32 unk_134;
    f32 unk_138;
    f32 unk_13C;
    f32 unk_140;
    f32 unk_144;
    f32 unk_148;
    f32 unk_14C;
    f32 unk_150;
    f32 unk_154;
    f32 unk_158;
    f32 unk_15C;
    f32 unk_160;
    f32 unk_164;
    s32 unk_168;
} T;

typedef struct {
    u8 pad_00[0x28];
    f32 unk_28;
    f32 unk_2C;
    f32 unk_30;
    f32 unk_34;
    f32 unk_38;
    s32 unk_3C;
} U;

s32 func_0885AB7C(s32, s32, s32);

s32 func_08866C54(T *arg0, s32 arg1, s32 arg2) {
    s32 temp;
    U *ref;

    if (arg1 == -1) {
        arg0->unk_0C = arg1;
        arg0->unk_138 = 0.0f;
        arg0->unk_13C = 0.0f;
        arg0->unk_140 = 1.0f;
        arg0->unk_144 = 1.0f;
        arg0->unk_148 = 0.0f;
        arg0->unk_14C = 1.0f;
        arg0->unk_150 = 0.0f;
        arg0->unk_154 = 0.0f;
        arg0->unk_158 = 1.0f;
        arg0->unk_15C = 1.0f;
        arg0->unk_160 = 0.0f;
        arg0->unk_164 = 1.0f;
        arg0->unk_120 = 0.0f;
        arg0->unk_124 = 0.0f;
        arg0->unk_128 = 1.0f;
        arg0->unk_12C = 1.0f;
        arg0->unk_130 = 0.0f;
        arg0->unk_134 = 1.0f;
        return 1;
    }

    if (arg2 == 0 && arg0->unk_0C == arg1) {
        return 1;
    }

    temp = arg0->unk_0C;
    arg0->unk_10 = 0.0f;
    arg0->unk_168 = 0;
    arg0->unk_0C = arg1;
    if (arg1 == temp) {
        arg0->unk_138 = 0.0f;
        arg0->unk_13C = 0.0f;
        arg0->unk_140 = 1.0f;
        arg0->unk_144 = 1.0f;
        arg0->unk_148 = 0.0f;
        arg0->unk_14C = 1.0f;
    } else {
        arg0->unk_138 = arg0->unk_150;
        arg0->unk_13C = arg0->unk_154;
        arg0->unk_140 = arg0->unk_158;
        arg0->unk_144 = arg0->unk_15C;
        arg0->unk_148 = arg0->unk_160;
        arg0->unk_14C = arg0->unk_164;
    }

    if (arg1 >= 0) {
        ref = (U *)func_0885AB7C(arg0->unk_04, 1, arg1);
        if (ref != 0) {
            f32 temp_134 = (f32)ref->unk_3C;
            volatile f32 *temp_130 = &ref->unk_38;
            f32 temp = 3.1415927f * *temp_130 / 180.0f;
            f32 temp_12C = ref->unk_34;
            f32 temp_128 = ref->unk_30;
            f32 temp_124 = ref->unk_2C;
            f32 temp_120 = ref->unk_28;
            arg0->unk_120 = temp_120;
            arg0->unk_124 = temp_124;
            arg0->unk_128 = temp_128;
            arg0->unk_12C = temp_12C;
            arg0->unk_130 = temp;
            arg0->unk_134 = temp_134;
        } else {
            arg0->unk_120 = 0.0f;
            arg0->unk_124 = 0.0f;
            arg0->unk_128 = 1.0f;
            arg0->unk_12C = 1.0f;
            arg0->unk_130 = 0.0f;
            arg0->unk_134 = 1.0f;
        }
    } else {
        arg0->unk_120 = 0.0f;
        arg0->unk_124 = 0.0f;
        arg0->unk_128 = 1.0f;
        arg0->unk_12C = 1.0f;
        arg0->unk_130 = 0.0f;
        arg0->unk_134 = 1.0f;
    }
    return 1;
}
