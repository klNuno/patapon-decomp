#include "common.h"

typedef struct S3 {
    s32 unk_00;
} S3;

typedef struct S2 {
    u8 pad_00[0x1498];
    S3 *unk_1498;
} S2;

typedef struct S1 {
    u8 pad_00[0x42820];
    S2 *unk_42820;
} S1;

typedef struct S0b {
    u8 pad_00[0xC];
    s32 unk_0C;
} S0b;

typedef struct S0 {
    u8 pad_00[0x10];
    S0b *unk_10;
} S0;

extern S1 *D_08AD1E28[];
void func_08852F00(void *, s32);
s32 *func_0885356C(void *, s32, s32, s32);

void func_088FD73C(S0 *arg0, void *arg1) {
    s32 *temp;
    S1 *p;
    s32 v;

    temp = func_0885356C(arg1, 0, 1, 4);
    v = 0;
    if (arg0->unk_10->unk_0C == 0) {
        v = 2;
    } else {
        p = D_08AD1E28[0] != NULL ? D_08AD1E28[0] : NULL;
        if (p->unk_42820->unk_1498->unk_00 != 0) {
            v = 1;
        }
    }
    *temp = v;
    func_08852F00(arg1, 0);
}
