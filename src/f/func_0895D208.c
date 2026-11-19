#include "common.h"

void func_0895D3F4(void *);
s32 sceKernelCreateSema(const char *, u32, s32, s32, void *);
extern char D_08A04D2C[];

typedef struct {
    s32 unk_00, unk_04, unk_08, unk_0C, unk_10, unk_14, unk_18, unk_1C, unk_20;
} S;

void *func_0895D208(S *arg0) {
    arg0->unk_00 = 0;
    arg0->unk_04 = 0;
    arg0->unk_08 = 0;
    arg0->unk_0C = 0;
    arg0->unk_10 = 0;
    arg0->unk_14 = 0;
    arg0->unk_18 = 0;
    arg0->unk_1C = 0;
    arg0->unk_20 = 0;
    arg0->unk_20 = sceKernelCreateSema(D_08A04D2C, 0, 1, 1, NULL);
    func_0895D3F4(arg0);
    return arg0;
}
