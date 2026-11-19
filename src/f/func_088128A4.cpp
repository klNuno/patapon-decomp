#include "common.h"

extern "C" {
typedef struct {
    u32 unk_00;
    u32 unk_04;
    u32 unk_08;
} T;

void __throw(void *, void *, void (*)(void));
void *func_0880FDF4(T *, char *);
void func_0880FD2C(void);
extern char D_089F6838[];
extern char D_089F695C[];

void func_088128A4(void) {
    T temp;
    __throw(D_089F6838, func_0880FDF4(&temp, D_089F695C), func_0880FD2C);
}
}
