#include "common.h"

extern s32 func_0889C93C(s32, s32);

typedef struct {
    u8 pad_00[0x77E0];
    u8 unk_77E0[0x10];
    s32 unk_77F0;
} Sub;

typedef struct {
    u8 pad_00[0x3F4];
    Sub *unk_3F4;
} Obj;

typedef struct {
    u8 pad_00[0x48];
    s32 unk_48;
    s32 unk_4C;
} Temp;

s32 func_0889DEF0(Obj *arg0)
{
    Sub *sub = arg0->unk_3F4;
    s32 a = 0;
    s32 b = 0;
    Temp *temp = (Temp *)func_0889C93C((s32)sub->unk_77E0, sub->unk_77F0);
    if (temp != NULL) {
        a = temp->unk_48;
        b = temp->unk_4C;
    }
    if (a != 1 && b == 1) {
        return 1;
    }
    return 0;
}
