#include "common.h"

extern char D_08A03DFC[];
extern void *D_08AD1E28[];
void func_08822B3C(char *, char *);
s32 *func_08868E8C(void *, s32, char *);

s32 func_089453C4(void) {
    char temp[0x100];
    char *p = temp;
    s32 n = 0x100;
    if (p != NULL) {
        do {
            *p++ = 0;
        } while (--n);
    }
    func_08822B3C(temp, D_08A03DFC);
    return *func_08868E8C(D_08AD1E28[0] != NULL ? D_08AD1E28[0] : NULL, 0xF, temp);
}
