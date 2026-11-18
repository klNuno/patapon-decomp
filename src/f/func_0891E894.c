#include "common.h"

typedef struct {
    u8 pad_00[0xC];
    u16 unk_0C[8];
} B_0891E894;

typedef struct {
    B_0891E894 *unk_00;
    s32 unk_04;
} C_0891E894;

typedef struct {
    u8 pad_00[0x44DC];
    C_0891E894 unk_44DC;
} A_0891E894;

s32 func_0891E894(A_0891E894 *arg0, B_0891E894 *arg1) {
    s32 n;
    u16 *s;
    s32 *sz;
    B_0891E894 **d;

    n = 0;
    if (arg1 != arg0->unk_44DC.unk_00 + arg0->unk_44DC.unk_04) {
        sz = &arg0->unk_44DC.unk_04;
        d = &arg0->unk_44DC.unk_00;
        do {
            for (s = arg1->unk_0C; *s != 0; s++) {
                if (*s == 0x5C) {
                    return n;
                }
                if (*s != 0x5F) {
                    n++;
                }
            }
            arg1++;
        } while (arg1 != *d + *sz);
    }
    return n;
}
