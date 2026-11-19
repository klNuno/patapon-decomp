#include "common.h"

typedef struct {
    u8 pad_00[0x24];
    u8 unk_24[1];
} T;

extern void func_0894C8E4(char *);
void func_0889B528(void *, s32);
void func_0880416C(void *);

T *func_089505F4(T *arg0, s16 arg1) {
    if (arg0 != 0) {
        func_0894C8E4((char *)arg0);
        func_0889B528(arg0->unk_24, -1);
        if (arg1 > 0) {
            func_0880416C(arg0);
        }
    }
    return arg0;
}
