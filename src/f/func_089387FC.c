#include "common.h"

void func_08852F00(void *, s32);
s32 *func_0885356C(void *, s32, s32, s32);
s32 func_088586E8(void);
void func_08956EA8(s32, f32);
void func_0897C3F4(f32, void *, s32);
u8 *func_089B53D8(s32);

typedef struct {
    u8 pad_00[0x10];
    s32 unk_10;
} T;

void func_089387FC(T *arg0, void *arg1) {
    s32 *a;
    f32 *b;

    a = func_0885356C(arg1, 0, 1, 4);
    b = (f32 *)func_0885356C(arg1, 1, 1, 4);
    if (*a != 1) {
        u8 *temp = func_089B53D8(func_088586E8());
        func_0897C3F4(*b, temp + 0x14, *(volatile s32 *)a);
    }
    if ((u32)*a <= 1U) {
        func_08956EA8(arg0->unk_10, *b);
    }
    func_08852F00(arg1, 0);
}
