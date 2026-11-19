#include "common.h"

typedef struct {
    u8 pad_00[0x30];
    f32 unk_30;
    f32 unk_34;
} S;

extern f32 D_089ED968[];

s32 func_08988BCC(void *arg0, S *arg1) {
    arg1->unk_30 = D_089ED968[0];
    arg1->unk_34 = D_089ED968[1];
    return 0;
}
