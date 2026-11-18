#include "common.h"

s32 *func_0885356C(void *, s32, s32, s32);
void func_08852F00(void *, s32);
u32 func_08958888(void *);

typedef struct {
    u8 pad_00[0x10];
    void *unk_10;
} Unk;

void func_08937E30(Unk *arg0, void *arg1) {
    f32 *temp = (f32 *)func_0885356C(arg1, 1, 1, 4);
    *temp = (f32)func_08958888(arg0->unk_10);
    func_08852F00(arg1, 0);
}
