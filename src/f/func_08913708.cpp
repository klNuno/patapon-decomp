#include "common.h"

extern "C" {

struct Unk1;
typedef void (Unk1::*Unk2)();

struct Unk {
    u8 pad_00[0x24];
    Unk1 *unk_24;
    Unk2 unk_28;
    u8 unk_34;
    u8 pad_35[3];
    f32 unk_38;
    f32 unk_3C;
    u8 unk_40;
};

static inline const f32 &func_08913708_unk_00(const f32 &arg0, const f32 &arg1) {
    return arg1 < arg0 ? arg1 : arg0;
}

void func_08913708(Unk *arg0, u32 arg1) {
    arg0->unk_40 = arg0->unk_34;
    if (*(volatile u8 *)&arg0->unk_34 == 1) {
        f32 temp = arg0->unk_38 + (f32)arg1 / 4800.0f;
        arg0->unk_38 = func_08913708_unk_00(arg0->unk_3C, temp);
        if (arg0->unk_38 >= arg0->unk_3C && arg0->unk_28 != NULL) {
            (arg0->unk_24->*arg0->unk_28)();
        }
    }
}

}
