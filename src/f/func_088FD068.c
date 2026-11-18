#include "common.h"

extern s16 D_089FE450[];
extern s16 D_089FE45C[];

void func_088FD068(u16 *arg0) {
    s16 a[5];
    u16 b[5];
    s16 *s;
    s16 *d;
    s32 n;
    u32 i;
    u32 j;

    s = D_089FE450;
    d = a;
    n = 5;
    do {
        n--;
        *d++ = *s++;
    } while (n > 0);
    s = D_089FE45C;
    d = (s16 *)b;
    n = 5;
    do {
        n--;
        *d++ = *s++;
    } while (n > 0);
    for (i = 0; i < 32 && *arg0 != 0; arg0++, i++) {
        for (j = 0; j < 5; j++) {
            if (*arg0 == (u16)a[j]) {
                *arg0 = b[j];
                break;
            }
        }
    }
}
