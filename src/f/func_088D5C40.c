#include "common.h"

void func_0880416C(void *);
void func_088D5A50(void *, s16);
void func_088D5BDC(void *, s16);

void *func_088D5C40(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        if ((u32)arg0 + 4 != 0) {
            func_088D5A50((u8 *)arg0 + 0xC24, 0);
            func_088D5BDC((u8 *)arg0 + 4, 0);
        }
        if (arg1 > 0) {
            func_0880416C(arg0);
        }
    }
    return arg0;
}
