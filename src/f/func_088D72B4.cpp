#include "common.h"

extern "C" {
void func_0889BF08(void *, f32);

struct Node {
    Node *unk_00;
    u8 pad_04[4];
    u8 unk_08[1];
};

struct Iter {
    Node *unk_00;
    s32 eq(Node *arg0) const { return unk_00 == arg0; }
    bool ne(Node *arg0) const { return !(bool)eq(arg0); }
};

struct Obj {
    u8 pad_00[0x2C4];
    Node unk_2C4;
};

void func_088D72B4(Obj *arg0)
{
    Iter it;
    Node *end;
    it.unk_00 = arg0->unk_2C4.unk_00;
    end = &arg0->unk_2C4;
    if (it.ne(end)) {
        do {
            func_0889BF08(it.unk_00->unk_08, 0.0f);
            it.unk_00 = it.unk_00->unk_00;
        } while (it.ne(end));
    }
}
}
