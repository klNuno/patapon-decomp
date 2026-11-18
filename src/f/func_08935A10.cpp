#include "common.h"

extern "C" {

inline void *operator new(unsigned int, void *p) { return p; }

void func_08822B3C(char *, const char *);

class E {
public:
    s32 unk_00;
    s32 unk_04;
    f32 unk_08;
    f32 unk_0C;
    s32 unk_10;
    s32 unk_14;
    f32 unk_18;
    f32 unk_1C;
    char unk_20[0x20];
    u16 unk_40;
    u16 unk_42;
};

typedef struct Node {
    struct Node *unk_00;
    struct Node *unk_04;
    E unk_08;
} Node;

typedef struct {
    u8 pad_00[0x8];
    Node *unk_08;
    s32 unk_0C;
} List;

struct A {};

inline void ins(List *arg0, Node *arg1, const E *arg2, const A &) {
    Node *n;
    Node *prev;

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
    E *e = (E *)operator new(sizeof(E), &n->unk_08);
    if (e != NULL) {
        e->unk_00 = arg2->unk_00;
        e->unk_04 = arg2->unk_04;
        e->unk_08 = arg2->unk_08;
        e->unk_0C = arg2->unk_0C;
        e->unk_10 = arg2->unk_10;
        e->unk_14 = arg2->unk_14;
        e->unk_18 = arg2->unk_18;
        e->unk_1C = arg2->unk_1C;
        e->unk_40 = arg2->unk_40;
        e->unk_42 = arg2->unk_42;
        func_08822B3C(e->unk_20, arg2->unk_20);
    }
}

void func_08935A10(List *arg0, Node *arg1, E *arg2) {
    ins(arg0, arg1, arg2, A());
}

}
