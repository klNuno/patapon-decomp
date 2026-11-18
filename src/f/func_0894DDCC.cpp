#include "common.h"

extern "C" {

typedef struct {
    u8 pad_00[0x24];
    s32 unk_24;
    u8 unk_28[0x50];
    s32 unk_78;
    u8 pad_7C[0x4];
    u8 unk_80;
} Obj_0894DDCC;

struct S_08AD9BEC {
    s32 unk_00;
    f32 unk_04;
    s32 unk_08;
    u8 unk_0C;
    void init() {
        unk_00 = -1;
        unk_04 = 0.5f;
        unk_08 = 0;
        unk_0C = 0;
    }
};

extern void func_0881F5C0(void *, s32, s32);
void func_08899DAC(s32, S_08AD9BEC *, s32);
extern s8 D_08AD9BE8[];
extern S_08AD9BEC D_08AD9BEC[];

void func_0894DDCC(Obj_0894DDCC *arg0) {
    if (D_08AD9BE8[0] == 0) {
        D_08AD9BEC[0].init();
        D_08AD9BE8[0] = 1;
    }
    D_08AD9BEC[0].unk_00 = 3;
    D_08AD9BEC[0].unk_04 = 0.0f;
    D_08AD9BEC[0].unk_08 = 0;
    func_0881F5C0(arg0->unk_28, 0, 0x50);
    arg0->unk_78 = 0;
    if (arg0->unk_24 != 0) {
        func_08899DAC(arg0->unk_24, D_08AD9BEC, 0);
    }
    arg0->unk_80 = 0;
}

}
