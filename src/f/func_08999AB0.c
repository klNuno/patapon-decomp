#include "common.h"

typedef struct {
    u8 pad_00[8];
    s32 unk_08;
    u8 pad_0C[4];
} E08999AB0;

typedef struct {
    E08999AB0 *unk_00;
    s32 unk_04;
    u32 unk_08;
} V08999AB0;

typedef struct {
    u8 pad_00[0xF28];
    u8 unk_F28;
    u8 unk_F29;
    u8 pad_F2A[0x66];
    V08999AB0 unk_F90;
} T08999AB0;

s32 func_0899D554(s32);

s32 func_08999AB0(T08999AB0 *arg0) {
    V08999AB0 *v;
    u32 i;
    s32 j;

    i = 0;
    if (arg0->unk_F90.unk_08 != 0) {
        j = 0;
        v = &arg0->unk_F90;
        do {
            if (!(u8)func_0899D554(((E08999AB0 *)((u8 *)v->unk_00 + j))->unk_08)) {
                return 0;
            }
            i++;
            j += 16;
        } while (i < arg0->unk_F90.unk_08);
    }
    if (arg0->unk_F29 == 0) {
        return 1;
    }
    return arg0->unk_F28 != 0;
}
