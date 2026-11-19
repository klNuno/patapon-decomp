#include "common.h"

typedef struct {
    u8 pad_00[0x92E4];
    u8 unk_92E4[4];
} Unk1;

typedef struct {
    u8 pad_00[0x3A0];
    Unk1 *unk_3A0;
} Unk2;

typedef struct {
    u8 pad_00[0x3A0];
    Unk2 *unk_3A0;
} Unk3;

s32 func_088981A8(Unk3 *arg0) {
    s32 *temp = (s32 *)(u32)arg0->unk_3A0->unk_3A0->unk_92E4;
    s32 temp1 = *temp;

    if (temp1 == 0) {
        return 0;
    }
    if (temp1 == 1) {
        return 1;
    }
    return -1;
}
