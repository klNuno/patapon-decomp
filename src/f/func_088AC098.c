#include "common.h"

typedef struct {
    s32 unk_00;
    s32 unk_04;
} Entry;

typedef struct {
    u8 pad_00[0x1AC8];
    u32 unk_1AC8;
    Entry unk_1ACC[1];
} H;

typedef struct {
    u8 pad_00[0x14A0];
    H *unk_14A0;
} G;

extern G *D_08AD1F14[];
s32 *func_0885356C(s32, s32, s32, s32);
void func_08852F00(s32, s32);

void func_088AC098(s32 arg0, s32 arg1) {
    u32 j;
    s32 *a;
    s32 *b;
    H *h;
    u32 i;

    a = func_0885356C(arg1, 0, 1, 4);
    b = func_0885356C(arg1, 1, 1, 4);
    h = (D_08AD1F14[0] != NULL ? D_08AD1F14[0] : NULL)->unk_14A0;
    *b = 0;
    if (*a != -1) {
        for (i = 0; i < h->unk_1AC8; i++) {
            if (*a == h->unk_1ACC[i].unk_00) {
                *b += h->unk_1ACC[i].unk_04;
            }
        }
    } else {
        for (j = 0; j < h->unk_1AC8; j++) {
            if (h->unk_1ACC[j].unk_00 != 0x14) {
                *b += h->unk_1ACC[j].unk_04;
            }
        }
    }
    func_08852F00(arg1, 0);
}
