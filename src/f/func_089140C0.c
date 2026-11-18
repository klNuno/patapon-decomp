#include "common.h"

typedef struct {
    u8 pad_00[0x8];
    s32 unk_08;
    s32 unk_0C;
    u8 pad_10[0xC];
    u8 unk_1C[0x600];
} S_089140C0;

void func_0881F5C0(void *, s32, s32);
void func_0885A274(s32, S_089140C0 *);
s32 func_0885A27C(s32);
void func_08914160(S_089140C0 *, s32);
void func_08914C0C(s32, void *);
s32 sceUtilitySavedataInitStart(void *);

s32 func_089140C0(S_089140C0 *arg0, s32 arg1) {
    if (func_0885A27C(arg0->unk_08) != 0) {
        return 0;
    }
    if (arg0->unk_0C != 0) {
        return 0;
    }
    func_0881F5C0(arg0->unk_1C, 0, 0x600);
    func_08914C0C(0x600, arg0->unk_1C);
    func_08914160(arg0, arg1);
    if (sceUtilitySavedataInitStart(arg0->unk_1C) != 0) {
        return 0;
    }
    func_0885A274(arg0->unk_08, arg0);
    arg0->unk_0C = 1;
    return 1;
}
