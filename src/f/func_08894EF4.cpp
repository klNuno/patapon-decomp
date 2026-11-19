#include "common.h"

extern "C" {

s32 func_08814C0C(s32);
extern void func_089693C0(char *);

struct L {
    u8 unk_00[8];
};

void func_08864A30(L *);
void func_08864A68(L *, s32);

class Unk00 {
public:
    u8 pad_00[8];
    virtual void unk_08();
    virtual void unk_0C();
    virtual void unk_10();
    virtual void unk_14();
};

struct Unk01 {
    u8 pad_00[0x381];
    u8 unk_381;
    u8 pad_382[0x748E];
    Unk00 unk_7810;
    u8 pad_781C[0x1AD0];
    u8 unk_92EC;
};

void func_08894EF4(Unk01 *arg0) {
    L temp;
    if (arg0->unk_381 != 0) {
        func_089693C0((char *)arg0);
        if (arg0->unk_92EC != 0) {
            func_08864A30(&temp);
            func_08814C0C(1);
            arg0->unk_7810.unk_14();
            func_08864A68(&temp, -1);
        }
    }
}

}
