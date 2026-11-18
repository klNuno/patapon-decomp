#include "common.h"

typedef struct {
    u8 pad_00[0x36B10];
    s32 unk_36B10;
} W_088EA17C;

typedef struct {
    u8 pad_00[0x14];
    W_088EA17C *unk_14;
} Obj_088EA17C;

void func_08852F00(void *, s32);
s32 *func_0885356C(void *, s32, s32, s32);
s32 func_08895BC4(s32, s32);
s32 func_08899E18(s32, s32);
s32 func_0893F2BC(s32, s32);

void func_088EA17C(Obj_088EA17C *arg0, void *arg1) {
    s32 *a;
    s32 *b;
    s32 *c;

    a = func_0885356C(arg1, 0, 1, 4);
    b = func_0885356C(arg1, 1, 1, 4);
    c = func_0885356C(arg1, 2, 1, 4);
    if (arg0->unk_14 != NULL) {
        *c = func_0893F2BC(func_08895BC4(func_08899E18(arg0->unk_14->unk_36B10, 1), *a), *b);
    }
    func_08852F00(arg1, 0);
}
