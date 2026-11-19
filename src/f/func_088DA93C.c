#include "common.h"

typedef struct {
    u8 pad_00[0x14];
    u32 *unk_14;
    u32 unk_18;
} T;

void func_088DA93C(void *arg0)
{
    T *temp = (T *)arg0;
    u32 *cursor;
    u32 **base;
    u32 count;

    count = temp->unk_18;
    cursor = temp->unk_14;
    base = &temp->unk_14;
    if ((u32)cursor != (u32)(cursor + count)) {
        u32 *end = *(u32 *volatile *)base + count;
        do {
            cursor++;
        } while (cursor != end);
    }
    temp->unk_18 = 0;
}
