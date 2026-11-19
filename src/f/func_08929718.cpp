#include "common.h"

extern "C" {
typedef struct Node Node;
struct Node {
    Node *unk_00;
    u8 pad_04[0xC];
    s32 *unk_10;
};

struct Iter {
    Node *unk_00;
    s32 eq(const Node *arg0) const { return unk_00 == arg0; }
    bool ne(const Node *arg0) const { return !(bool)eq(arg0); }
};

typedef struct {
    u8 pad_00[0x1838];
    Node unk_1838;
} Obj;

s32 *func_08929718(Obj *arg0, s32 arg1)
{
    Iter it;
    Node *end;
    it.unk_00 = arg0->unk_1838.unk_00;
    end = &arg0->unk_1838;
    if (it.ne(end)) {
        do {
            s32 *temp = it.unk_00->unk_10;
            if (temp != NULL) {
                if (arg1 == *temp) {
                    return temp;
                }
            }
            it.unk_00 = it.unk_00->unk_00;
        } while (it.ne(end));
    }
    return NULL;
}
}
