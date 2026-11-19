#include "common.h"

char *func_0891C6C8(s32);
void func_0897B8A4(void *, char *, s32);

void func_089D5920(s32 *arg0, void *arg1)
{
    s32 *base;
    void *a;
    s32 i;
    s32 *p;

    base = arg0;
    a = arg1;
    i = 0;
    p = base;
    do {
        if (*(volatile s32 *)((u32)base + i * 4U) != 0) {
            char *temp = func_0891C6C8(i);
            func_0897B8A4(a, temp, *p);
        }
        i++;
        p++;
    } while (i < 0x88);
}
