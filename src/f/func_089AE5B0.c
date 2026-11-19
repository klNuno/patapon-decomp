#include "common.h"

typedef struct {
    u8 pad_00[8];
    s32 unk_08;
    u8 pad_0C[4];
    u8 unk_10;
    u8 pad_11[0x856F];
    u8 unk_8580;
    u8 pad_8581[0x6BBF];
    u8 unk_F140;
} T;

void *func_089AE5B0(T *arg0)
{
    switch (arg0->unk_08) {
    case 0:
        return &arg0->unk_10;
    case 1:
        return &arg0->unk_8580;
    case 2:
        return &arg0->unk_F140;
    default:
        return NULL;
    }
}
