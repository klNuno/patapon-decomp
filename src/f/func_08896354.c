#include "common.h"

typedef struct Node Node;
struct Node {
    u8 pad_00[4];
    Node *unk_04;
    u8 pad_08[0x18];
    s32 unk_20;
};

typedef union {
    Node *unk_00;
    f32 unk_00_f32;
} Temp;

s32 func_088961B4(Node *arg0);

void func_08896354(Temp *arg0, Node *arg1, Node *arg2)
{
    volatile Temp temp[2];

    temp[0].unk_00 = arg2;
    if (arg2 != NULL) {
        temp[0].unk_00 = arg2->unk_04;
    }
    if (arg1 != arg2 && func_088961B4(arg2) != 0) {
        arg1->unk_20--;
    }
    arg0->unk_00_f32 = temp[0].unk_00_f32;
}
