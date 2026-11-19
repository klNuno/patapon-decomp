#include "common.h"

extern "C" {
void func_08855354(char *);
extern u8 D_08A47098[];

typedef struct {
    s32 unk_00;
    s32 unk_04;
    s32 unk_08;
    u8 pad_0C[4];
    char unk_10[0x40];
    u8 *unk_50;
} S;

struct T {};

static inline void func_08855354_inline(char *arg0, const T &) {
    func_08855354(arg0);
}

S *func_089334E4(S *arg0) {
    arg0->unk_50 = D_08A47098;
    arg0->unk_00 = 0;
    arg0->unk_04 = 0;
    arg0->unk_08 = 0;
    func_08855354_inline(arg0->unk_10, T());
    return arg0;
}
}
