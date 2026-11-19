#include "common.h"

typedef struct Node {
    u8 pad_00[4];
    s32 unk_04;
} Node;

typedef union {
    s32 unk_00;
    f32 unk_00f;
} U;

void func_08966268(s32 *, s32 *, s32);
void func_08966314(Node *arg0, Node *arg1);
extern Node *func_08966440(s32 *);
extern void func_08966304(s32 *, s32 *);

void func_089662A4(Node *arg0) {
    s32 temp0;
    volatile U temp1;
    U temp2;
    s32 temp3;

    temp1.unk_00 = arg0->unk_04;
    temp2.unk_00f = temp1.unk_00f;
    func_08966268(&temp3, &temp2.unk_00, 0);
    func_08966314(arg0, func_08966440(&temp3));
    func_08966304(&temp0, &temp2.unk_00);
}
