#include "common.h"

extern "C" {

struct E {};

struct N_08936B0C {
    s32 unk_00;
    N_08936B0C *unk_04;
    void *unk_08;

    int eq2(const N_08936B0C &o) const {
        int r = 0;
        if (unk_08 == o.unk_08 && unk_04 == *(N_08936B0C **)&o.unk_04) {
            r = 1;
        }
        return r;
    }
    int eq(const N_08936B0C &o) const {
        int r = 0;
        if (eq2(o) && unk_00 == o.unk_00) {
            r = 1;
        }
        return r;
    }
    bool ne(const N_08936B0C &o) const { return !(bool)eq(o); }
};

typedef struct {
    u8 pad_00[0x20];
    s32 unk_20;
} C_08936B0C;

struct B_08936B0C {
    u8 pad_00[0x28];
    N_08936B0C unk_28;
    N_08936B0C *end() { return &unk_28; }
};

typedef struct {
    u8 pad_00[0x8];
    B_08936B0C *unk_08;
} A_08936B0C;

struct G_08936B0C {
    u8 pad_00[0x214];
    N_08936B0C *unk_214;
    u8 pad_218[0x18];
    u32 unk_230;

    void *get(s32 i, const E &, const E &) {
        if (i >= unk_230) {
            return NULL;
        }
        s32 j;
        struct { N_08936B0C *unk_00; } q;
        q.unk_00 = unk_214;
        for (j = 0; j < i; j++) {
            if (q.unk_00 != NULL) {
                q.unk_00 = q.unk_00->unk_04;
            }
        }
        return q.unk_00->unk_08;
    }
};

typedef struct {
    u8 pad_00[0x118];
    G_08936B0C *unk_118;
} H_08936B0C;

typedef struct {
    u8 pad_00[0x14];
    H_08936B0C *unk_14;
} S_08936B0C;

u32 *func_0885356C(void *, s32, s32, s32);
void func_08852F00(void *, s32);
extern s32 func_08882F6C(s32, s32);

void func_08936B0C(S_08936B0C *arg0, void *arg1) {
    u32 *a;
    u32 *b;
    B_08936B0C *q;
    struct { N_08936B0C *unk_00; } it;
    struct { N_08936B0C *unk_00; } e;
    u32 i;
    u32 n;
    s32 o;

    a = func_0885356C(arg1, 0, 1, 4);
    b = func_0885356C(arg1, 1, 1, 4);
    q = ((A_08936B0C *)arg0->unk_14->unk_118->get(*func_0885356C(arg1, 2, 1, 4), E(), E()))->unk_08;
    n = *b;
    i = 0;
    e.unk_00 = q->end();
    it.unk_00 = q->unk_28.unk_04;
    while (it.unk_00->ne(*e.unk_00)) {
        if (i == n) {
            break;
        }
        if (it.unk_00 != NULL) {
            it.unk_00 = it.unk_00->unk_04;
        }
        i++;
    }
    o = (*(C_08936B0C **)&it.unk_00->unk_08)->unk_20;
    if (o != 0) {
        func_08882F6C(o, *a != 0);
    }
    func_08852F00(arg1, 0);
}

}
