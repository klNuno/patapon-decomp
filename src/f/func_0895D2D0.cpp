#include "common.h"

extern "C" {

extern int sceKernelSignalSema(s32, s32);
extern int sceKernelWaitSema(s32, s32, s32);

class A_0895D2D0 {
public:
    virtual void *v0(s32, s32);
};

typedef struct {
    A_0895D2D0 *unk_00;
    void *unk_04;
    s32 unk_08;
    s32 unk_0C;
    s32 unk_10;
    s32 unk_14;
    s32 unk_18;
    s32 unk_1C;
    s32 unk_20;
} S_0895D2D0;

struct L_0895D2D0 {
    volatile s32 unk_00;
    void f_00() { sceKernelSignalSema(unk_00, 1); }
};

void func_0895D380(S_0895D2D0 *);

s32 func_0895D2D0(S_0895D2D0 *arg0, A_0895D2D0 *arg1, s32 arg2, s32 arg3) {
    L_0895D2D0 temp;
    s32 temp2;

    func_0895D380(arg0);
    sceKernelWaitSema(temp.unk_00 = arg0->unk_20, 1, 0);
    arg0->unk_00 = arg1;
    arg0->unk_08 = arg2 * arg3;
    arg0->unk_14 = arg2 * arg3;
    arg0->unk_0C = arg2;
    arg0->unk_10 = 0;
    arg0->unk_18 = 0;
    arg0->unk_1C = 0;
    arg0->unk_04 = arg1->v0(arg0->unk_08, 0x40);
    temp2 = arg0->unk_04 != NULL;
    temp.f_00();
    return temp2;
}

}
