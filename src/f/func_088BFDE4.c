#include "common.h"

typedef struct {
    s32 *unk_00;
    u8 pad_04[8];
    s32 unk_0C;
    u8 pad_10[4];
    u32 unk_14;
} T;

void func_088BFDE4(T *arg0)
{
    u32 temp;
    u32 temp2;

    arg0->unk_0C = 0;
    if (arg0->unk_00 != NULL) {
        temp = 0;
        if (arg0->unk_14 != 0) {
            temp2 = 0;
            do {
                *(s32 *)((u8 *)arg0->unk_00 + temp2) = 0;
                temp2 += 4;
            } while (++temp < arg0->unk_14);
        }
    }
}
