#include "common.h"

typedef struct {
    u8 pad_00[0x24];
    u8 unk_24[0xA4];
    void *unk_C8;
    u8 pad_CC[0x10];
    u8 unk_DC;
    u8 pad_DD[3];
    s32 unk_E0;
    u8 pad_E4[0x80];
    s32 unk_164;
} T;

typedef struct T3 T3;

s32 func_088586E8(void);
s32 func_089B53D8(s32);
void func_08878FE0(T3 *arg0, void *arg1, f32 arg2);
void func_0889BF08(void *, f32);
void func_088A41B8(void *, void *, f32);

void func_0894CF90(T *arg0, f32 arg1) {
    if (arg0->unk_164 != -1) {
        T3 *temp = (T3 *)func_089B53D8(func_088586E8());
        func_08878FE0(temp, (void *)arg0->unk_164, arg1);
    }
    func_0889BF08(arg0->unk_24, 0.0f);
    func_088A41B8(arg0->unk_C8, arg0->unk_24, 0.0f);
    arg0->unk_DC = 0;
    arg0->unk_E0 = 0;
}
