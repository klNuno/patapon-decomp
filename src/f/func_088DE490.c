#include "common.h"

s32 func_088148F0(s32, s32);
void func_08910E10(void *);
void func_088DF4DC(void *, void *);

typedef struct {
    u8 pad_00[0x28];
    void *unk_28;
    u8 pad_2C[0xB21C0];
    void *unk_B21EC;
} T;

void func_088DE490(T *arg0)
{
    if (arg0->unk_B21EC != 0) {
        func_088148F0(4, 0);
        func_088148F0(0, 0);
        func_08910E10(arg0->unk_B21EC);
        func_088DF4DC(arg0->unk_B21EC, arg0->unk_28);
        arg0->unk_B21EC = 0;
    }
}
