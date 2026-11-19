#include "common.h"

typedef struct {
    s32 unk_00;
    u32 unk_04;
    u32 unk_08;
} T;

f32 func_0890CF44(s32, u8 *, f32);

f32 func_0897412C(T *arg0) {
    f32 temp0 = (f32)arg0->unk_04;
    f32 temp1 = (f32)arg0->unk_08;
    f32 temp2 = temp0 / temp1;

    return func_0890CF44(arg0->unk_00, (u8 *)&temp2, temp2);
}
