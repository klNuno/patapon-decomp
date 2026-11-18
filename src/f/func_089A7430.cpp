#include "common.h"

extern "C" {

typedef struct {
    u8 pad_00[0x38];
    s32 unk_38;
    u8 pad_3C[0x4];
    u8 unk_40;
} F_089A7430;

typedef struct E_089A7430 {
    u8 pad_00[0x20];
    F_089A7430 *unk_20;
} E_089A7430;

struct N_089A7430 {
    s32 unk_00;
    N_089A7430 *unk_04;
    E_089A7430 *unk_08;

    s32 eqTail(const N_089A7430 &o) const {
        s32 r = 0;
        if (unk_08 == o.unk_08 && unk_04 == o.unk_04) {
            r = 1;
        }
        return r;
    }
    s32 eq(const N_089A7430 &o) const {
        s32 r = 0;
        if (eqTail(o) && unk_00 == o.unk_00) {
            r = 1;
        }
        return r;
    }
    bool ne(const N_089A7430 &o) const {
        return !(bool)eq(o);
    }
};

struct I_089A7430 {
    N_089A7430 *unk_00;

    void next() {
        if (unk_00 != NULL) {
            unk_00 = unk_00->unk_04;
        }
    }
};

typedef struct O_089A7430 {
    u8 pad_00[0x28];
    N_089A7430 unk_28;
    u8 pad_34[0x14];
    u32 unk_48;

    N_089A7430 *end() { return &unk_28; }
} O_089A7430;

typedef struct Node_089A7430 {
    u8 pad_00[0x4];
    struct Node_089A7430 *unk_04;
    void *unk_08;
} Node_089A7430;

typedef struct {
    u8 pad_00[0x8];
    O_089A7430 *unk_08;
} Item_089A7430;

struct C_089A7430 {
    u8 pad_00[0x214];
    Node_089A7430 *unk_214;
    u8 pad_218[0x18];
    u32 unk_230;

    Item_089A7430 *Get(s32 i) {
        struct {
            Node_089A7430 *unk_00;
        } it;
        s32 j;

        if ((u32)i >= unk_230) {
            return NULL;
        }
        it.unk_00 = unk_214;
        for (j = 0; j < i; j++) {
            if (it.unk_00 != NULL) {
                it.unk_00 = it.unk_00->unk_04;
            }
        }
        return (Item_089A7430 *)it.unk_00->unk_08;
    }
};

typedef struct {
    u8 pad_00[0x110];
    s32 unk_110;
    u8 pad_114[0x4];
    C_089A7430 *unk_118;
} G_089A7430;

typedef struct {
    u8 pad_00[0x10];
    G_089A7430 *unk_10;
} Obj_089A7430;

void func_08852F00(void *, s32);
s32 *func_0885356C(void *, s32, s32, s32);

void func_089A7430(Obj_089A7430 *arg0, void *arg1) {
    s32 *a;
    u32 *b;
    s32 *c;
    struct { G_089A7430 *unk_00; } g;
    struct { O_089A7430 *unk_00; } o;
    struct { N_089A7430 *unk_00; } e;
    I_089A7430 it;
    u32 j;
    struct { E_089A7430 *unk_00; } x;

    a = func_0885356C(arg1, 0, 1, 4);
    b = (u32 *)func_0885356C(arg1, 1, 1, 4);
    c = func_0885356C(arg1, 2, 1, 4);
    *a = 0;
    g.unk_00 = arg0->unk_10;
    if (g.unk_00 != NULL && g.unk_00->unk_110 != 0) {
        o.unk_00 = g.unk_00->unk_118->Get(*c)->unk_08;
        e.unk_00 = o.unk_00->end();
        if (e.unk_00 != NULL && *b < o.unk_00->unk_48) {
            for (it.unk_00 = *(N_089A7430 *volatile *)&e.unk_00->unk_04, j = 0; it.unk_00->ne(*e.unk_00); it.next(), j++) {
                if (j == *b) {
                    break;
                }
            }
            x.unk_00 = it.unk_00->unk_08;
            if (x.unk_00 != NULL) {
                F_089A7430 *f = x.unk_00->unk_20;
                if (f != NULL) {
                    *a = 0;
                    if (f->unk_40 != 0 && f->unk_38 != 0) {
                        *a = 1;
                    }
                }
            }
        }
    }
    func_08852F00(arg1, 0);
}

}
