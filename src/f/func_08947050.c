#include "common.h"

typedef struct {
    u8 pad_00[0x410];
    s32 *unk_410;
    s32 unk_414;
} T;

T *func_08947050(T *arg0, const T *arg1) {
    const s32 *temp2;
    s32 *temp;
    s32 temp3;
    s32 **temp4;
    s32 *temp5;

    arg0->unk_410 = (s32 *)((u32)arg0 + ((u32)arg0 & 0xF));
    temp3 = arg1->unk_414;
    arg0->unk_414 = temp3;
    temp4 = &arg0->unk_410;
    temp = *(s32 *volatile *)temp4;
    temp2 = arg1->unk_410;
    if ((u32)temp != (u32)(temp + temp3)) {
        temp5 = &arg0->unk_414;
        do {
            if (temp != NULL) {
                *temp = *temp2++;
            }
            temp++;
        } while (temp != *temp4 + *temp5);
    }
    return arg0;
}
