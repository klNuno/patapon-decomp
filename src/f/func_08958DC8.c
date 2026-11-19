#include "common.h"

typedef struct {
    u8 pad_00[0x2E];
    volatile u8 unk_2E;
} T;

typedef struct {
    u8 pad_00[4];
    T *unk_04;
} S;

void func_08958DC8(S *arg0) {
    if (arg0->unk_04->unk_2E != 0) {
        return;
    }
}
