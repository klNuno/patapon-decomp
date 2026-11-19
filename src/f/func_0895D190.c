#include "common.h"

typedef struct {
    u8 pad_00[8];
    s32 unk_08;
} S;

typedef struct {
    u32 unk_00;
    u8 pad_04[0x28];
    u32 unk_2C;
    u8 pad_30[4];
} T;

s32 sceKernelReferEventFlagStatus(s32, T *);

u32 func_0895D190(const S *arg0) {
    T temp;

    temp.unk_00 = sizeof(temp);
    sceKernelReferEventFlagStatus(arg0->unk_08, &temp);
    return temp.unk_2C;
}
