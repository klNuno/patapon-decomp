#include "common.h"

typedef struct Node {
    u8 pad_00[4];
    void *unk_04;
    u8 pad_08[0x18];
    s32 unk_20;
} Node;

typedef struct {
    void *unk_00;
} Unk00;

extern s32 func_0895F93C(s32);

void func_0895FBB4(Unk00 *arg0, Node *arg1, Node *arg2) {
    volatile struct {
        Unk00 unk_00;
        u8 pad_04[4];
    } temp;
    temp.unk_00.unk_00 = arg2;
    if (arg2 != NULL) {
        temp.unk_00.unk_00 = arg2->unk_04;
    }
    if (arg1 != arg2 && func_0895F93C((s32)arg2) != 0) {
        --arg1->unk_20;
    }
    *arg0 = *(const Unk00 *)&temp.unk_00;
}
