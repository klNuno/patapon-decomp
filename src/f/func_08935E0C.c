#include "common.h"

typedef struct C_08935E0C {
    u8 pad_00[0x3A0];
    struct C_08935E0C *unk_3A0;
    u8 pad_3A4[0x111C];
    s32 unk_14C0;
    u8 pad_14C4[0x4];
    s32 unk_14C8;
    u8 pad_14CC[0x7E18];
    s32 unk_92E4;
} C_08935E0C;

typedef struct {
    u8 pad_00[0x3A0];
    C_08935E0C *unk_3A0;
    u8 pad_3A4[0x4];
    s32 unk_3A8;
} B_08935E0C;

typedef struct {
    u8 pad_00[0x14];
    B_08935E0C *unk_14;
} A_08935E0C;

void func_08852F00(void *, s32);
s32 *func_0885356C(void *, s32, s32, s32);

void func_08935E0C(A_08935E0C *arg0, void *arg1) {
    s32 *a;
    s32 *b;
    s32 *c;
    s32 *d;

    a = func_0885356C(arg1, 0, 1, 4);
    b = func_0885356C(arg1, 1, 1, 4);
    c = func_0885356C(arg1, 2, 1, 4);
    d = func_0885356C(arg1, 3, 1, 4);
    if (arg0->unk_14 != NULL) {
        *a = arg0->unk_14->unk_3A0->unk_14C0;
        *b = arg0->unk_14->unk_3A8;
        *c = arg0->unk_14->unk_3A0->unk_14C8;
        *d = arg0->unk_14->unk_3A0->unk_3A0->unk_92E4;
    }
    func_08852F00(arg1, 0);
}
