#include "common.h"

void func_088A4138(f32, void *, s32);
void func_0897C3F4(f32, void *, s32);

typedef struct {
    u8 pad_00[0xAA4];
    void *unk_AA4;
    void *unk_AA8;
    u8 pad_AAC[0x215FC];
    s32 unk_220A8;
    s32 unk_220AC;
} T;

void func_08956E50(T *arg0, f32 arg1) {
    func_0897C3F4(arg1, arg0->unk_AA4, 0);
    func_088A4138(0.0f, arg0->unk_AA8, 0);
    arg0->unk_220A8 = 4;
    arg0->unk_220AC = 0;
}
