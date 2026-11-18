#include "common.h"

extern "C" {

inline void *operator new(unsigned int, void *p) { return p; }

struct N {
    N *unk_00;
    N *unk_04;
    s32 unk_08;
};

struct It {
    N *unk_00;
    It(N *n) : unk_00(n) {}
};

typedef struct {
    u8 pad_00[0x8];
    N *unk_08;
    s32 unk_0C;
} T;

typedef struct {
    u8 pad_00[0xB820];
    T unk_B820;
} S0;

inline void ins(T *arg0, It pos, const s32 &v) {
    N *n;
    N *prev;

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
    prev = pos.unk_00->unk_04;
    arg0->unk_0C++;
    prev->unk_00 = n;
    pos.unk_00->unk_04 = n;
    n->unk_00 = pos.unk_00;
    n->unk_04 = prev;
    new (&n->unk_08) s32(v);
}

void func_0893E060(S0 *arg0, s32 arg1) {
    ins(&arg0->unk_B820, It((N *)&arg0->unk_B820), arg1);
}

}
