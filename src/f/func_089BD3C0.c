#include "common.h"

typedef struct {
    u8 pad_00[0xA40];
    u8 *unk_A40;
    u8 unk_A44;
} S;

extern void func_089BDA48(void *arg0, s32 arg1, const void *arg2, s32 arg3);

void func_089BD3C0(S *arg0, s32 arg1, s32 arg2) {
    func_089BDA48(&arg0->unk_A44, arg1, arg0->unk_A40 + 8, arg2);
}
