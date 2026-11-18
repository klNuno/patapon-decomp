#include "common.h"

extern "C" {

typedef struct E_089A7F44 {
    u8 pad_00[0x20];
    s32 unk_20;
} E_089A7F44;

struct N_089A7F44 {
    s32 unk_00;
    N_089A7F44 *unk_04;
    E_089A7F44 *unk_08;

    s32 eqTail(const N_089A7F44 &o) const {
        s32 r = 0;
        if (unk_08 == o.unk_08 && unk_04 == o.unk_04) {
            r = 1;
        }
        return r;
    }
    s32 eq(const N_089A7F44 &o) const {
        s32 r = 0;
        if (eqTail(o) && unk_00 == o.unk_00) {
            r = 1;
        }
        return r;
    }
    bool ne(const N_089A7F44 &o) const {
        return !(bool)eq(o);
    }
};

struct I_089A7F44 {
    N_089A7F44 *unk_00;

    void next() {
        if (unk_00 != NULL) {
            unk_00 = unk_00->unk_04;
        }
    }
};

typedef struct O_089A7F44 {
    u8 pad_00[0x28];
    N_089A7F44 unk_28;
    u8 pad_34[0x14];
    u32 unk_48;

    N_089A7F44 *end() { return &unk_28; }
} O_089A7F44;

typedef struct Node_089A7F44 {
    u8 pad_00[0x4];
    struct Node_089A7F44 *unk_04;
    void *unk_08;
} Node_089A7F44;

typedef struct {
    u8 pad_00[0x8];
    O_089A7F44 *unk_08;
} Item_089A7F44;

struct C_089A7F44 {
    u8 pad_00[0x214];
    Node_089A7F44 *unk_214;
    u8 pad_218[0x18];
    u32 unk_230;

    Item_089A7F44 *Get(s32 i) {
        struct {
            Node_089A7F44 *unk_00;
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
        return (Item_089A7F44 *)it.unk_00->unk_08;
    }
};

typedef struct {
    u8 pad_00[0x118];
    C_089A7F44 *unk_118;
} G_089A7F44;

typedef struct {
    u8 pad_00[0x10];
    G_089A7F44 *unk_10;
} Obj_089A7F44;

struct V_089A7F44 {
    f32 unk_00;
    f32 unk_04;
    V_089A7F44() {}
    V_089A7F44(f32 x, f32 y) { unk_00 = x; unk_04 = y; }
};

void func_08852F00(void *, s32);
s32 *func_0885356C(void *, s32, s32, s32);
void func_088830C8(s32, V_089A7F44 *, V_089A7F44 *);

void func_089A7F44(Obj_089A7F44 *arg0, void *arg1) {
    u32 *a;
    s32 *b;
    f32 *c;
    f32 *d;
    f32 *e;
    f32 *f;
    struct { G_089A7F44 *unk_00; } g;
    struct { O_089A7F44 *unk_00; } o;
    struct { N_089A7F44 *unk_00; } n;
    I_089A7F44 it;
    u32 j;
    struct { E_089A7F44 *unk_00; } x;
    struct { s32 unk_00; } k;
    V_089A7F44 v0;
    V_089A7F44 v1;

    a = (u32 *)func_0885356C(arg1, 0, 1, 4);
    b = func_0885356C(arg1, 1, 1, 4);
    c = (f32 *)func_0885356C(arg1, 2, 1, 4);
    d = (f32 *)func_0885356C(arg1, 3, 1, 4);
    e = (f32 *)func_0885356C(arg1, 4, 1, 4);
    f = (f32 *)func_0885356C(arg1, 5, 1, 4);
    g.unk_00 = arg0->unk_10;
    if (g.unk_00 != NULL) {
        o.unk_00 = g.unk_00->unk_118->Get(*b)->unk_08;
        n.unk_00 = o.unk_00->end();
        if (n.unk_00 != NULL && *a < o.unk_00->unk_48) {
            for (it.unk_00 = *(N_089A7F44 *volatile *)&n.unk_00->unk_04, j = 0; it.unk_00->ne(*n.unk_00); it.next(), j++) {
                if (j == *a) {
                    break;
                }
            }
            x.unk_00 = it.unk_00->unk_08;
            if (x.unk_00 != NULL && (k.unk_00 = x.unk_00->unk_20) != 0) {
                v0 = V_089A7F44(*c, *d);
                v1 = V_089A7F44(*e, *f);
                func_088830C8(k.unk_00, &v0, &v1);
            }
        }
    }
    func_08852F00(arg1, 0);
}

}
