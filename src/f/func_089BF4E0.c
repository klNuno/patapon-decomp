#include "common.h"

typedef struct {
    u8 pad_00[0xCD0];
    s32 unk_CD0;
    u8 pad_CD4[0x108];
    s32 unk_DDC;
} T;

extern s32 D_08A08FDC[];

s32 func_089BF4E0(T *arg0) {
    s32 temp = arg0->unk_DDC - arg0->unk_CD0;
    s32 *ptr;

    if (D_08A08FDC[0] < temp) {
        ptr = &temp;
    } else {
        ptr = D_08A08FDC;
    }
    return *ptr;
}
