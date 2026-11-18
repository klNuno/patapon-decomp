#include "common.h"

typedef struct {
    u8 pad_00[0xD80];
    f32 unk_D80;
} S2;

typedef struct {
    u8 pad_00[0x36B10];
    s32 unk_36B10;
} S1;

typedef struct {
    u8 pad_00[0x14];
    S1 *unk_14;
} S0;

extern int func_08852F00(s32, s32);
extern f32 *func_0885356C(s32, s32, s32, s32);
s32 func_08899E18(s32, s32);
S2 *func_088954EC(s32);

void func_088E6A18(S0 *arg0, s32 arg1) {
    f32 *a;
    S2 *p;

    a = func_0885356C(arg1, 0, 1, 4);
    if (arg0->unk_14 != NULL) {
        p = func_088954EC(func_08899E18(arg0->unk_14->unk_36B10, 0));
        if (p != NULL) {
            *a = p->unk_D80;
        }
    }
    func_08852F00(arg1, 0);
}
