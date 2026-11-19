#include "common.h"

typedef struct Node {
    u32 unk_00;
    struct Node *unk_04;
    u8 pad_08[0x18];
    s32 unk_20;
} Node;

typedef union {
    Node *unk_00;
    f32 unk_00_f32;
} Unk;

s32 func_08963614(Node *arg0);

void func_089639C4(Unk *arg0, Node *arg1, Node *arg2)
{
    volatile struct {
        Unk unk_00;
        u8 pad_04[4];
    } temp;

    temp.unk_00.unk_00 = arg2;
    if (arg2 != NULL) {
        temp.unk_00.unk_00 = arg2->unk_04;
    }
    if (arg1 != arg2 && func_08963614(arg2) != 0) {
        arg1->unk_20--;
    }
    arg0->unk_00_f32 = temp.unk_00.unk_00_f32;
}
