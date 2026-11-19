#include "common.h"

extern "C" {
typedef struct UnkNode {
    struct UnkNode *unk_00;
    struct UnkNode *unk_04;
    u8 pad_08[4];
    struct UnkNode *unk_0C;
    u8 pad_10[0x10];
    s32 unk_20;
} UnkNode;

static inline s32 func_08881684_00(UnkNode *arg0, UnkNode *arg1)
{
    UnkNode *temp = arg0->unk_00;
    if (temp != arg0) {
        arg1->unk_00 = temp;
        arg0->unk_00->unk_04 = arg1;
        arg0->unk_00 = arg1;
        return 1;
    } else {
        arg0->unk_00 = arg1;
        arg0->unk_04 = arg1;
        arg1->unk_00 = arg0;
    }
    return 1;
}

void func_08881684(UnkNode *arg0, UnkNode *arg1)
{
    if (arg0 != arg1) {
        s32 temp = func_08881684_00(arg0, arg1);
        arg1->unk_04 = arg0;
        if (temp != 0) {
            arg1->unk_0C = arg0;
            arg0->unk_20++;
        }
    }
}
}
