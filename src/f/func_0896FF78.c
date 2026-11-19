#include "common.h"

extern s32 func_088586E8(void);
s32 func_089B53D8(s32);
void func_08923600(void *, s32, f32, f32);

typedef struct {
    u8 pad_00[0x2844];
    u8 unk_2844;
} T;

void func_0896FF78(s32 arg0, s32 arg1, f32 arg2) {
    T *temp = (T *)func_089B53D8(func_088586E8());
    func_08923600(&temp->unk_2844, arg1, arg2, 0.0f);
}
