#include "common.h"

extern "C" {

typedef struct Node {
    struct Node *unk_00;
} Node;

struct It {
    Node *unk_00;
};

struct L;

s32 func_0891943C(It *, It *);
It *func_0891942C(It *, It *);
void func_089191CC(It *, L *);
void func_089191C4(It *, L *);
s32 func_089193F0(It, It);
void func_08919374(It, It, void (*)(void *));
s32 func_0891936C(It *);
void func_0891933C(s32, s32, s32);
void func_089193E8(void *);

inline It mk(Node *n) { It i; i.unk_00 = n; return i; }

struct L {
    Node *unk_00;
    u8 pad_04[4];
    s32 unk_08;
    s32 unk_0C;
    void erase(It &r, It first, It last) {
        if (func_0891943C(&first, &last)) {
            func_0891942C(&r, &last);
            return;
        }
        It b2;
        It e2;
        func_089191CC(&b2, this);
        func_089191C4(&e2, this);
        unk_0C -= func_089193F0(b2, e2);
        func_08919374(first, last, func_089193E8);
        s32 x = func_0891936C(&first);
        func_0891933C(unk_08, x, func_0891936C(&last));
        func_0891942C(&r, &last);
    }
};

void func_08919260(L *arg0) {
    It r;

    arg0->erase(r, mk(arg0->unk_00), mk((Node *)arg0));
}

}
