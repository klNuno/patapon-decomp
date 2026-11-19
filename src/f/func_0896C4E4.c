#include "common.h"

typedef struct {
    u8 pad_00[0x1C];
    s32 *unk_1C;
    s32 unk_20;
} T;

T *func_0896C4E4(T *arg0, const T *arg1) {
    s32 temp;
    s32 **unk_00;
    const s32 *src;
    s32 *ptr;
    arg0->unk_1C = (s32 *)((u32)arg0 + ((u32)arg0 & 3));
    temp = arg1->unk_20;
    arg0->unk_20 = temp;
    ptr = arg0->unk_1C;
    src = arg1->unk_1C;
    unk_00 = &arg0->unk_1C;
    if ((u32)ptr != (u32)(ptr + temp)) {
        s32 *unk_04 = &arg0->unk_20;
        do {
            if (ptr != NULL) {
                *ptr = *src++;
            }
            ++ptr;
        } while (ptr != *unk_00 + *unk_04);
    }
    return arg0;
}
