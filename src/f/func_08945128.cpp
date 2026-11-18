#include "common.h"

extern "C" {

struct S4_08945128 {
    S4_08945128 *unk_00;
    u8 pad_04[4];
    u8 unk_08[1];
};

struct S5_08945128 {
    S4_08945128 *unk_00;
    s32 operator==(const S5_08945128 &o) const { return unk_00 == o.unk_00; }
    bool operator!=(const S5_08945128 &o) const { bool b = *this == o; return !b; }
};

typedef struct R_08945128 {
    s32 unk_00;
    u8 pad_04[0xC];
} R_08945128;

void func_0894065C(R_08945128 *, void *);
void func_08941528(void *, s32, void *);

void func_08945128(u8 *arg0, u8 *arg1) {
    R_08945128 sp20;
    S5_08945128 p;
    S5_08945128 temp2;

    p.unk_00 = *(S4_08945128 **)(arg1 + 0x314);
    temp2.unk_00 = (S4_08945128 *)(arg1 + 0x314);
    while (p != temp2) {
        func_0894065C(&sp20, arg0 + 0x380);
        func_08941528(arg0 + 0x380, sp20.unk_00, p.unk_00->unk_08);
        p.unk_00 = p.unk_00->unk_00;
    }
}

}
