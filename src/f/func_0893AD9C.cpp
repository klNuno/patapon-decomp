#include "common.h"

extern "C" {

extern void func_0881F120(void *, void *, s32);
extern s8 D_08A038D0[];

struct Str_0893AD9C {
    u32 unk_00;
    s8 unk_04[0x24];
    s32 unk_28;
};

struct Tag_0893AD9C {};

inline void construct_0893AD9C(Str_0893AD9C *p, const Str_0893AD9C &o, const Tag_0893AD9C &) {
    if (p != NULL) {
        u32 len = o.unk_00;
        if (len > 0x20) {
            len = 0x20;
        }
        if (p != &o) {
            func_0881F120(p->unk_04, (void *)o.unk_04, len);
            p->unk_00 = len;
            p->unk_04[len] = D_08A038D0[0];
        }
        p->unk_28 = o.unk_28;
    }
}

typedef struct Node_0893AD9C {
    struct Node_0893AD9C *unk_00;
    struct Node_0893AD9C *unk_04;
    Str_0893AD9C unk_08;
} Node_0893AD9C;

typedef struct {
    u8 pad_00[0x8];
    Node_0893AD9C *unk_08;
    s32 unk_0C;
} Pool_0893AD9C;

void func_0893AD9C(Pool_0893AD9C *arg0, Node_0893AD9C *arg1, Str_0893AD9C *arg2) {
    Node_0893AD9C *n;
    Node_0893AD9C *prev;
    struct { Node_0893AD9C *unk_00; } it;
    Str_0893AD9C *s;

    n = arg0->unk_08->unk_00;
    if (n != arg0->unk_08) {
        if (n->unk_00 != NULL) {
            n->unk_00->unk_04 = n->unk_04;
        }
        if (n->unk_04 != NULL) {
            n->unk_04->unk_00 = n->unk_00;
        }
        n->unk_00 = NULL;
        n->unk_04 = NULL;
    } else {
        n = NULL;
    }
    it.unk_00 = arg1;
    prev = it.unk_00->unk_04;
    arg0->unk_0C++;
    prev->unk_00 = n;
    it.unk_00->unk_04 = n;
    n->unk_00 = it.unk_00;
    n->unk_04 = prev;
    s = &n->unk_08;
    construct_0893AD9C(s, *arg2, Tag_0893AD9C());
}

}
