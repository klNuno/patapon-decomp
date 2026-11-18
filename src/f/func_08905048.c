#include "common.h"

typedef struct {
    u8 pad_00[8];
    void *unk_08;
    u8 pad_0C[4];
} E0;

typedef struct {
    u8 pad_00[0x404];
    E0 *unk_404;
    s32 unk_408;
} O0;

typedef struct {
    u8 pad_00[0x506F0];
    u8 unk_506F0[4];
} W0;

typedef struct {
    u8 pad_00[0x10];
    W0 *unk_10;
} T0;

void func_08852F00(void *, s32);
s32 *func_0885356C(void *, s32, s32, s32);
s32 func_088C6464(void *);
s32 func_088C6474(void *);
u8 *func_0898FBAC(s32, s32);
s32 func_088F8DCC(s32, s32, O0 **);
void func_088F9F28(void *, s32, u8 *);

void func_08905048(T0 *arg0, void *arg1) {
    s32 w;
    s32 t;
    O0 *o;
    s32 *a;
    s32 *b;
    u8 *r;
    E0 *p;
    E0 *end;

    a = func_0885356C(arg1, 0, 1, 4);
    b = func_0885356C(arg1, 1, 1, 4);
    r = func_0898FBAC(func_088C6474(arg0->unk_10->unk_506F0), *a);
    if (r == NULL) {
        func_08852F00(arg1, 0);
        return;
    }
    t = func_088C6464(arg0->unk_10->unk_506F0);
    o = NULL;
    w = t;
    if (func_088F8DCC(t, *b, &o) != 0) {
        p = o->unk_404;
        end = p + o->unk_408;
        for (; p != end; p++) {
            if (p->unk_08 != NULL) {
                func_088F9F28(p->unk_08, w, r + 0xD0);
            }
        }
    }
    func_08852F00(arg1, 0);
}
