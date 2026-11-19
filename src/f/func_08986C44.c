#include "common.h"

typedef struct {
    u8 pad_00[0xA40];
    u8 *unk_A40;
    u8 unk_A44[1];
} S;

void func_089868DC(void *arg0, void *arg1, void *arg2, s32 arg3);

void func_08986C44(S *arg0, void *arg1, s32 arg2) {
    func_089868DC(arg0->unk_A44, arg1, arg0->unk_A40 + 8, arg2);
}
