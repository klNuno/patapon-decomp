#include "common.h"

typedef struct {
    u8 pad_00[0x80];
    s32 unk_80;
} Elem_08861F68;

typedef struct {
    u8 pad_00[0x748];
    Elem_08861F68 *unk_748;
    u8 pad_74C[0xAFC];
    u8 unk_1248[0x4];
} Obj_08861F68;

typedef struct {
    u8 pad_00[0x4];
    s32 unk_04;
} Res1_08861F68;

typedef struct {
    u8 pad_00[0xC];
    s32 unk_0C;
} Res2_08861F68;

s32 func_08861E28(Obj_08861F68 *, s32, s32);
Res2_08861F68 *func_0888B0E4(s32 *, s32);
Res1_08861F68 *func_0896A6C4(void *, s32);

s32 func_08861F68(Obj_08861F68 *arg0, s32 arg1, s32 arg2) {
    s32 sp1C;
    Res1_08861F68 *temp_v0;
    s32 temp;

    temp_v0 = func_0896A6C4(arg0->unk_1248, arg2);
    if (temp_v0 != NULL) {
        return temp_v0->unk_04;
    }
    temp = *(s32 *)((u8 *)arg0->unk_748 + arg1 * 0x84 + 0x80);
    if (temp != 0) {
        sp1C = temp;
        return func_0888B0E4(&sp1C, arg2)->unk_0C;
    }
    return func_08861E28(arg0, arg2, arg1);
}
