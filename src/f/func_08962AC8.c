#include "common.h"

typedef struct {
    u8 pad_00[0x70];
    u8 unk_70[0x14];
    s32 unk_84;
    u8 pad_88[0x4];
    s32 unk_8C[1];
    u8 pad_90[0x8C9C];
    u8 unk_8D2C[0x28];
    u8 unk_8D54[0x4];
} Struct_08962AC8;

void func_08961C58(void *, s32);
void func_08961DD4(void *, s32);
s32 func_0896217C(void *);
s32 func_08962B58(void *, s32 *);
s32 func_08962C20(void *);

void func_08962AC8(Struct_08962AC8 *arg0) {
    s32 temp;
    s32 temp2;

    temp = func_08962C20(arg0->unk_70);
    if (temp != -1) {
        temp2 = func_08962B58(arg0->unk_8D2C, (s32 *)((u8 *)arg0 + 0x8C) + temp);
        if (temp2 != 0) {
            func_08961DD4(arg0->unk_8D2C, temp2);
            func_08961C58(arg0->unk_8D54, temp2);
            arg0->unk_84 = func_0896217C(arg0->unk_8D2C);
        }
    }
}
