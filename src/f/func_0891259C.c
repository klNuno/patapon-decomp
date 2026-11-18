#include "common.h"

typedef struct {
    u8 pad_00[0x718];
    s32 unk_718;
    s32 unk_71C;
} T1;

s32 func_088586E8(void);
s32 func_089B53D8(s32);
void func_08878864(s32, s32, s32, f32, f32, f32);
s32 func_0887EDB8(void *, s32);

void func_0891259C(T1 *arg0, s32 arg1, void *arg2) {
    if (arg0->unk_718 > 0) {
        if (func_0887EDB8(arg2, 0x10) != 0) {
            func_08878864(func_089B53D8(func_088586E8()), 1, 2, 1.0f, 0.0f, 0.0f);
            if (--arg0->unk_71C < 0) {
                arg0->unk_71C = arg0->unk_718 - 1;
            }
        }
        if (func_0887EDB8(arg2, 0x40) != 0) {
            func_08878864(func_089B53D8(func_088586E8()), 1, 2, 1.0f, 0.0f, 0.0f);
            if (++arg0->unk_71C > arg0->unk_718 - 1) {
                arg0->unk_71C = 0;
            }
        }
    }
}
