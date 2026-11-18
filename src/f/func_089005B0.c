#include "common.h"

typedef struct {
    u8 pad_00[0x3F0];
    u8 unk_3F0[4];
} X;

typedef struct {
    u8 pad_00[8];
    X *unk_08;
    u8 pad_0C[4];
} E;

typedef struct {
    u8 pad_00[0x404];
    E *unk_404;
    s32 unk_408;
} O;

typedef struct {
    u8 pad_00[0x506F0];
    u8 unk_506F0[4];
} W;

typedef struct {
    u8 pad_00[0x10];
    W *unk_10;
    u8 pad_14[4];
    s32 unk_18;
} T;

s32 func_0884EBC0(s32, s32);
void func_0884EBE8(s32, s32, s32);
s32 func_08852EB8(void *);
void func_08852EDC(void *, s32);
void func_08852F00(void *, s32);
void func_08852FD8(void *, s32);
s32 func_08853004(void *);
s32 *func_0885356C(void *, s32, s32, s32);
s32 func_088C6464(void *);
s32 func_088F8DCC(s32, s32, O **);
s32 func_0890A174(void *);

void func_089005B0(T *arg0, void *arg1) {
    s32 state;
    s32 h;

    state = func_08852EB8(arg1);
    h = func_08853004(arg1);
    if (state == 0) {
        O *o;
        s32 *a;
        s32 *b;
        s32 w;
        E *p;
        E *end;

        a = func_0885356C(arg1, 0, 1, 4);
        b = func_0885356C(arg1, 1, 1, 4);
        arg0->unk_18 = *a;
        if (*b == 0) {
            w = func_088C6464(arg0->unk_10->unk_506F0);
            o = NULL;
            func_08852FD8(arg1, 0);
            if (func_088F8DCC(w, arg0->unk_18, &o) != 0) {
                p = o->unk_404;
                end = p + o->unk_408;
                for (; p != end; p++) {
                    if (p->unk_08 != NULL) {
                        if (func_0890A174(p->unk_08->unk_3F0) == 0) {
                            func_08852F00(arg1, 0);
                        }
                    }
                }
            }
            func_08852FD8(arg1, 1);
            func_08852F00(arg1, 0);
        }
        func_0884EBE8(h, 0xF, 0);
        func_08852EDC(arg1, state + 1);
    } else if (state == 1) {
        O *o;
        s32 w;
        E *p;
        E *end;

        w = func_088C6464(arg0->unk_10->unk_506F0);
        o = NULL;
        func_0884EBE8(h, 0xF, func_0884EBC0(h, 0xF) + 1);
        if (func_088F8DCC(w, arg0->unk_18, &o) != 0) {
            p = o->unk_404;
            end = p + o->unk_408;
            for (; p != end; p++) {
                if (p->unk_08 != NULL) {
                    if (func_0890A174(p->unk_08->unk_3F0) == 0) {
                        return;
                    }
                }
            }
        }
        func_08852FD8(arg1, 1);
        func_08852F00(arg1, 0);
    }
}
