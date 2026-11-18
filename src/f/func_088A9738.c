#include "common.h"

typedef struct {
    u8 pad_00[0x10];
    s32 unk_10;
} Obj_088A9738;

void func_08852F00(void *, s32);
s32 *func_0885356C(void *, s32, s32, s32);
s32 func_0888A5A0(s32, s32);
s32 func_088BCF58(s32);
s32 func_088BCF60(s32);
s32 func_088D1F00(s32);
s32 func_088D309C(s32, s32);

void func_088A9738(Obj_088A9738 *arg0, void *arg1) {
    s32 *a = func_0885356C(arg1, 0, 1, 4);
    s32 *b = func_0885356C(arg1, 1, 1, 4);

    if (*func_0885356C(arg1, 2, 1, 4) == 0) {
        *b = func_088D1F00(func_088D309C(func_088BCF60(arg0->unk_10), *a));
    } else {
        *b = func_088D1F00(func_0888A5A0(func_088BCF58(arg0->unk_10), *a));
    }
    func_08852F00(arg1, 0);
}
