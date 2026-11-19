#include "common.h"

typedef struct {
    void *unk_00;
    void *unk_04;
    u8 pad_08[0x18];
    void (*unk_20)(void *);
} T;

void func_088BFAA4(T *arg0) {
    arg0->unk_20(arg0->unk_00);
    arg0->unk_00 = NULL;
    arg0->unk_20(arg0->unk_04);
    arg0->unk_04 = NULL;
}
