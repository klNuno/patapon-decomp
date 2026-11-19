#include "common.h"

extern "C" {

typedef struct {
    u8 pad_00[0x84];
    u8 unk_84;
    u8 pad_85[3];
    f32 unk_88;
    f32 unk_8C;
} T;

typedef struct {
    u8 pad_00[8];
} L_0893CEA8;

extern f32 D_08A08690[];
extern f32 D_08A08698[];

s32 func_088CEEE0(char *arg0);
void func_08864A30(L_0893CEA8 *);
void func_08864A68(L_0893CEA8 *, s32);
void func_088658B8(u32, u32);

void func_089B3A1C(T *arg0) {
    L_0893CEA8 temp_18;
    f32 temp_14;
    f32 temp;
    f32 temp2;
    u32 temp3;

    if (func_088CEEE0((char *)arg0) != 0) {
        func_08864A30(&temp_18);
        if (arg0->unk_84 != 0) {
            u32 temp4;
            u32 *temp5;
            temp = arg0->unk_8C;
            temp_14 = temp;
            temp4 = *(u32 *)&temp_14;
            temp5 = (u32 *)&temp_14;
            *(u32 *)&temp_14 = (temp4 << 1) >> 1;
            temp2 = *(f32 *&)temp5 <= 0.0001f ? 1.0f : arg0->unk_88 / temp;
            temp3 = ((u32)(255.0f - 255.0f * temp2) << 24) |
                    ((u32)D_08A08690[0] | ((u32)D_08A08690[1] << 8) |
                     ((u32)D_08A08698[0] << 16));
            func_088658B8(temp3, temp3);
        }
        func_08864A68(&temp_18, -1);
    }
}

}
