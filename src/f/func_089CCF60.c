#include "common.h"

typedef struct N_089CC5F0 N_089CC5F0;
struct N_089CC5F0 {
    u8 pad_00[4];
    N_089CC5F0 *unk_04;
    u8 pad_08[0x18];
    s32 unk_20;
};

typedef union {
    N_089CC5F0 *unk_00;
    f32 unk_00_f32;
} Temp;

s32 func_089CC71C(N_089CC5F0 *);

void func_089CCF60(Temp *arg0, N_089CC5F0 *arg1, N_089CC5F0 *arg2)
{
    volatile Temp temp[2];

    temp[0].unk_00 = arg2;
    if (arg2 != NULL) {
        temp[0].unk_00 = arg2->unk_04;
    }
    if (arg1 != arg2 && func_089CC71C(arg2) != 0) {
        arg1->unk_20--;
    }
    arg0->unk_00_f32 = temp[0].unk_00_f32;
}
