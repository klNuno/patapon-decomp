#include "common.h"

extern void func_0881F120(void *, void *, s32);
extern s32 func_08822AD0(char *, char *);
u32 func_0882C214(s32);
char *func_0882C278(s32, u32);
void func_08855354(char *);

void func_0893EEE0(s32 *arg0, char *arg1, char *arg2) {
    u32 n;
    u32 i;
    char *e;

    n = func_0882C214(*arg0);
    for (i = 0; i < n; i++) {
        e = func_0882C278(*arg0, i);
        if (func_08822AD0(arg2, e + 0x150) == 0) {
            func_0881F120(arg1, e + 0xF0, 0x40);
            return;
        }
    }
    func_08855354(arg1);
}
