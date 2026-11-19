#include "common.h"

extern s32 func_088C6494(void *);
extern int func_08864FC0(s32);
extern void func_089114C4(s32);

typedef struct {
    u8 pad_00[0x506F0];
    u8 unk_506F0[0x61AFC];
    s32 unk_B21EC;
} T;

void func_088DE56C(T *arg0) {
    s32 temp;
    func_08864FC0(func_088C6494(&arg0->unk_506F0));
    temp = arg0->unk_B21EC;
    if (temp != 0) {
        func_089114C4(temp);
    }
}
