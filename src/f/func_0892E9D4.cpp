#include "common.h"

extern "C" {

struct Item_0892E9D4 {
    u8 pad_00[0x8D0];
    u8 unk_8D0;
    u8 pad_8D1[0x8EC - 0x8D1];
    u8 unk_8EC;
};

struct Node_0892E9D4 {
    s32 unk_00;
    Node_0892E9D4 *unk_04;
    s32 unk_08;

    bool eqA(const Node_0892E9D4 &o) const {
        return unk_08 == o.unk_08 && unk_04 == o.unk_04;
    }
    bool eqB(const Node_0892E9D4 &o) const {
        return eqA(o) && unk_00 == o.unk_00;
    }
    bool ne(const Node_0892E9D4 &o) const {
        return !eqB(o);
    }
};

struct It_0892E9D4 {
    Node_0892E9D4 *unk_00;
};

void func_0892E9D4(Node_0892E9D4 *arg0, s32 arg1) {
    It_0892E9D4 it;
    Item_0892E9D4 *item;
    u8 c;

    c = arg1;
    for (it.unk_00 = arg0->unk_04; it.unk_00->ne(*arg0);) {
        item = (Item_0892E9D4 *)it.unk_00->unk_08;
        if (item->unk_8D0 != 0) {
            item->unk_8EC = c;
        }
        if (it.unk_00 != NULL) {
            it.unk_00 = it.unk_00->unk_04;
        }
    }
}

}
