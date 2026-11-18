#include "common.h"

extern "C" {

struct S3_08923D54 {
    u8 pad_00[0xE];
    u16 unk_0E;
};

struct S2_08923D54 {
    u8 pad_00[0x10];
    S3_08923D54 *unk_10;
};

struct S4_08923D54 {
    S4_08923D54 *unk_00;
    u8 pad_04[4];
    S2_08923D54 unk_08;
};

struct S5_08923D54 {
    S4_08923D54 *unk_00;
    s32 operator==(const S5_08923D54 &o) const { return unk_00 == o.unk_00; }
    bool operator!=(const S5_08923D54 &o) const { bool b = *this == o; return !b; }
};

s32 func_088C0020(S3_08923D54 **);

void func_08923D54(u8 *arg0) {
    S5_08923D54 p;
    S5_08923D54 end;
    S2_08923D54 *temp;

    p.unk_00 = *(S4_08923D54 **)(arg0 + 0x94);
    end.unk_00 = (S4_08923D54 *)(arg0 + 0x94);
    while (p != end) {
        temp = &p.unk_00->unk_08;
        if (func_088C0020(&temp->unk_10) == 0) {
            temp->unk_10->unk_0E |= 0x4000;
        }
        p.unk_00 = p.unk_00->unk_00;
    }
}

}
