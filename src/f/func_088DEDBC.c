#include "common.h"

extern f32 D_089FC308[];
extern f32 D_089FC310[];
extern f32 D_089FC318[];
extern f32 D_089FC320[];
extern f32 D_089FC328[];
extern f32 D_089FC330[];
extern f32 D_089FC338[];
extern f32 D_089FC340[];
extern f32 D_089FC348[];
extern f32 D_089FC350[];
extern f32 D_089FC358[];
extern char D_089FC360[];
extern char D_089E1498[];
extern u8 *D_08AD6838[];

void func_088226BC(char *, char *, ...);
s32 func_0884EBC0(char *arg0, s32 arg1);
s32 func_08853004(s32);
void func_088AE350(u32, char *, s32);
void func_088B3120(u8 *, s32, char *);

void func_088DEDBC(u8 *arg0) {
    f32 a[11];
    f32 b[11];
    char c[0x100];
    s32 h;
    u32 i;
    s32 *p;
    volatile u32 *q;
    s32 x;
    u32 y;

    a[0] = D_089FC308[0];
    a[1] = D_089FC308[1];
    a[2] = D_089FC310[0];
    a[3] = D_089FC310[1];
    a[4] = D_089FC318[0];
    a[5] = D_089FC318[1];
    a[6] = D_089FC320[0];
    a[7] = D_089FC320[1];
    a[8] = D_089FC328[0];
    a[9] = D_089FC328[1];
    a[10] = D_089FC330[0];
    b[0] = D_089FC330[1];
    b[1] = D_089FC338[0];
    b[2] = D_089FC338[1];
    b[3] = D_089FC340[0];
    b[4] = D_089FC340[1];
    b[5] = D_089FC348[0];
    b[6] = D_089FC348[1];
    b[7] = D_089FC350[0];
    b[8] = D_089FC350[1];
    b[9] = D_089FC358[0];
    b[10] = D_089FC358[1];
    h = func_08853004((s32)(arg0 + 0x192C));
    i = 0;
    p = (s32 *)a;
    q = (u32 *)b;
    do {
        x = func_0884EBC0((char *)h, *p) + 1;
        if (x >= 100 || x < 0) {
            func_088AE350(*q, D_089E1498, x);
        } else {
            y = *q;
            if (y < 0x40U) {
                func_088226BC(c, D_089FC360, x);
                func_088B3120(D_08AD6838[0] + (y << 6), 0x40, c);
            }
        }
        i++;
        p++;
        q++;
    } while (i < 11);
}
