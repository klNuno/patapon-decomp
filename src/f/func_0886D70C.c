#include "common.h"

typedef struct {
    u8 pad_00[0x108];
    s32 unk_108;
} N;

typedef struct {
    u8 pad_00[0x1510];
    u8 unk_1510;
    u8 pad_1511[3];
    u8 unk_1514[4];
} A;

s32 func_088586E8(void);
void func_088782C4(s32, s32);
void func_0887C2F8(void *);
s32 func_0888B03C(s32 *, char *);
void func_088AD74C(s32, s32);
N *func_0896CE18(void *, char *, s32, s32);
void func_0897B8A4(void *, char *, s32);
s32 func_089B53D8(s32);
extern char D_089F90C8[];
extern char D_089F90D8[];
extern char D_089F90EC[];
extern char D_089F9108[];
extern char D_089F9118[];
extern char D_089F9124[];
extern char D_089F9138[];
extern char D_089F914C[];
extern char D_089F9160[];
extern char D_089F916C[];
extern u8 *D_08AD1E28[];
extern void *D_08AD2070[];

void func_0886D70C(A *arg0) {
    N *b;
    u8 *g;
    N *h;
    N *a;
    s32 t;
    s32 t2;
    s32 sp1C;
    s32 sp18;
    s32 sp14;

    if (D_08AD1E28[0] != NULL) {
        g = D_08AD1E28[0];
    } else {
        g = NULL;
    }
    h = func_0896CE18(func_0896CE18(func_0896CE18(&g[0xEA8D0], D_089F90C8, 0, 1), D_089F90D8, 0, 1), D_089F90EC, 0, 1);
    a = func_0896CE18(h, D_089F9108, 0, 1);
    b = func_0896CE18(h, D_089F9118, 0, 1);
    sp1C = a->unk_108;
    sp18 = func_0888B03C(&sp1C, D_089F9124);
    func_088AD74C(func_0888B03C(&sp18, D_089F9138), func_0888B03C(&sp18, D_089F914C));
    sp14 = b->unk_108;
    t2 = func_0888B03C(&sp14, D_089F9160);
    func_088782C4(func_089B53D8(func_088586E8()), t2);
    func_0897B8A4(arg0->unk_1514, D_089F916C, func_0888B03C(&sp14, D_089F916C));
    if (arg0->unk_1510 == 0) {
        func_0887C2F8(D_08AD2070[0] != NULL ? D_08AD2070[0] : NULL);
    }
}
