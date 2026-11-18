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
    u8 pad_14[0x34];
    s32 unk_48;
} T0;

void func_08852F00(void *, s32);
s32 *func_0885356C(void *, s32, s32, s32);
s32 func_08852BA8(void *);
s32 func_089A8D10(s32, s32);
s32 func_088C6464(void *);
s32 func_088F8DCC(s32, s32, O0 **);
void func_088F9C0C(void *, s32);

void func_08903B54(T0 *arg0, void *arg1) {
    O0 *o;
    s32 *a;
    s32 b;
    s32 v;
    s32 w;
    E0 *p;
    E0 *end;

    a = func_0885356C(arg1, 0, 1, 4);
    b = *func_0885356C(arg1, 1, 0, 4);
    v = func_089A8D10(arg0->unk_48, *(s32 *)((u8 *)func_08852BA8(arg1) + b));
    w = func_088C6464(arg0->unk_10->unk_506F0);
    o = NULL;
    if (func_088F8DCC(w, *a, &o) != 0) {
        p = o->unk_404;
        end = p + o->unk_408;
        for (; p != end; p++) {
            if (p->unk_08 != NULL) {
                func_088F9C0C(p->unk_08, v);
            }
        }
    }
    func_08852F00(arg1, 0);
}
