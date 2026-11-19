#include "common.h"

typedef struct {
    u8 pad_00[0x22178];
    u8 unk_22178;
} Obj_089382B4_10;

typedef struct {
    u8 pad_00[0x10];
    u32 unk_10;
} Obj_089382B4;

void func_08852F00(void *, s32);
s32 *func_0885356C(void *, s32, s32, s32);

void func_089382B4(Obj_089382B4 *arg0, void *arg1) {
    s32 *temp_s0;
    s32 *temp_v0;
    s32 temp;
    u32 temp2;
    u32 temp3;

    temp_s0 = func_0885356C(arg1, 0, 1, 4);
    temp_v0 = func_0885356C(arg1, 1, 1, 4);
    temp = *temp_v0;
    temp2 = *(volatile s32 *)temp_s0;
    temp3 = *(volatile u32 *)&arg0->unk_10;
    ((Obj_089382B4_10 *)(temp2 + temp3))->unk_22178 = temp == 0;
    func_08852F00(arg1, 0);
}
