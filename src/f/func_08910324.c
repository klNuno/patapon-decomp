#include "common.h"

extern u8 D_08A44C14[];
extern u8 D_08A44C60[];
extern u8 D_08A44CAC[];

typedef struct {
    u8 *volatile unk_00;
    u8 unk_04[0xD84];
    u8 *unk_D88;
    s32 unk_D8C;
} S;

S *func_08910324(S *arg0) {
    arg0->unk_00 = D_08A44C14;
    arg0->unk_00 = D_08A44C60;
    arg0->unk_D88 = (u8 *)(((u32)arg0->unk_04 & 3) + (u32)arg0 + 4);
    arg0->unk_D8C = 0;
    arg0->unk_00 = D_08A44CAC;
    return arg0;
}
