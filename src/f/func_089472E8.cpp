#include "common.h"

extern "C" {

inline void *operator new(unsigned int, void *p) { return p; }

typedef struct {
    s32 *unk_00;
    s32 unk_04;
} Vec_089472E8;

class E_089472E8 {
public:
    u8 pad_00[0x410];
    Vec_089472E8 unk_410;
    E_089472E8(const E_089472E8 &o) {
        s32 *s;
        s32 *d;
        s32 *v;
        Vec_089472E8 *vs;

        unk_410.unk_00 = (s32 *)(((u32)this & 0xF) + (u32)this);
        unk_410.unk_04 = o.unk_410.unk_04;
        s = o.unk_410.unk_00;
        d = unk_410.unk_00;
        vs = &unk_410;
        if ((u32)d != (u32)(d + unk_410.unk_04)) {
            v = &unk_410.unk_04;
            do {
                new (d) s32(*s++);
                d++;
            } while (d != vs->unk_00 + *v);
        }
    }
};

typedef struct Node_089472E8 {
    struct Node_089472E8 *unk_00;
    struct Node_089472E8 *unk_04;
    E_089472E8 unk_08;
} Node_089472E8;

typedef struct {
    u8 pad_00[0x8];
    Node_089472E8 *unk_08;
    s32 unk_0C;
} List_089472E8;

void func_089472E8(List_089472E8 *arg0, Node_089472E8 *arg1, E_089472E8 *arg2) {
    Node_089472E8 *n;
    Node_089472E8 *prev;

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
    prev = arg1->unk_04;
    arg0->unk_0C++;
    prev->unk_00 = n;
    arg1->unk_04 = n;
    n->unk_00 = arg1;
    n->unk_04 = prev;
    new (&n->unk_08) E_089472E8(*arg2);
}

}
