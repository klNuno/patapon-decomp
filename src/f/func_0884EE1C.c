#include "common.h"

typedef struct {
    void *unk_00;
    s32 unk_04;
    void *unk_08;
    s32 unk_0C;
} S_0884EE1C;

s32 sceKernelGetSystemTimeLow(void);
void func_08858498(u8 *, s32);
extern u8 D_08A4489C[];
extern u8 D_08A44884[];
extern u8 D_08A44868[];
extern u8 D_089DCA14[];
extern u8 D_08A5AEAC[];
extern u8 D_08A5B870[];

S_0884EE1C *func_0884EE1C(S_0884EE1C *arg0, s32 arg1) {
    arg0->unk_00 = D_08A4489C;
    arg0->unk_00 = D_08A44884;
    arg0->unk_04 = arg1;
    arg0->unk_08 = D_089DCA14;
    arg0->unk_0C = 0x42;
    arg0->unk_00 = D_08A44868;
    if (D_08A5B870[0] == 0) {
        func_08858498(D_08A5AEAC, sceKernelGetSystemTimeLow());
        D_08A5B870[0] = 1;
    }
    return arg0;
}
