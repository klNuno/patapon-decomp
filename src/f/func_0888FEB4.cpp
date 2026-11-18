#include "common.h"

extern "C" {

struct S {
    u8 pad_00[0xB0];
    u8 unk_B0[0xC];
    s32 unk_BC;
};

struct O {
    u8 pad_00[0x114];
    s32 unk_114;
    u8 pad_118[0xCF0 - 0x118];
    S unk_CF0;
};

struct Node {
    Node *unk_00;
    Node *unk_04;
    O **unk_08;
};

struct It {
    Node *unk_00;
    It(Node *n) : unk_00(n) {}
    O **operator*() const { return unk_00->unk_08; }
    It &operator++() {
        if (unk_00 != NULL) {
            unk_00 = unk_00->unk_04;
        }
        return *this;
    }
};

inline bool operator!=(const It &pa, const It &pb) {
    Node *a = pa.unk_00;
    Node *b = pb.unk_00;
    s32 r2 = 0;
    s32 r1 = 0;
    if (a->unk_08 == b->unk_08 && a->unk_04 == b->unk_04) {
        r1 = 1;
    }
    if (r1 != 0) {
        if (a->unk_00 == b->unk_00) {
            r2 = 1;
        }
    }
    return !(bool)r2;
}

struct L {
    Node unk_00;
    It begin() { return It(unk_00.unk_04); }
    It end() { return It(&unk_00); }
};

struct T {
    u8 pad_00[0x60C];
    L unk_60C;
    u8 pad_618[0x690 - 0x618];
    u8 unk_690;
};

s32 func_088F5BA0(s32);
void func_08854CD8(void *, void *, s32);

void func_0888FEB4(T *arg0, s32 arg1) {
    if (arg0->unk_690 == 0) {
        return;
    }
    for (It n = arg0->unk_60C.begin(); n != arg0->unk_60C.end(); ++n) {
        if (func_088F5BA0((**n)->unk_114) == 0) {
            S *s = &(**n)->unk_CF0;
            func_08854CD8(s->unk_B0, s->unk_B0, arg1);
            s->unk_BC = 0;
        }
    }
}

}
