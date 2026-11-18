#include "common.h"

extern void *D_08AD1E28[];
extern char D_089FC75C[];
extern char D_089FC770[];

s32 *func_08868F6C(void *, s32, s32);
s32 func_0888B03C(s32 *, char *);

s32 *func_088E5B9C(s32 *arg0, char *arg1) {
    s32 sp1C;
    s32 sp18;

    *arg0 = 0;
    sp1C = *func_08868F6C(D_08AD1E28[0] != NULL ? D_08AD1E28[0] : NULL, 4, 0);
    sp1C = func_0888B03C(&sp1C, D_089FC75C);
    sp18 = func_0888B03C(&sp1C, D_089FC770);
    *arg0 = func_0888B03C(&sp18, arg1);
    return arg0;
}
