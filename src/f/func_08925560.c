#include "common.h"

void func_0880416C(void *);
void func_08925370(void *, s16);
void func_089254FC(void *, s16);

void *func_08925560(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        if ((u32)arg0 + 8 != 0) {
            func_08925370((u8 *)arg0 + 0x428, 0);
            func_089254FC((u8 *)arg0 + 8, 0);
        }
        if (arg1 > 0) {
            func_0880416C(arg0);
        }
    }
    return arg0;
}
