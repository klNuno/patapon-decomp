#include "common.h"

typedef struct {
    u8 pad_00[0x1C];
    s32 unk_1C;
} T0;

void func_08852F00(void *, s32);
s32 *func_0885356C(void *, s32, s32, s32);
s32 func_08852EB8(void *);
void func_08852EDC(void *, s32);
u8 func_089AE274(s32);
void func_089AE564(s32, s32);
void func_0897EE7C(s32, s32 *);
void func_0897EF6C(s32, s32);
s32 func_089AE5A4(s32);

void func_08911E3C(T0 *arg0, void *arg1) {
    s32 st;
    s32 *a;
    s32 *b;
    s32 *c;

    st = func_08852EB8(arg1);
    if (st == 0) {
        a = func_0885356C(arg1, 0, 1, 4);
        b = func_0885356C(arg1, 1, 1, 4);
        c = func_0885356C(arg1, 1, 1, 4);
        func_0897EE7C(func_089AE5A4(arg0->unk_1C), a);
        func_0897EF6C(func_089AE5A4(arg0->unk_1C), -1);
        func_089AE564(arg0->unk_1C, 2);
        st++;
        func_08852EDC(arg1, st);
    }
    if (st == 1) {
        if (func_089AE274(func_089AE5A4(arg0->unk_1C)) == 1) {
            func_08852F00(arg1, 0);
        }
    }
}
