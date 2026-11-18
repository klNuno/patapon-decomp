#include "common.h"

typedef struct {
    u8 pad_00[0x10];
    s32 unk_10;
} Obj_088A9814;

void func_08852F00(void *, s32);
s32 *func_0885356C(void *, s32, s32, s32);
s32 func_0888A5A0(s32, s32);
s32 func_088BCF58(s32);
s32 func_088BCF60(s32);
s32 func_088D309C(s32, s32);
s32 func_088D1F08(s32);

void func_088A9814(Obj_088A9814 *arg0, void *arg1) {
    s32 *a;
    s32 *b;

    a = func_0885356C(arg1, 0, 1, 4);
    b = func_0885356C(arg1, 1, 1, 4);
    if (*func_0885356C(arg1, 2, 1, 4) == 0) {
        *b = func_088D1F08(func_088D309C(func_088BCF60(arg0->unk_10), *a));
    } else {
        *b = func_088D1F08(func_0888A5A0(func_088BCF58(arg0->unk_10), *a));
    }
    func_08852F00(arg1, 0);
}
