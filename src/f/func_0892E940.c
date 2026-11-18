#include "common.h"

typedef struct {
    u8 pad_00[0x8D0];
    u8 unk_8D0;
} C_0892E940;

typedef struct B_0892E940 {
    s32 unk_00;
    struct B_0892E940 *unk_04;
    C_0892E940 *unk_08;
} B_0892E940;

inline s32 func_0892E940_eq2(B_0892E940 *a, B_0892E940 *b) {
    s32 r = 0;
    if (*(u32 *)&a->unk_08 == (u32)b->unk_08 && (u32)a->unk_04 == *(u32 *)&b->unk_04) {
        r = 1;
    }
    return r;
}

inline s32 func_0892E940_eq(B_0892E940 *a, B_0892E940 *b) {
    s32 r = 0;
    if (func_0892E940_eq2(a, b) && a->unk_00 == b->unk_00) {
        r = 1;
    }
    return r;
}

inline s32 func_0892E940_ne(B_0892E940 *a, B_0892E940 *b) {
    return !func_0892E940_eq(a, b);
}

s32 func_0892E940(B_0892E940 *arg0) {
    struct { B_0892E940 *unk_00; } it;
    s32 n;

    it.unk_00 = arg0->unk_04;
    n = 0;
    while (func_0892E940_ne(it.unk_00, arg0)) {
        if (it.unk_00->unk_08->unk_8D0 == 0) {
            return n;
        }
        if (it.unk_00 != NULL) {
            it.unk_00 = it.unk_00->unk_04;
        }
        n++;
    }
    return -1;
}
