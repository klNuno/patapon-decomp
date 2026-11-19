#include "common.h"

typedef struct {
    void *volatile unk_00;
    u8 unk_04[0xD84];
    u8 *unk_D88;
    s32 unk_D8C;
    u8 unk_D90[0xF4];
    u8 *unk_E84;
    s32 unk_E88;
} T;

extern u8 D_08A44C14[];
extern u8 D_08A44C60[];
extern u8 D_08A44CAC[];

T *func_0890D0E4(T *arg0) {
    arg0->unk_00 = D_08A44C14;
    arg0->unk_00 = D_08A44C60;
    arg0->unk_D88 = (u8 *)(((u32)arg0->unk_04 & 3) + (u32)arg0 + 4);
    arg0->unk_D8C = 0;
    arg0->unk_00 = D_08A44CAC;
    arg0->unk_E84 = (u8 *)(((u32)arg0->unk_D90 & 3) + (u32)arg0 + 0xD90);
    arg0->unk_E88 = 0;
    return arg0;
}
