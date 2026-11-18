#include "common.h"

typedef struct {
    s32 unk_00;
    s32 unk_04;
} E088ABF08;

typedef struct {
    u8 pad_00[0x1AC8];
    s32 unk_1AC8;
    E088ABF08 unk_1ACC[1];
} M088ABF08;

typedef struct {
    u8 pad_00[0x14A0];
    M088ABF08 *unk_14A0;
} G088ABF08;

extern G088ABF08 *D_08AD1F14[];

void func_08852F00(s32, s32);
s32 *func_0885356C(s32, s32, s32, s32);

void func_088ABF08(s32 arg0, s32 arg1) {
    s32 *a;
    u32 *b;
    M088ABF08 *m;
    u32 i;

    a = func_0885356C(arg1, 0, 1, 4);
    b = (u32 *)func_0885356C(arg1, 1, 1, 4);
    m = (D_08AD1F14[0] != NULL ? D_08AD1F14[0] : NULL)->unk_14A0;
    for (i = 0; i < *b; i++) {
        m->unk_1ACC[m->unk_1AC8].unk_00 = *a;
        m->unk_1ACC[m->unk_1AC8].unk_04 = 1;
        m->unk_1AC8++;
    }
    func_08852F00(arg1, 0);
}
