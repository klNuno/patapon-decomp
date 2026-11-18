#include "common.h"

typedef struct {
    u8 pad_00[0x10];
    u8 *unk_10;
} Obj_08904C18;

typedef struct {
    u8 pad_00[0xBC];
    s32 unk_BC;
    s32 unk_C0;
    s32 unk_C4;
    s32 unk_C8;
} Obj_08904C18_R;

void func_08852F00(void *, s32);
s32 *func_0885356C(void *, s32, s32, s32);
void *func_088C6474(void *);
Obj_08904C18_R *func_0898FBAC(void *, s32);

void func_08904C18(Obj_08904C18 *arg0, void *arg1) {
    s32 *a;
    s32 *b;
    s32 *c;
    s32 *d;
    s32 *e;
    Obj_08904C18_R *r;

    a = func_0885356C(arg1, 0, 1, 4);
    b = func_0885356C(arg1, 1, 1, 4);
    c = func_0885356C(arg1, 2, 1, 4);
    d = func_0885356C(arg1, 3, 1, 4);
    e = func_0885356C(arg1, 4, 1, 4);
    r = func_0898FBAC(func_088C6474(arg0->unk_10 + 0x506F0), *a);
    if (r != NULL) {
        *b = r->unk_BC;
        *c = r->unk_C0;
        *d = r->unk_C4;
        *e = r->unk_C8;
    }
    func_08852F00(arg1, 0);
}
