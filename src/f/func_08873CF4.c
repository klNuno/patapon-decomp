#include "common.h"

typedef struct {
    u8 pad_00[0x66A8D];
    volatile u8 unk_66A8D;
} S;

void func_08873CF4(S *arg0) {
    if (arg0->unk_66A8D != 0) {
        return;
    }
}
