#include "common.h"

typedef union {
    struct {
        u32 unk_00;
        u32 unk_04;
        s8 *unk_08;
    } unk_00;
    struct {
        u8 unk_00_0 : 1;
        u8 unk_00_1 : 7;
        s8 unk_01[11];
    } unk_00s;
} T;

void func_08886A60(T *arg0) {
    if (!(arg0->unk_00.unk_00 & 1)) {
        u32 temp = arg0->unk_00s.unk_00_1 - 1;
        arg0->unk_00s.unk_01[temp] = 0;
        arg0->unk_00s.unk_00_1 = temp;
    } else {
        u32 temp = arg0->unk_00.unk_04 - 1;
        arg0->unk_00.unk_08[temp] = 0;
        arg0->unk_00.unk_04 = temp;
    }
}
