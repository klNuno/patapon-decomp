#include "common.h"

typedef struct {
    u8 pad_00[0x8];
    s32 unk_08;
    s32 unk_0C;
} T0;

typedef struct {
    u8 pad_00[0x11F8];
    T0 *unk_11F8;
    u32 unk_11FC;
} T;

s32 func_089B1314(s32);

s32 func_089B23BC(T *arg0, s32 arg1) {
    T0 *temp2;
    T0 *temp;
    s32 temp3;
    temp = arg0->unk_11F8;
    temp2 = temp + arg0->unk_11FC;
    temp3 = 0;
    if ((u32)temp != (u32)temp2) {
        do {
            if (arg1 == func_089B1314(temp->unk_08)) {
                return temp3;
            } else {
                ++temp;
            }
            ++temp3;
        } while (temp != temp2);
    }
    return -1;
}
