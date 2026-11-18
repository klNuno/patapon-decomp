#include "common.h"

typedef struct {
    u8 pad_00[0x10];
    s32 unk_10;
    u32 unk_14;
} Unk0;

s32 func_08852EB8(void *);
void func_08852EDC(void *, s32);
void func_08852F00(void *, s32);
u32 *func_0885356C(void *, s32, s32, s32);
s32 func_089794A8(s32);
f32 func_08991CD0(s32);

void func_089920CC(Unk0 *arg0, void *arg1) {
    void *temp = arg1;
    s32 temp2 = func_08852EB8(temp);

    if (temp2 == 0) {
        arg0->unk_14 = *func_0885356C(temp, 0, 1, 4);
        func_08852EDC(temp, ++temp2);
    }
    if (temp2 == 1) {
        if ((u32)(30.0f * func_08991CD0(func_089794A8(arg0->unk_10))) >= arg0->unk_14) {
            func_08852F00(temp, 0);
        }
    }
}
