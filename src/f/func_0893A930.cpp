#include "common.h"

extern "C" {

typedef struct Node {
    struct Node *unk_00;
} Node;

struct It {
    Node *unk_00;
};

struct L;

s32 func_0893AB0C(It *, It *);
It *func_0893AAFC(It *, It *);
void func_0893A844(It *, L *);
void func_0893A83C(It *, L *);
s32 func_0893AAC0(It, It);
void func_0893AA44(It, It, void (*)(void *));
s32 func_0893AA3C(It *);
void func_0893AA0C(s32, s32, s32);
void func_0893AAB8(void *);

inline It mk(Node *n) { It i; i.unk_00 = n; return i; }

struct L {
    Node *unk_00;
    u8 pad_04[4];
    s32 unk_08;
    s32 unk_0C;
    void erase(It &r, It first, It last) {
        if (func_0893AB0C(&first, &last)) {
            func_0893AAFC(&r, &last);
            return;
        }
        It b2;
        It e2;
        func_0893A844(&b2, this);
        func_0893A83C(&e2, this);
        unk_0C -= func_0893AAC0(b2, e2);
        func_0893AA44(first, last, func_0893AAB8);
        s32 x = func_0893AA3C(&first);
        func_0893AA0C(unk_08, x, func_0893AA3C(&last));
        func_0893AAFC(&r, &last);
    }
};

void func_0893A930(L *arg0) {
    It r;

    arg0->erase(r, mk(arg0->unk_00), mk((Node *)arg0));
}

}
