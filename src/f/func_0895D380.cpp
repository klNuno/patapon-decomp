#include "common.h"

extern "C" {
class S {
public:
    virtual void unk_08();
    virtual void unk_0C();
    virtual void unk_10(s32);
};

struct T {
    S *unk_00;
    s32 unk_04;
    s32 unk_08;
    s32 unk_0C;
    u8 pad_10[0x10];
    s32 unk_20;
};

s32 sceKernelWaitSema(s32, s32, u32 *);
s32 sceKernelSignalSema(s32, s32);
void func_0895D3F4(T *);

void func_0895D380(T *arg0)
{
    s32 temp = arg0->unk_20;
    volatile s32 s = temp;
    S *p;

    sceKernelWaitSema(temp, 1, NULL);
    p = arg0->unk_00;
    if (p != NULL) {
        p->unk_10(arg0->unk_04);
    }
    arg0->unk_04 = 0;
    arg0->unk_00 = NULL;
    arg0->unk_08 = 0;
    arg0->unk_0C = 0;
    sceKernelSignalSema(s, 1);
    func_0895D3F4(arg0);
}
}
