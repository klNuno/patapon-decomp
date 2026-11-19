#include "common.h"

typedef struct {
    u8 pad_00[8];
    u8 *unk_08;
    u8 pad_0C[0x14];
    u8 unk_20[0x98B0];
    u8 unk_98D0;
} T;

void func_0895EFB8(T *, s32);
void func_0885E0A4(void *);
extern u8 D_08A44AE8[];

T *func_08860348(T *arg0, s32 arg1) {
    func_0895EFB8(arg0, arg1);
    arg0->unk_08 = D_08A44AE8;
    func_0885E0A4(arg0->unk_20);
    arg0->unk_98D0 = 0;
    return arg0;
}
