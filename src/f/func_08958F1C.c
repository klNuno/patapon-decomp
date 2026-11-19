#include "common.h"

typedef struct {
    f32 unk_00;
    f32 unk_04;
    f32 unk_08;
} Unk088BD534_03;

extern Unk088BD534_03 D_08A490BC[];

typedef struct {
    s32 unk_00;
    s32 unk_04;
    s32 unk_08;
    Unk088BD534_03 unk_0C;
    s32 unk_18;
    s32 unk_1C;
    u8 unk_20;
} T;

void func_08958F1C(T *arg0) {
    Unk088BD534_03 *ptr;
    f32 a, b, c;
    s32 val;
    arg0->unk_04 = -1;
    arg0->unk_08 = -1;
    arg0->unk_00 = 1;
    ptr = (Unk088BD534_03 *)(u32)D_08A490BC;
    a = *(volatile f32 *)&D_08A490BC[0];
    b = ptr->unk_04;
    c = ptr->unk_08;
    val = 3;
    arg0->unk_0C.unk_00 = a;
    arg0->unk_0C.unk_04 = b;
    arg0->unk_0C.unk_08 = c;
    arg0->unk_18 = 0;
    arg0->unk_1C = val;
    arg0->unk_20 = 0;
}
