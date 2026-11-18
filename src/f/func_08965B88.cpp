#include "common.h"

extern "C" {

typedef struct E08965B88 {
    u8 pad_00[0x20];
    s32 unk_20;
} E08965B88;

struct N08965B88 {
    s32 unk_00;
    N08965B88 *unk_04;
    E08965B88 *unk_08;

    s32 eqTail(const N08965B88 &o) const {
        s32 r = 0;
        if (unk_08 == o.unk_08 && unk_04 == o.unk_04) {
            r = 1;
        }
        return r;
    }
    s32 eq(const N08965B88 &o) const {
        s32 r = 0;
        if (eqTail(o) && unk_00 == o.unk_00) {
            r = 1;
        }
        return r;
    }
    bool ne(const N08965B88 &o) const {
        return !(bool)eq(o);
    }
};

struct I08965B88 {
    N08965B88 *unk_00;

    void next() {
        if (unk_00 != NULL) {
            unk_00 = unk_00->unk_04;
        }
    }
};

typedef struct O08965B88 {
    u8 pad_00[0x28];
    N08965B88 unk_28;

    N08965B88 *end() { return &unk_28; }
} O08965B88;

typedef struct Node08965B88 {
    u8 pad_00[0x4];
    struct Node08965B88 *unk_04;
    void *unk_08;
} Node08965B88;

typedef struct {
    u8 pad_00[0x8];
    O08965B88 *unk_08;
} Item08965B88;

class C08965B88_160 {
public:
    virtual void unk_08();
    virtual s32 unk_0C();
};

class C08965B88 {
public:
    u8 pad_00[0x160];
    C08965B88_160 unk_160;
    u8 pad_164[0x214 - 0x164];
    Node08965B88 *unk_214;
    u8 pad_218[0x18];
    u32 unk_230;

    Item08965B88 *Get(s32 i) {
        struct {
            Node08965B88 *unk_00;
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
        return (Item08965B88 *)it.unk_00->unk_08;
    }
};

void func_08882F6C(s32, s32);

s32 func_08965B88(C08965B88 *arg0, s32 arg1, s32 arg2) {
    s32 i;
    s32 n;
    O08965B88 *p;
    I08965B88 it;

    i = 0;
    n = arg0->unk_160.unk_0C();
    if (arg1 >= 0) {
        i = arg1;
        n = arg1 + 1;
    }
    for (; i < n; i++) {
        p = arg0->Get(i)->unk_08;
        if (p == NULL) {
            return 0;
        }
        for (it.unk_00 = p->unk_28.unk_04; it.unk_00->ne(*p->end()); it.next()) {
            func_08882F6C(it.unk_00->unk_08->unk_20, arg2);
        }
    }
    return 1;
}

}
