#include "common.h"

extern "C" {

class Sub_089CC1D0 {
public:
    u8 pad_00[0x54];
    f32 unk_54;
    u8 pad_58[0x4];
    f32 unk_5C;
    u8 pad_60[0x20];
    virtual void unk_08();
    virtual void unk_0C();
};

typedef struct S_089CC1D0 {
    u8 pad_00[0x4];
    s32 unk_04;
    u8 pad_08[0xA0 - 0x8];
    Sub_089CC1D0 unk_A0;
} S_089CC1D0;

void func_089CC4EC(char *arg0, s32 arg1);

s32 func_089CC1D0(S_089CC1D0 *arg0) {
    switch (arg0->unk_04) {
    case 3:
        arg0->unk_A0.unk_0C();
        if (arg0->unk_A0.unk_5C <= arg0->unk_A0.unk_54) {
            func_089CC4EC((char *)arg0, 6);
            return 0x10000;
        }
        break;
    case 5:
        return 0x10000;
    case 6:
        func_089CC4EC((char *)arg0, 2);
        return 0x10000;
    case 2:
        return 2;
    case 0:
    case 1:
    case 4:
        break;
    }
    return 0x10000;
}

}
