#include "common.h"

typedef struct {
    s32 unk_00;
    s32 unk_04;
} A_089C6364;

typedef struct {
    u8 pad_00[0x44];
    u8 **unk_44;
    s32 unk_48;
} B_089C6364;

void func_089C6364(B_089C6364 *arg0, u8 *arg1) {
    u32 i;
    A_089C6364 *t1;
    A_089C6364 *t0;
    u8 **p;
    u8 *v;

    for (i = 0, t1 = (A_089C6364 *)arg1; i < 32 && t1->unk_00 != 0 && t1->unk_04 != 0; t1++, arg0++, i++) {
        for (t0 = (A_089C6364 *)(arg1 + t1->unk_04); *(u32 *)&t0->unk_04 != 0 && t0->unk_00 != 0; t0++) {
            v = arg1 + t0->unk_04;
            p = &arg0->unk_44[arg0->unk_48];
            if (p != NULL) {
                *p = v;
            }
            arg0->unk_48++;
        }
    }
}
