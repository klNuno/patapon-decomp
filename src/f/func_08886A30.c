#include "common.h"
typedef union {
    struct {
        u32 unk_00;
        u32 unk_04;
        const u8 *unk_08;
    } unk_00;
    u8 unk_00_bytes[12];
} T0;

void func_08886BF4(void *, const u8 *, u32, u32);

void func_08886A30(void *arg0, const T0 *arg1, u32 arg2) {
    const u8 *temp0;
    u32 temp1;

    if ((arg1->unk_00.unk_00 & 1) == 0) {
        temp0 = &arg1->unk_00_bytes[1];
        temp1 = ((u32)arg1->unk_00_bytes[0] << 24) >> 25;
    } else {
        temp0 = arg1->unk_00.unk_08;
        temp1 = arg1->unk_00.unk_04;
    }
    func_08886BF4(arg0, temp0, arg2, temp1);
}
