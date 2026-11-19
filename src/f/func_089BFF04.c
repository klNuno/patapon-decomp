#include "common.h"

typedef struct {
    u8 pad_00[0xCD8];
    s32 unk_CD8;
    u8 pad_CDC[0x108];
    s32 unk_DE4;
} T;

extern s32 D_08A08FEC[];

s32 func_089BFF04(T *arg0) {
    s32 temp = arg0->unk_DE4 - arg0->unk_CD8;
    s32 *p;
    if (D_08A08FEC[0] < temp) {
        p = &temp;
    } else {
        p = D_08A08FEC;
    }
    return *p;
}
