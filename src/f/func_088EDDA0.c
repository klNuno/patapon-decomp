#include "common.h"

typedef struct {
    u8 pad_00[0x45B8];
    s32 unk_45B8;
} S3;

typedef struct {
    u8 pad_00[0x14A0];
    S3 *unk_14A0;
} S2;

typedef struct {
    u8 pad_00[0x42820];
    S2 *unk_42820;
} S1;

extern void *D_08AD1E28[];
void func_08852F00(s32, s32);
s32 *func_0885356C(s32, s32, s32, s32);

void func_088EDDA0(s32 arg0, s32 arg1) {
    s32 *temp;
    S1 *p;
    S2 *q;
    s32 n;

    temp = func_0885356C(arg1, 0, 1, 4);
    p = D_08AD1E28[0] != NULL ? (S1 *)D_08AD1E28[0] : NULL;
    n = *temp;
    q = p->unk_42820;
    if (n <= 0 || n > 32) {
        q->unk_14A0->unk_45B8 = 0;
        func_08852F00(arg1, 0);
        return;
    }
    q->unk_14A0->unk_45B8 |= 1 << (n - 1);
    func_08852F00(arg1, 0);
}
