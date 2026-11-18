#include "common.h"

typedef struct {
    u8 pad_00[0x10];
    s32 unk_10;
} S0;

void func_08852F00(s32, s32);
s32 *func_0885356C(s32, s32, s32, s32);
void func_08956F20(s32, u32, s32);
void func_08957004(s32, s32);

void func_08938924(S0 *arg0, s32 arg1) {
    s32 *temp;
    u32 i;
    u32 v;

    temp = func_0885356C(arg1, 0, 1, 4);
    for (i = 0; i < 8; i++) {
        if (*temp != 0) {
            v = -1;
        } else {
            v = 0;
        }
        func_08956F20(arg0->unk_10, i, v);
    }
    func_08957004(arg0->unk_10, *temp != 0);
    func_08852F00(arg1, 0);
}
