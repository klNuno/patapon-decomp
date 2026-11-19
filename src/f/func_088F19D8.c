#include "common.h"

typedef struct {
    u8 pad_00[0x969];
    u8 unk_969;
    u8 pad_96A[0x8E];
    u8 unk_9F8;
    u8 pad_9F9[0x02];
    u8 unk_9FB;
} T;

extern T *D_08AD8134[];

void func_088F19D8(T *arg0) {
    s32 temp = D_08AD8134[0] == arg0;

    if (temp != 0) {
        temp = (arg0->unk_969 != 0) ^ 1;
    }
    if (temp != 0) {
        D_08AD8134[0] = NULL;
    }
    if (arg0->unk_9F8 != 0) {
        arg0->unk_9F8 = 0;
        arg0->unk_9FB = 1;
    }
}
