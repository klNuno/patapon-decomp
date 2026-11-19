#include "common.h"

typedef struct {
    u8 pad_00[0xC];
    s32 unk_0C;
} E_0888B1AC;

typedef struct {
    u8 pad_00[0x4];
    s32 unk_04;
    u8 pad_08[0x1C];
    u32 unk_24;
    E_0888B1AC unk_28[1];
} H_0888B1AC;

typedef struct {
    s32 unk_00;
    s32 unk_04;
    H_0888B1AC *unk_08;
    E_0888B1AC *unk_0C;
    s8 *unk_10;
} S_0888B1AC;

void func_0888B1AC(S_0888B1AC *arg0, H_0888B1AC *arg1, u32 arg2);

void func_0888B2D8(S_0888B1AC *arg0, s32 arg1) {
    H_0888B1AC *temp = arg0->unk_08;
    u32 count = temp->unk_24;
    u32 i = arg0->unk_04 + 1U;

    if (i < count) {
        temp = (H_0888B1AC *)((u8 *)temp + (i << 4));
        do {
            if (temp->unk_28[0].unk_0C != 0) {
                if (--arg1 == 0) {
                    break;
                }
                i++;
            } else {
                i++;
            }
            temp = (H_0888B1AC *)((u8 *)temp + 0x10);
        } while (i < count);
    }
    func_0888B1AC(arg0, *(H_0888B1AC *volatile *)&arg0->unk_08, i);
}
