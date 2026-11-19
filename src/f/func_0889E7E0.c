#include "common.h"

f32 fabsf(f32);
void func_0888FC1C(void *);

typedef struct {
    u8 pad_00[0x3A0];
    void *unk_3A0;
    u8 pad_3A4[0x9DC];
    f32 unk_D80;
} T;

typedef struct {
    u8 pad_00[0x10];
    f32 *unk_10;
} U;

s32 func_0889E7E0(void *arg0, T *arg1, U *arg2, void *arg3, const f32 *arg4, f32 arg5)
{
    if (arg2 != 0) {
        f32 *temp = arg2->unk_10;
        if (temp == 0) {
            return 1;
        }
        if (fabsf((*temp + *arg4) - arg1->unk_D80) < arg5) {
            if (arg1->unk_3A0 != 0) {
                func_0888FC1C(arg1->unk_3A0);
            }
            return 1;
        }
        return 0;
    }
    return 0;
}
