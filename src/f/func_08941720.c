#include "common.h"

extern char D_08A03B6C[];
extern char D_08A03B7C[];
extern char D_08A03B8C[];
extern char D_08A03BA0[];
extern char D_08A03BB0[];
extern char D_08A03BBC[];
extern void *D_08AD1E28[];
void func_08822B3C(char *, char *);
s32 *func_08868E8C(void *, s32, char *);

s32 func_08941720(void *arg0, u32 arg1) {
    char buf[0x100];
    char *p;
    s32 n;

    p = buf;
    n = 0x100;
    if (p != NULL) {
        do {
            *p++ = 0;
        } while (--n);
    }
    switch (arg1) {
    case 0:
        func_08822B3C(buf, D_08A03B6C);
        break;
    case 1:
    case 4:
        func_08822B3C(buf, D_08A03B7C);
        break;
    case 2:
        func_08822B3C(buf, D_08A03B8C);
        break;
    case 6:
        func_08822B3C(buf, D_08A03BA0);
        break;
    case 5:
        func_08822B3C(buf, D_08A03BB0);
        break;
    case 7:
        func_08822B3C(buf, D_08A03BBC);
        break;
    case 3:
    default:
        return 0;
    }
    return *func_08868E8C(D_08AD1E28[0] != NULL ? D_08AD1E28[0] : NULL, 0xF, buf);
}
