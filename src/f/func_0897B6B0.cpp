#include "common.h"

extern "C" {
typedef struct N N;
typedef struct T T;

u8 *func_0897B718(T *, N *);
void *func_08807190(s32, void *);
char *func_0897B6F8(char *, char *);

struct S {};

static inline char *func_0897B6B0_inline(T *arg0, const S &) {
    return (char *)func_08807190(0xC, func_0897B718(arg0, (N *)arg0));
}

void func_0897B6B0(T *arg0, char *arg1) {
    char *temp = func_0897B6B0_inline(arg0, S());
    if (temp != NULL) {
        func_0897B6F8(temp, arg1);
    }
}
}
