#include "common.h"

typedef struct Node Node;
struct Node {
    s32 unk_00;
    s32 unk_04;
    u8 pad_08[4];
    Node *unk_0C;
    u8 pad_10[0xC];
    u8 *unk_1C;
};

void func_0880416C(void *);
void func_0886FF60(Node *, Node *);
extern u8 D_08A45078[];

Node *func_08870DBC(Node *arg0, s16 arg1)
{
    if (arg0 != NULL) {
        Node *temp;
        arg0->unk_1C = D_08A45078;
        temp = arg0->unk_0C;
        if (temp != NULL) {
            func_0886FF60(temp, arg0);
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
