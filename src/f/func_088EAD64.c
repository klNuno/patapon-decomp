#include "common.h"

typedef struct {
    u8 pad_00[0x36B10];
    s32 unk_36B10;
} W;

typedef struct {
    u8 pad_00[0x14];
    W *unk_14;
} Obj;

s32 *func_0885356C(s32, s32, s32, s32);
void func_08852F00(s32, s32);
void func_08940224(s32, s32, s32 *, s32 *, s32 *, s32 *);

void func_088EAD64(Obj *arg0, s32 arg1) {
    s32 *a;
    s32 *b;
    s32 *c;
    s32 *d;

    a = func_0885356C(arg1, 0, 1, 4);
    b = func_0885356C(arg1, 1, 1, 4);
    c = func_0885356C(arg1, 2, 1, 4);
    d = func_0885356C(arg1, 3, 1, 4);
    func_08852F00(arg1, 0);
    if (arg0->unk_14 != NULL) {
        func_08940224(arg0->unk_14->unk_36B10 + 0x1040, arg1, a, b, c, d);
    }
}
