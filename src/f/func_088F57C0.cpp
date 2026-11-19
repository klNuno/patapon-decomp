#include "common.h"

extern "C" {
class T {
public:
    u8 pad_00[0x58];
    virtual void unk_08();
    virtual void unk_0C();
    virtual void unk_10();
    virtual void unk_14();
    virtual void unk_18();
    virtual u8 unk_1C();
};

typedef struct E_088DEC6C E_088DEC6C;

typedef struct S_088F4E14 {
    u8 pad_00[0x5D20];
    T unk_5D20;
    u8 pad_5D7C[0x734];
    u8 unk_64B0[0x1058];
    u8 unk_7508[1];
} S_088F4E14;

extern u8 D_089E2FF8[];
void func_08926200(E_088DEC6C *, u8 *, s32);
void func_089AE128(S_088F4E14 *);

void func_088F57C0(S_088F4E14 *arg0) {
    func_089AE128(arg0);
    if (arg0->unk_5D20.unk_1C() == 0) {
        func_08926200((E_088DEC6C *)arg0->unk_64B0, D_089E2FF8, 0);
    } else {
        func_08926200((E_088DEC6C *)arg0->unk_7508, D_089E2FF8, 0);
    }
}
}
