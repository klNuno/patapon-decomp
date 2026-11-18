#include "common.h"

typedef struct {
    u8 pad_00[0x14];
    void *unk_14;
} S;

void func_08852F00(void *, s32);
s32 *func_0885356C(void *, s32, s32, s32);
s32 func_08852EB8(void *);
void func_08852EDC(void *, s32);
void func_08873D28(void *, u32, s32, f32);
void func_08873DA8(void *, u32, s32, f32);
s32 func_08873E28(void *);

void func_088EBDDC(S *arg0, void *arg1) {
    s32 st;
    f32 *a;
    s32 *b;

    st = func_08852EB8(arg1);
    switch (st) {
    case 0:
        a = (f32 *)func_0885356C(arg1, 0, 1, 4);
        b = func_0885356C(arg1, 1, 1, 4);
        if (*func_0885356C(arg1, 2, 1, 4) == 0) {
            func_08873D28(arg0->unk_14, *b, 1, *a);
        } else {
            func_08873DA8(arg0->unk_14, *b, 1, *a);
        }
        func_08852EDC(arg1, st + 1);
        break;
    case 1:
        if (func_08873E28(arg0->unk_14) != 0) {
            func_08852F00(arg1, 0);
        }
        break;
    }
}
