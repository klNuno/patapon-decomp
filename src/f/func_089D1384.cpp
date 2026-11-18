#include "common.h"

extern "C" {

struct M_089D1384;
void func_088DA648(M_089D1384 *, const M_089D1384 *);

struct P_089D1384 {
    s16 unk_00;
    s16 unk_02;
};

struct M_089D1384 {
    u8 pad_00[0x20];
    M_089D1384(const M_089D1384 &o) { func_088DA648(this, &o); }
};

struct T_089D1384 {
    s32 unk_00;
    P_089D1384 unk_04[0x80];
    P_089D1384 unk_204[0x80];
    M_089D1384 unk_404;
};

inline void *operator new(unsigned int, void *p) { return p; }

typedef struct {
    u8 pad_00[0x8484];
    T_089D1384 *unk_8484;
    s32 unk_8488;
} S_089D1384;

void func_089D1384(S_089D1384 *arg0, T_089D1384 *arg1) {
    new (arg0->unk_8484 + arg0->unk_8488) T_089D1384(*arg1);
    arg0->unk_8488++;
}

}
