#include "common.h"

void func_0881389C(void);
void *func_08827A50(s32, s32);
void func_08827AC8(void *);
void func_088589B0(s32, s32);
s32 func_08858B9C(void);
void *func_089B450C(void *);
void func_089B4814(void *);
s32 sceCtrlSetSamplingCycle(s32);
s32 sceKernelChangeCurrentThreadAttr(s32, s32);
extern void *D_08A5B924[];
extern u8 D_08A7B948[];

void func_088586F4(void) {
    void *p;

    func_08827AC8(D_08A7B948);
    func_088589B0(0, 0x13E000);
    func_088589B0(1, 0x01119000);
    func_088589B0(3, 0xA000);
    func_088589B0(4, 0x64000);
    func_088589B0(5, -1);
    func_088589B0(6, 0);
    sceKernelChangeCurrentThreadAttr(0, 0x4000);
    sceCtrlSetSamplingCycle(0);
    func_0881389C();
    func_08858B9C();
    p = func_08827A50(4, func_08858B9C());
    if (p != NULL) {
        p = func_089B450C(p);
    }
    D_08A5B924[0] = p;
    func_089B4814(p);
}
