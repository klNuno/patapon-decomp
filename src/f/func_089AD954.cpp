#include "common.h"

extern "C" {

s32 func_088BCF70(s32);
void func_088CFD24(f32, s32, s32, s32);

struct U {
    u8 pad_00[0x36B60];
    u8 unk_36B60;
};

struct T {
    u8 pad_00[4];
    U *unk_04;
};

void func_089AD954(T *arg0) {
    s32 temp = func_088BCF70((s32)&arg0->unk_04->unk_36B60);
    func_088CFD24(1.0f, temp, 0, 0xF);
}

}
