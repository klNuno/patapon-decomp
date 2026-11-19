#include "common.h"

typedef struct {
    s32 unk_00;
    s32 unk_04;
    s32 unk_08;
    s32 unk_0C;
    u8 pad_10[0xC];
    void *unk_1C;
} T;
extern u8 D_08A47B28[];

T *func_08962700(T *arg0) {
    arg0->unk_1C = D_08A47B28;
    arg0->unk_00 = 0;
    arg0->unk_04 = 0;
    arg0->unk_08 = 0;
    arg0->unk_0C = 0;
    return arg0;
}
