#include "common.h"

typedef struct {
    u8 pad_00[0x4C];
    s32 unk_4C;
    u8 pad_50[0xA54];
    void *unk_AA4;
    void *unk_AA8;
    u8 pad_AAC[0x1484];
    s32 unk_1F30;
    u8 pad_1F34[0x248C];
    char unk_43C0[0x1DCE8];
    s32 unk_220A8;
    s32 unk_220AC;
} S;

void func_088A4138(f32, void *, s32);
extern void func_0894DAE0(char *);
void func_0897C3F4(f32, void *, s32);

void func_0895752C(S *arg0, f32 arg1) {
    func_0897C3F4(arg1, arg0->unk_AA4, 0);
    func_088A4138(0.0f, arg0->unk_AA8, 0);
    arg0->unk_220A8 = 4;
    arg0->unk_220AC = 0;
    arg0->unk_1F30 = 2;
    func_0894DAE0(arg0->unk_43C0);
    arg0->unk_4C = 1;
}
