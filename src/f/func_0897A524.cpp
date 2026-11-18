#include "common.h"

extern "C" {

typedef struct Node {
    struct Node *unk_00;
} Node;

struct It {
    Node *unk_00;
};

struct L;

s32 func_0897A714(It *, It *);
It *func_0897A704(It *, It *);
void func_0897A6F8(It *, L *);
void func_0897A6F0(It *, L *);
s32 func_0897A6B4(It, It);
void func_0897A638(It, It, void (*)(void *));
s32 func_0897A630(It *);
void func_0897A600(s32, s32, s32);
void func_0897A6AC(void *);

inline It mk(Node *n) { It i; i.unk_00 = n; return i; }

struct L {
    Node *unk_00;
    u8 pad_04[4];
    s32 unk_08;
    s32 unk_0C;
    void erase(It &r, It first, It last) {
        if (func_0897A714(&first, &last)) {
            func_0897A704(&r, &last);
            return;
        }
        It b2;
        It e2;
        func_0897A6F8(&b2, this);
        func_0897A6F0(&e2, this);
        unk_0C -= func_0897A6B4(b2, e2);
        func_0897A638(first, last, func_0897A6AC);
        s32 x = func_0897A630(&first);
        func_0897A600(unk_08, x, func_0897A630(&last));
        func_0897A704(&r, &last);
    }
};

void func_0897A524(L *arg0) {
    It r;

    arg0->erase(r, mk(arg0->unk_00), mk((Node *)arg0));
}

}
