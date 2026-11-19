#include "common.h"

typedef struct {
    s32 unk_00;
    u8 pad_04[4];
    u8 unk_08;
    u8 unk_09;
    u8 pad_0A[0x16];
    s64 unk_20[0x14];
} S;

S *func_088A1C70(S *arg0, const S *arg1) {
    const s64 *temp = arg1->unk_20;
    s64 *temp2 = arg0->unk_20;
    s32 temp3 = 0x14;

    arg0->unk_00 = arg1->unk_00;
    arg0->unk_08 = arg1->unk_08;
    arg0->unk_09 = arg1->unk_09;
    do {
        *temp2++ = *temp++;
    } while (--temp3 > 0);
    return arg0;
}
