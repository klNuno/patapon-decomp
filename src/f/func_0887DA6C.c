#include "common.h"

typedef struct {
    u8 pad_00[0xA0];
    u8 unk_A0[0x24];
    u8 *unk_C4;
    s32 unk_C8;
    u8 pad_CC[0x30];
    void *unk_FC;
} S_0887DB48;

void func_0887DB48(S_0887DB48 *);
extern u8 D_08A452BC[];

S_0887DB48 *func_0887DA6C(S_0887DB48 *arg0) {
    arg0->unk_FC = D_08A452BC;
    arg0->unk_C4 = (u8 *)(((u32)arg0->unk_A0 & 3) + (u32)arg0 + 0xA0);
    arg0->unk_C8 = 0;
    func_0887DB48(arg0);
    return arg0;
}
