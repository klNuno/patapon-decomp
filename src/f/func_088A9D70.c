#include "common.h"

void func_08852F00(void *, s32);
s32 *func_0885356C(void *, s32, s32, s32);
s32 func_0888A5A0(s32, s32);
s32 func_088BCF58(s32);
void func_088B4CDC(void *, s32, f32);

typedef struct {
    u8 pad_00[0x10];
    s32 unk_10;
} Unk;

void func_088A9D70(Unk *arg0, void *arg1) {
    s32 *temp = func_0885356C(arg1, 0, 1, 4);
    s32 *temp2 = func_0885356C(arg1, 1, 1, 4);
    f32 *temp3 = (f32 *)func_0885356C(arg1, 2, 1, 4);
    u8 *temp4;
    if ((temp4 = (u8 *)func_0888A5A0(func_088BCF58(arg0->unk_10), *temp)) == NULL) {
        func_08852F00(arg1, 0);
    } else {
        func_088B4CDC(temp4 + 0xF0, *temp2, *temp3);
        func_08852F00(arg1, 0);
    }
}
