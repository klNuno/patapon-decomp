#include "common.h"

extern "C" {

struct B;
void func_088DA648(B *, const B *);

struct B {
    u8 pad_00[0x20];

    B(const B &o) {
        func_088DA648(this, &o);
    }
};

struct T {
    s32 unk_000;
    s16 unk_004[256];
    s16 unk_204[256];
    B unk_404;
};

typedef struct {
    u8 pad_0000[0x8484];
    T *unk_8484;
    s32 unk_8488;
} S;

inline void *operator new(unsigned int, void *p) {
    return p;
}

void func_089B6414(S *arg0, T *arg1) {
    new (&arg0->unk_8484[arg0->unk_8488]) T(*arg1);
    arg0->unk_8488++;
}

}
