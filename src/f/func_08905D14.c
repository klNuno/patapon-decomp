#include "common.h"

typedef struct {
    u8 pad_00[0x1212D0];
    u8 unk_1212D0[4];
} G;

typedef struct {
    u8 pad_00[0x10];
    G *unk_10;
} S;

void func_08852F00(void *, s32);
s32 *func_0885356C(void *, s32, s32, s32);
void func_08985844(char *arg0, s32 *arg1);
void func_0898A15C(void *, s32, f32);
char *func_0898A324(void *);

s32 func_08852EB8(void *);
void func_08852EDC(void *, s32);
s32 func_0898A2CC(void *);

void func_08905D14(S *arg0, void *arg1) {
    s32 *a;
    f32 *b;
    s32 *c;
    s32 t = func_08852EB8(arg1);

    switch (t) {
    case 0:
        a = func_0885356C(arg1, 0, 1, 4);
        b = (f32 *)func_0885356C(arg1, 1, 1, 4);
        c = func_0885356C(arg1, 2, 1, 4);
        func_0898A15C(arg0->unk_10->unk_1212D0, *a, *b);
        func_08985844(func_0898A324(arg0->unk_10->unk_1212D0), c);
        func_08852EDC(arg1, t + 1);
        break;
    case 1:
        if (func_0898A2CC(arg0->unk_10->unk_1212D0) != 0) {
            func_08852F00(arg1, 0);
        }
        break;
    }
}
