#include "common.h"

extern "C" {

struct A_089C4404 {
    u8 unk_00;
};

struct E_089C4404 {};

struct Node {
    Node *unk_00;
    Node *unk_04;
    void *unk_08;

    int eq2(Node *o) {
        int r = 0;
        if (unk_08 == o->unk_08 && unk_04 == o->unk_04) {
            r = 1;
        }
        return r;
    }
    int eq(Node *o) {
        int r = 0;
        if (eq2(o) && unk_00 == o->unk_00) {
            r = 1;
        }
        return r;
    }
    bool ne(Node *o, const E_089C4404 &) { return !(bool)eq(o); }
};

struct It_089C4404 {
    Node *unk_00;
    A_089C4404 unk_04;
};

struct R_089C4404 {
    s32 unk_00;
};

struct L_089C4404 {
    Node unk_00;
    u8 pad_0C[0x14];
    s32 unk_20;
    Node *end() { return &unk_00; }
};


void func_089C43C8(s32 *, s32 *, s32);
s32 func_089C44F4(s32 *);
void func_089C32B4(Node *, Node *);
f32 *func_089C44E4(void *, void *);

void func_089C4404(L_089C4404 *arg0) {
    struct { A_089C4404 unk_00; u8 pad_01[8]; } temp;
    struct {
        Node *unk_00;
    } it;
    A_089C4404 b;
    It_089C4404 it2;
    R_089C4404 r;
    It_089C4404 t;

    b = temp.unk_00;
    it.unk_00 = arg0->unk_00.unk_04;
    while (it.unk_00->ne(arg0->end(), E_089C4404())) {
        t.unk_00 = it.unk_00;
        t.unk_04 = b;
        if (it.unk_00 != NULL) {
            it.unk_00 = it.unk_00->unk_04;
        }
        it2 = t;
        func_089C43C8(&r.unk_00, (s32 *)&it2, 0);
        func_089C32B4(&arg0->unk_00, (Node *)func_089C44F4(&r.unk_00));
        func_089C44E4(&temp.unk_00, &it2);
    }
    arg0->unk_20 = 0;
    arg0->unk_00.unk_04 = &arg0->unk_00;
    arg0->unk_00.unk_00 = &arg0->unk_00;
}

}
