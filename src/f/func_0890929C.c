#include "common.h"

typedef struct {
    u8 pad_00[0x10228];
    s32 *unk_10228;
    s32 unk_1022C;
} T;

s32 func_0890929C(T *arg0) {
    u32 offset = arg0->unk_1022C * 4;
    s32 temp = *(s32 *)((u8 *)arg0->unk_10228 + offset - 4);
    --*(volatile s32 *)&arg0->unk_1022C;
    return temp;
}
