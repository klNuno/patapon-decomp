#include "common.h"

typedef struct {
    u8 pad_00[0x138];
    s32 unk_138;
    u8 pad_13C[0x28];
    s32 unk_164;
} T0;

typedef struct {
    u8 pad_00[0x38];
    s32 unk_38;
    u8 pad_3C[0xA0];
    T0 *unk_DC;
} T;

s32 func_0895D76C(s32);
s32 sceKernelSignalSema(s32, s32);
s32 sceKernelWaitSemaCB(s32, s32, u32 *);

s32 func_088647DC(T *arg0, s32 arg1) {
    s32 temp;
    sceKernelWaitSemaCB(arg0->unk_38, 1, NULL);
    temp = func_0895D76C(((T0 *)((u8 *)arg0->unk_DC + arg1 * sizeof(T0)))->unk_138);
    sceKernelSignalSema(arg0->unk_38, 1);
    return temp;
}
