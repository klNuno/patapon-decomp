#include "common.h"

u32 func_08822BC4(char *);
s32 func_088243B0(s32);

void func_0893D718(char *arg0, char *arg1) {
    u32 len;
    u32 i;
    s32 c;
    char *p;
    char *q;

    len = func_08822BC4(arg0);
    for (i = 0; i < len; i++) {
        p = &arg0[i];
        c = (u8)p[0];
        if ((c >= 0x81 && c <= 0x91) || (c >= 0xE0 && c < 0xFF)) {
            q = &arg1[i];
            q[0] = p[0];
            q[1] = p[1];
            i++;
        } else {
            arg1[i] = func_088243B0(c);
        }
    }
    arg1[len] = 0;
}
