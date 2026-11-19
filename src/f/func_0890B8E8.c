#include "common.h"

typedef struct Unk00 Unk00;

typedef struct {
    u8 pad_00[0x16D160];
    s32 unk_16D160;
} S;

extern void func_0890E4B4(Unk00 *arg0);

void func_0890B8E8(S *arg0) {
    arg0->unk_16D160 = 0;
    func_0890E4B4((Unk00 *)((u8 *)arg0 + 0xDA0));
}
