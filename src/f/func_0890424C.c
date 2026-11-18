#include "common.h"

typedef struct {
    u8 pad_00[0x10850];
    u8 unk_10850;
} S0890424C_R;

typedef struct {
    u8 pad_00[0x506F0];
    u8 unk_506F0[1];
} S0890424C_10;

typedef struct {
    u8 pad_00[0x10];
    S0890424C_10 *unk_10;
} S0890424C;

void func_08852F00(void *, s32);
s32 *func_0885356C(void *, s32, s32, s32);
S0890424C_R *func_088C6464(void *);

void func_0890424C(S0890424C *arg0, void *arg1) {
    s32 *temp;
    S0890424C_R *temp2;

    temp = func_0885356C(arg1, 0, 1, 4);
    temp2 = func_088C6464(arg0->unk_10->unk_506F0);
    if (*temp != 0) {
        temp2->unk_10850 = 1;
    } else {
        temp2->unk_10850 = 0;
    }
    func_08852F00(arg1, 0);
}
