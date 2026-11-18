#include "common.h"

extern "C" {

typedef struct Node {
    s32 unk_00;
    struct Node *unk_04;
    void *unk_08;

    int eq2(struct Node *o) {
        int r = 0;
        if (unk_08 == o->unk_08 && unk_04 == o->unk_04) {
            r = 1;
        }
        return r;
    }
    int eq(struct Node *o) {
        int r = 0;
        if (eq2(o) && unk_00 == o->unk_00) {
            r = 1;
        }
        return r;
    }
    bool ne(struct Node *o) {
        return !(bool)eq(o);
    }
} Node;

typedef struct It {
    Node *unk_00;
} It;

class B {
public:
    u8 pad_00[8];
    virtual void v08();
    virtual void v0C();
    virtual void v10();
    virtual void v14();
};

class O : public B {
public:
    u8 pad_0C[0x24];
    s32 unk_30;
};

typedef struct R {
    u8 pad_00[0x92EC];
    u8 unk_92EC;
} R;

typedef struct S0 {
    u8 pad_00[0x3A0];
    R *unk_3A0;
    u8 pad_3A4[0x268];
    Node unk_60C;

    Node *end() { return &unk_60C; }
    It begin() { It r; r.unk_00 = unk_60C.unk_04; return r; }
} S0;

typedef struct {
    s32 unk_00;
    u8 pad_04[4];
} L;

typedef struct {
    u8 pad_00[0x10];
    L unk_10;
} W;

void func_089693C0(S0 *);
void func_08864A30(L *);
void func_08864A68(L *, s32);
void func_08814BB4(s32);
s32 func_08814C0C(s32);

void func_0888F47C(S0 *arg0) {
    W sp18;
    It it;
    O *o;

    func_089693C0(arg0);
    if (arg0->unk_3A0->unk_92EC != 0) {
        func_08864A30(&sp18.unk_10);
        func_08814C0C(1);
        func_08814BB4(5);
        it = arg0->begin();
        while (it.unk_00->ne(arg0->end())) {
            o = **(O ***)&it.unk_00->unk_08;
            if (o->unk_30 == 0) {
                o->v14();
            }
            if (it.unk_00 != NULL) {
                it.unk_00 = it.unk_00->unk_04;
            }
        }
        func_08864A68(&sp18.unk_10, -1);
    }
}

}
