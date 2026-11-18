#include "common.h"

typedef struct {
    u8 pad_00[0x78];
    s32 unk_78;
    s32 unk_7C;
    u8 pad_80[0x20];
} E_089316C4;

typedef struct {
    s32 unk_00;
    u8 pad_04[0xC];
    E_089316C4 unk_10[4];
    s32 unk_290;
} A_089316C4;

extern s32 D_089E7240[];
extern s32 D_089E7248[];
extern s32 D_089E725C[];
extern s32 D_089E7264[];
extern s32 D_089E72AC[];
extern s32 D_089E72C8[];

void func_08882530(s32, E_089316C4 *);
void func_088812A4(E_089316C4 *, s32);

void func_089316C4(A_089316C4 *arg0) {
    s32 a[4];
    s32 b[4];
    u8 *p;
    s32 n;
    u32 i;

    p = (u8 *)a;
    n = 0x10;
    if (p != NULL) {
        do { *p++ = 0; } while (--n);
    }
    a[0] = D_089E7248[0];
    a[2] = D_089E7248[0];
    a[1] = D_089E7264[0];
    a[3] = D_089E7264[0];
    p = (u8 *)b;
    n = 0x10;
    if (p != NULL) {
        do { *p++ = 0; } while (--n);
    }
    b[0] = D_089E72AC[0];
    b[1] = D_089E72C8[0];
    b[2] = D_089E725C[0];
    b[3] = D_089E7240[0];
    for (i = 0; i < 4; i++) {
        func_08882530(arg0->unk_290, &arg0->unk_10[i]);
        arg0->unk_10[i].unk_78 = a[i];
        arg0->unk_10[i].unk_7C = b[i];
        func_088812A4(&arg0->unk_10[i], 1);
    }
    arg0->unk_00 = 1;
}
