#include "common.h"

typedef struct {
    u8 pad_00[0x4];
    s32 unk_04;
    s32 unk_08;
} S;

typedef struct {
    u8 pad_00[0x14A0];
    S *unk_14A0;
} G;

void func_08852F00(void *, s32);
s32 *func_0885356C(void *, s32, s32, s32);
extern u8 *D_08AD1F14[];

void func_088EC6CC(s32 arg0, void *arg1) {
    s32 *a;
    s32 *b;
    G *p;
    S *s;

    a = func_0885356C(arg1, 0, 1, 4);
    b = func_0885356C(arg1, 1, 1, 4);
    p = D_08AD1F14[0] != NULL ? (G *)D_08AD1F14[0] : NULL;
    s = p->unk_14A0;
    switch (*a) {
    case 0:
        *b = s->unk_04;
        break;
    case 1:
        *b = s->unk_08;
        break;
    }
    func_08852F00(arg1, 0);
}
