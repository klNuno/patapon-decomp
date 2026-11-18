#include "common.h"

extern "C" {

class Unk_08991614_Sub {
public:
    virtual s32 unk_08(s32, s32);
};

typedef struct Unk_08991614 {
    Unk_08991614_Sub *unk_00;
    u8 unk_04[4];
    s32 unk_08[2];
} Unk_08991614;

void func_0893F3C8(void *, Unk_08991614_Sub *);
extern s32 func_0881F5C0(s32, s32, s32);

void func_08991614(Unk_08991614 *arg0) {
    u32 i;

    func_0893F3C8(arg0->unk_04, arg0->unk_00);
    for (i = 0; i < 2; i++) {
        arg0->unk_08[i] = arg0->unk_00->unk_08(0x88000, 0x40);
        func_0881F5C0(arg0->unk_08[i], 0, 0x88000);
    }
}

}
