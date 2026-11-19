#include "common.h"

typedef struct Node {
    s32 unk_00;
    s32 unk_04;
    u8 pad_08[4];
    struct Node *unk_0C;
    u8 pad_10[0xC];
    void *unk_1C;
} Node;

extern u8 D_08A47BB8[];
void func_0880416C(void *);
void func_08963D38(Node *arg0, Node *arg1);

Node *func_089649B8(Node *arg0, s16 arg1) {
    if (arg0 != NULL) {
        Node *temp;
        arg0->unk_1C = D_08A47BB8;
        temp = arg0->unk_0C;
        if (temp != NULL) {
            func_08963D38(temp, arg0);
        }
        arg0->unk_0C = NULL;
        arg0->unk_04 = 0;
        arg0->unk_00 = 0;
        if (arg1 > 0) {
            func_0880416C(arg0);
        }
    }
    return arg0;
}
