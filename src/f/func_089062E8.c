#include "common.h"

typedef struct {
    u8 pad_00[0x24];
    s32 *unk_24;
    s32 unk_28;
} Obj_0898A32C;

typedef struct {
    u8 pad_00[0x10];
    u8 *unk_10;
} Obj_089062E8;

void func_08852F00(s32, s32);
s32 *func_0885356C(s32, s32, s32, s32);
Obj_0898A32C *func_0898A32C(void *);

void func_089062E8(Obj_089062E8 *arg0, s32 arg1) {
    s32 *temp_s0;
    Obj_0898A32C *temp_v0;

    temp_s0 = func_0885356C(arg1, 0, 1, 4);
    temp_v0 = func_0898A32C(arg0->unk_10 + 0x1212D0);
    if (temp_v0->unk_28 != 0) {
        *temp_s0 = *temp_v0->unk_24;
    } else {
        *temp_s0 = -1;
    }
    func_08852F00(arg1, 0);
}
