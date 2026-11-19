#include "common.h"

extern "C" {
void func_08855354(char *);

typedef struct {
    u8 pad_00[0x24];
    u8 *unk_24;
    s32 unk_28;
    u8 pad_2C[4];
    char unk_30[0x40];
    u8 unk_70;
} S;

struct T {};

static inline void func_08855354_inline(char *arg0, const T &) {
    func_08855354(arg0);
}

S *func_088B5AE4(S *arg0) {
    arg0->unk_24 = (u8 *)((u32)arg0 + ((u32)arg0 & 3));
    arg0->unk_28 = 0;
    func_08855354_inline(arg0->unk_30, T());
    arg0->unk_70 = 0;
    return arg0;
}
}
