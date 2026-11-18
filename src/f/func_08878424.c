#include "common.h"

typedef struct T_08878424 {
    f32 unk_00[10];
} T_08878424;

extern T_08878424 D_089F962C[];

void func_0897A064(s32, s32, s32);

void func_08878424(s32 arg0, s32 arg1, s32 arg2) {
    T_08878424 t;

    t = D_089F962C[0];
    func_0897A064(arg0, arg1 + 0xBB8, *(s32 *)&t.unk_00[arg2]);
}
