#include "common.h"

typedef struct {
    u8 pad_00[0xA98];
    s32 unk_A98;
    u8 pad_A9C[0x1E6B0 - 0xA9C];
    u8 unk_1E6B0[4];
} S_08937B90_10;

typedef struct {
    u8 pad_00[0x10];
    S_08937B90_10 *unk_10;
} S_08937B90;

void func_08852F00(void *, s32);
s32 *func_0885356C(void *, s32, s32, s32);
void func_0895465C(void *, s32, s32, s32);

void func_08937B90(S_08937B90 *arg0, void *arg1) {
    s32 *a;
    s32 *b;
    s32 *c;

    a = func_0885356C(arg1, 0, 1, 4);
    b = func_0885356C(arg1, 1, 1, 4);
    c = func_0885356C(arg1, 2, 1, 4);
    if (*b == 6) {
        if (arg0->unk_10->unk_A98 != 0) {
            func_0895465C(arg0->unk_10->unk_1E6B0, *a, *b, *c);
        }
    } else {
        func_0895465C(arg0->unk_10->unk_1E6B0, *a, *b, *c);
    }
    func_08852F00(arg1, 0);
}
