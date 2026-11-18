#include "common.h"

void *func_08807190(s32, void *);
void func_0886A528(void *, void *);
void func_088CAC40(void *, s32);
void *func_088E0E44(void *, void *);
void *func_088E0E64(void *);

void func_088E116C(u8 *arg0, u8 *arg1) {
    void *temp;

    func_088CAC40(*(void **)(arg1 + 0x58), 0);
    temp = func_08807190(0x60, func_088E0E44(arg0 + 4, func_088E0E64(arg0 + 4)));
    if (temp != NULL) {
        func_0886A528(temp, arg1);
    }
    (*(s32 *)(arg0 + 0xC00C))++;
}
