#include "common.h"

typedef struct {
    u8 pad_00[0x8];
    s32 unk_08;
    u8 pad_0C[0x4];
} E_08998538;

typedef struct {
    u8 pad_00[0x14];
    s32 unk_14;
    u8 pad_18[0x4A5B4 - 0x18];
    E_08998538 *unk_4A5B4;
    u8 pad_4A5B8[0x5C7D0 - 0x4A5B8];
    s32 unk_5C7D0;
} S_08998538;

s32 func_08999AB0(s32);
extern s32 func_089C6964(void *, s32);

void func_08998538(S_08998538 *arg0) {
    s32 count;
    u32 i;
    s32 j;
    E_08998538 **p;

    count = 0;
    i = 0;
    j = 0;
    p = &arg0->unk_4A5B4;
    do {
        if (!(u8)func_08999AB0(((E_08998538 *)((u8 *)*p + j))->unk_08)) {
            return;
        }
        count++;
        i++;
        j += 0x10;
    } while (i < 3);
    if (count > 0) {
        arg0->unk_14 = 4;
        func_089C6964(&arg0->unk_5C7D0, 1);
    }
}
