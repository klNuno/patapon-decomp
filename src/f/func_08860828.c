#include "common.h"

u32 func_08822BC4(char *);
s32 func_088243D4(s32);

void func_08860828(char *arg0, char *arg1) {
    u32 len;
    u32 i;
    s32 c;
    char *s;
    char *d;

    len = func_08822BC4(arg0);
    for (i = 0; i < len; i++) {
        s = arg0 + i;
        c = (u8)*s;
        if ((c >= 0x81 && c <= 0x91) || (c >= 0xE0 && c < 0xFF)) {
            d = arg1 + i;
            d[0] = s[0];
            i++;
            d[1] = s[1];
        } else {
            arg1[i] = func_088243D4(c);
        }
    }
    arg1[len] = 0;
}
