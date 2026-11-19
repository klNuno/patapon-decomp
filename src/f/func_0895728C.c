#include "common.h"
void func_0886D484(char *);
extern s32 func_08950B34(s32);
extern void func_0894DAE0(char *);
extern char D_08A04BD8[];

typedef struct {
    u8 pad_00[0x1D50];
    u8 unk_1D50[0x1E0];
    s32 unk_1F30;
    u8 pad_1F34[0x248C];
    char unk_43C0[1];
} T;

void func_0895728C(T *arg0) {
    func_0886D484(D_08A04BD8);
    arg0->unk_1F30 = 2;
    func_08950B34((s32)arg0->unk_1D50);
    func_0894DAE0(arg0->unk_43C0);
}
