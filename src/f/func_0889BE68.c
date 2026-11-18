#include "common.h"

typedef struct {
    u8 pad_00[0x54];
    u8 unk_54;
    u8 pad_55[7];
    u32 unk_5C;
    u32 unk_60;
    u8 pad_64[4];
    u8 unk_68;
} T;

void func_0889BF08(void *, f32);
void func_0889C0A4(void *, f32, f32);

void func_0889BE68(T *arg0, s32 arg1) {
    arg0->unk_54 = 1;
    if (arg0->unk_68 != 0) {
        f32 temp = (f32)arg0->unk_5C;
        func_0889C0A4(arg0, temp, (f32)arg0->unk_60);
    } else if (arg1 != 0) {
        func_0889BF08(arg0, 0.0f);
    }
}
