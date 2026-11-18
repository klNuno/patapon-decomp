#include "common.h"

void func_0881F5C0(void *, s32, s32);
void func_08822B3C(char *, char *);
s32 func_08822AD0(char *, char *);
s32 func_088243B0(s32);
char *func_08822F10(char *, s32);

s32 func_08885658(char *arg0, char *arg1) {
    char a[0x20];
    char b[0x20];
    char *ext;
    char *p;

    if (arg1 == NULL || *arg1 == 0) {
        return 1;
    }
    ext = func_08822F10(arg0, '.');
    if (ext == NULL) {
        return 1;
    }
    func_0881F5C0(a, 0, 0x20);
    func_0881F5C0(b, 0, 0x20);
    func_08822B3C(a, ext);
    func_08822B3C(b, arg1);
    for (p = a; *p != 0; p++) {
        *p = func_088243B0(*p);
    }
    for (p = b; *p != 0; p++) {
        *p = func_088243B0(*p);
    }
    if (ext != NULL) {
        return func_08822AD0(a, b) == 0;
    } else {
        return b[0] == 0;
    }
}
