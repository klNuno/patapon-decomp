#include "common.h"

extern "C" {

typedef struct O_08907BE8 {
    u8 pad_00[0x920];
    s32 unk_920;
    u8 pad_924[0x44];
    u8 unk_968;
    u8 unk_969;
    u8 pad_96A[0x82];
    struct O_08907BE8 *unk_9EC;
} O_08907BE8;

typedef struct {
    s32 unk_00;
    u8 pad_04[0x420];
} E_08907BE8;

struct P_08907BE8 {
    O_08907BE8 *unk_00;

    bool on() { return unk_00->unk_969; }
    bool neg() { bool r = unk_00->unk_920 < 0; if (r) r = on(); return r; }
};

struct S_08907BE8 {
    u8 pad_00[0x8484];
    E_08907BE8 *unk_8484;
    u8 pad_8488[0xC];
    P_08907BE8 unk_8494;
    u8 pad_8498[0x84];
    s32 unk_851C;

    E_08907BE8 *cur() {
        if (unk_8494.on() && unk_8494.unk_00->unk_920 >= 0) {
            return unk_8484 + unk_8494.unk_00->unk_920;
        }
        return NULL;
    }
};

typedef struct {
    u8 pad_00[0x3C];
    S_08907BE8 *unk_3C;
} A_08907BE8;

extern O_08907BE8 *D_08AD8134[];

s32 func_08852EB8(void *);
void func_08852EDC(void *, s32);
void func_08852C5C(void *, s32, s32);
void func_08852F00(void *, s32);
s32 *func_0885356C(void *, s32, s32, s32);

void func_08907BE8(A_08907BE8 *arg0, void *arg1) {
    s32 n;
    S_08907BE8 *s;
    O_08907BE8 *o;
    s32 v;
    E_08907BE8 *e;
    P_08907BE8 *hp;
    bool r;

    n = func_08852EB8(arg1);
    if (n == 0) {
        s = (S_08907BE8 *)*func_0885356C(arg1, 0, 1, 4);
        arg0->unk_3C = s;
        o = s->unk_8494.unk_00;
        if (D_08AD8134[0] != o) {
            o->unk_9EC = D_08AD8134[0];
            D_08AD8134[0] = o;
        }
        o->unk_969 = 0;
        o->unk_968 = 0;
        func_08852EDC(arg1, n + 1);
    }
    s = arg0->unk_3C;
    hp = &s->unk_8494;
    if ((*(O_08907BE8 **)hp)->unk_969) {
        r = hp->unk_00->unk_920 < 0;
        if (r) r = hp->unk_00->unk_969;
        if (r) {
            v = s->unk_851C;
        } else {
            if (hp->on() && (*(O_08907BE8 **)hp)->unk_920 >= 0) {
                e = s->unk_8484 + (*(O_08907BE8 **)hp)->unk_920;
            } else {
                e = NULL;
            }
            v = e->unk_00;
        }
        func_08852C5C(arg1, v, 0);
        func_08852F00(arg1, 0);
    }
}

}
