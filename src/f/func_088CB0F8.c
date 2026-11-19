#include "common.h"

typedef struct {
    s32 *unk_00;
    s32 unk_04;
    u8 pad_08[8];
} Elem;

typedef struct {
    u8 pad_00[0x10];
    Elem *unk_10;
    s32 unk_14;
} Obj;

s32 func_088CB0F8(Obj *arg0, s32 arg1, s32 arg2)
{
    Elem *temp;
    s32 n;
    if (arg0 == NULL) {
        return 0;
    }
    if (arg1 < 0 || arg1 >= arg0->unk_14) {
        return 0;
    }
    temp = (Elem *)((arg1 << 4) + (u32)arg0->unk_10);
    n = temp->unk_04;
    if (arg2 < 0 || arg2 >= n) {
        return 0;
    }
    return temp->unk_00[arg2];
}
