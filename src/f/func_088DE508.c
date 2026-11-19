#include "common.h"

typedef struct C C;
s32 func_088C6494(void *);
extern int func_08864FC0(s32);
void func_0891110C(C *arg0, s32 arg1, s32 arg2);

typedef struct {
    u8 pad_00[0x2C];
    s32 unk_2C;
    u8 pad_30[0x506F0 - 0x30];
    u8 unk_506F0[0xB21EC - 0x506F0];
    C *unk_B21EC;
} T;

void func_088DE508(T *arg0, s32 arg1) {
    C *temp;

    func_08864FC0(func_088C6494(arg0->unk_506F0));
    temp = arg0->unk_B21EC;
    if (temp != NULL) {
        func_0891110C(temp, arg1, arg0->unk_2C);
    }
}
