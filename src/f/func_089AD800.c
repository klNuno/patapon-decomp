#include "common.h"

typedef struct {
    void *volatile unk_00;
    s32 unk_04;
} S;

extern u8 D_08A487B4[];
extern u8 D_08A487C8[];

S *func_089AD800(S *arg0, s32 arg1) {
    arg0->unk_00 = D_08A487B4;
    arg0->unk_00 = D_08A487C8;
    arg0->unk_04 = arg1;
    return arg0;
}
