#include "common.h"

extern "C" {
typedef struct {
    u8 pad_00[0x3A0];
    s32 unk_3A0;
} Sub;

typedef struct {
    u8 pad_00[0x14];
    Sub *unk_14;
} Obj;

void func_08852F00(void *, s32);
f32 *func_0885356C(void *, s32, s32, s32);
void func_0888FF98(s32, s32, f32);

void func_08936C88(Obj *arg0, void *arg1) {
    f32 *temp = func_0885356C(arg1, 0, 1, 4);
    func_0885356C(arg1, 1, 1, 4);
    func_0888FF98(arg0->unk_14->unk_3A0, 1, *temp);
    func_08852F00(arg1, 0);
}
}
