#include "common.h"

void func_0894D130(void *, f32);
extern s32 func_0894D42C(s32, s32);
void func_0894E6D0(void *, f32);

typedef struct {
    u8 pad_00[0x104];
    f32 unk_104;
    u8 pad_108[0x08];
    u8 unk_110;
} T;

void func_0894DA4C(T *arg0, f32 arg1) {
    func_0894D130(arg0, arg1);
    arg0->unk_104 = 6.0f;
    func_0894D42C((s32)arg0, 0);
    func_0894E6D0(&arg0->unk_110, arg1);
}
