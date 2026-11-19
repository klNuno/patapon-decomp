#include "common.h"

typedef struct {
    u8 pad_00[0x214];
    u8 *unk_214;
    u32 unk_218;
} T;

void func_088DAD98(T *arg0) {
    u8 *temp0;
    u32 temp2;
    u8 **temp1;

    temp0 = arg0->unk_214;
    temp1 = &arg0->unk_214;
    temp2 = arg0->unk_218 * 4;
    if ((u32)temp0 != (u32)(temp0 + temp2)) {
        u8 *temp3 = *(u8 *volatile *)temp1 + temp2;
        do {
            temp0 += 4;
        } while (temp0 != temp3);
    }
    arg0->unk_218 = 0;
}
