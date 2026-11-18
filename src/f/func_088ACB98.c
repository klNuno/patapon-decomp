#include "common.h"

u16 *func_08826ABC(u16 *, u16 *);
void func_0882687C(u16 *, u16 *);
void func_08826830(u16 *, u16 *);

void func_088ACB98(u16 *arg0, u16 *arg1, u16 *arg2) {
    u16 buf[0x300];
    u16 *p;
    u32 n1;
    u32 n2;
    u16 *q;

    p = arg1;
    n1 = 0;
    while (*p != 0) {
        if (n1 >= 0x180) {
            n1 = 0;
            break;
        }
        p++;
        n1++;
    }
    p = arg2;
    n2 = 0;
    while (*p != 0) {
        if (n2 >= 0x180) {
            n2 = 0;
            break;
        }
        p++;
        n2++;
    }
    while (*arg0 != 0) {
        q = func_08826ABC(arg0, arg1);
        if (q == NULL) {
            break;
        }
        *q = 0;
        func_0882687C(buf, q + n1);
        func_08826830(arg0, arg2);
        func_08826830(arg0, buf);
        arg0 = q + n2;
    }
}
