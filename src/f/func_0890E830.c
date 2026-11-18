#include "common.h"

typedef struct Elem_0890E830 {
    s32 unk_00;
    s32 unk_04;
    u8 pad_08[0x6C];
} Elem_0890E830;

typedef struct Vec_0890E830 {
    Elem_0890E830 *unk_00;
    s32 unk_04;
} Vec_0890E830;

typedef struct Obj_0890E830 {
    u8 pad_00[0x74A4];
    Vec_0890E830 unk_74A4;
} Obj_0890E830;

s32 func_0890E830(Obj_0890E830 *arg0, s32 arg1, s32 arg2) {
    Elem_0890E830 *p;
    s32 i;
    s32 m;
    Elem_0890E830 **dp;
    s32 *np;

    i = 0;
    p = arg0->unk_74A4.unk_00;
    if ((u32)p != (u32)(p + arg0->unk_74A4.unk_04)) {
        np = &arg0->unk_74A4.unk_04;
        dp = &arg0->unk_74A4.unk_00;
        do {
            m = p->unk_00 == arg2 && p->unk_04 == arg1;
            if (m) {
                return i;
            }
            p++;
            i++;
        } while (p != *dp + *np);
    }
    return i;
}
