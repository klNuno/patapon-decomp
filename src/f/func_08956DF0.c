#include "common.h"

typedef struct {
    u8 pad_00[0x28];
    s32 *unk_28;
    s32 unk_2C;
} Unk;

void func_08956DF0(Unk *arg0, s32 arg1) {
    s32 *temp;
    s32 *end;
    s32 *base;

    s32 n = *(volatile s32 *)&arg0->unk_2C;
    base = *(s32 *volatile *)&arg0->unk_28;
    end = base + n;
    temp = base;
    while (temp != end && *temp != arg1) {
        ++temp;
    }
    if (temp == end) {
        temp = base + *(volatile s32 *)&arg0->unk_2C;
        if (temp != NULL) {
            *temp = arg1;
        }
        ++arg0->unk_2C;
    }
}
