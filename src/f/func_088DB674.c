#include "common.h"

s32 *func_08868F6C(void *, s32, s32);
s32 func_0888B03C(s32 *, char *);
extern void *D_08AD1E28[];
extern char D_089FC160[];
extern char D_089FC174[];
extern char D_089FC184[];

void func_088DB674(void)
{
    s32 temp;

    temp = *func_08868F6C(D_08AD1E28[0] != NULL ? D_08AD1E28[0] : NULL, 4, 0);
    temp = func_0888B03C(&temp, D_089FC160);
    temp = func_0888B03C(&temp, D_089FC174);
    func_0888B03C(&temp, D_089FC184);
}
