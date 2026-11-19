#include "common.h"

typedef struct {
    u8 pad_00[0x30];
    f32 unk_30;
    f32 unk_34;
} T;
extern f32 D_089EDD38[];
extern f32 D_089EDD3C[];

s32 func_0898B048(void *arg0, T *arg1) {
    arg1->unk_30 = D_089EDD38[0];
    arg1->unk_34 = D_089EDD3C[0];
    return 0;
}
