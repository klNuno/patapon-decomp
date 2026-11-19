#include "common.h"

typedef struct {
    u8 pad_00[0xB21B4];
    s32 unk_B21B4;
} Unk10;

typedef struct {
    u8 pad_00[0x10];
    Unk10 *unk_10;
} Unk;

void func_08852F00(void *, s32);
s32 *func_0885356C(void *, s32, s32, s32);

void func_08904F04(Unk *arg0, void *arg1) {
    s32 *temp = func_0885356C(arg1, 0, 1, 4);
    *temp = arg0->unk_10->unk_B21B4;
    func_08852F00(arg1, 0);
}
