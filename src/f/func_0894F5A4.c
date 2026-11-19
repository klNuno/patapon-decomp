#include "common.h"

typedef struct {
    u8 pad_00[0x1A080];
    s32 unk_1A080;
    u8 pad_1A084[0xF0];
    s32 unk_1A174;
} T;

extern void func_0894F41C(T *, s32);
extern void func_0894E814(T *, s32);

void func_0894F5A4(T *arg0, s32 arg1) {
    if (arg0->unk_1A080 != 0) {
        func_0894F41C(arg0, 1);
        func_0894E814(arg0, (arg1 != 0) ^ 1);
        arg0->unk_1A174 = 0;
    }
}
