#include "common.h"

void func_08852F00(void *, s32);
s32 *func_0885356C(void *, s32, s32, s32);
void func_08992C14(void *, s32, f32);

typedef struct {
    u8 pad_00[0x14];
    u8 unk_14[4];
} T089A7EB0;

typedef struct {
    u8 pad_00[0x114];
    T089A7EB0 *unk_114;
} U089A7EB0;

typedef struct {
    u8 pad_00[0x10];
    U089A7EB0 *unk_10;
} S089A7EB0;

void func_089A7EB0(S089A7EB0 *arg0, void *arg1) {
    s32 *a = func_0885356C(arg1, 0, 1, 4);
    f32 *b = (f32 *)func_0885356C(arg1, 1, 1, 4);
    T089A7EB0 *t = arg0->unk_10->unk_114;
    if (t != NULL) {
        if (t->unk_14 != NULL) {
            func_08992C14(t->unk_14, *a, *b);
        }
    }
    func_08852F00(arg1, 0);
}
