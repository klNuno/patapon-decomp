#include "common.h"

typedef struct {
    u8 pad_00[0x506F0];
    u8 unk_506F0[0x10];
} Q_0898A400;

typedef struct {
    u8 pad_00[0x10];
    s32 unk_10;
    u8 pad_14[0x36C];
    u8 unk_380[0x40];
    Q_0898A400 *unk_3C0;
    u8 unk_3C4[0x10];
    u8 unk_3D4[0x10];
} S_0898A400;

typedef struct {
    u8 pad_00[0x10];
} H_0898A400;

typedef struct {
    u8 pad_00[0x108];
    s32 unk_108;
} N_0898A400;

typedef struct {
    u8 pad_00[0xEA8D0];
    u8 unk_EA8D0[0x10];
} G_0898A400;

extern G_0898A400 *D_08AD1E28[];
extern char D_08A062AC[];
extern char D_08A062BC[];
extern char D_08A062D8[];
extern char D_08A062E8[];
void *func_08827A50(s32, s32);
void *func_0888D040(H_0898A400 *, s16);
void func_088E5F98(H_0898A400 *, void *);
void func_088E5FDC(H_0898A400 *, void *, s32);
void *func_088FBCE8(void *);
void *func_088A94B0(void *, s32, s32, s32, s32);
s32 func_088C6484(void *);
N_0898A400 *func_0896CE18(void *, char *, s32, s32);
void func_08940544(s32 *, void *, s32, s32);
void func_0894065C(s32 *, void *);
void func_08940664(s32 *, void *);
void func_08941528(void *, s32, void *);

s32 func_0898A400(S_0898A400 *arg0) {
    s32 sp5C;
    s32 sp58;
    s32 sp54;
    H_0898A400 h;
    H_0898A400 h2;
    s32 sp30;
    s32 sp2C;
    s32 x;
    s32 temp;
    void *p;
    void *q;

    func_08940664(&sp58, arg0->unk_380);
    func_0894065C(&sp54, arg0->unk_380);
    func_08940544(&sp5C, arg0->unk_380, sp58, sp54);
    x = func_0896CE18(func_0896CE18(func_0896CE18(func_0896CE18(func_0896CE18((D_08AD1E28[0] != NULL ? D_08AD1E28[0] : NULL)->unk_EA8D0, D_08A062AC, 0, 1), D_08A062BC, 0, 1), D_08A062D8, 1, 1), D_08A062D8, 1, 1), D_08A062E8, 0, 1)->unk_108;
    temp = arg0->unk_10;
    p = func_08827A50(0x10, temp);
    if (p != NULL) {
        p = func_088FBCE8(p);
    }
    func_088E5FDC(&h, p, temp);
    func_088E5F98(&h, arg0->unk_3C4);
    func_0888D040(&h, -1);
    temp = arg0->unk_10;
    q = func_08827A50(0x24, temp);
    if (q != NULL) {
        q = func_088A94B0(q, arg0->unk_10, func_088C6484(arg0->unk_3C0->unk_506F0), 0, x);
    }
    func_088E5FDC(&h2, q, temp);
    func_088E5F98(&h2, arg0->unk_3D4);
    func_0888D040(&h2, -1);
    func_0894065C(&sp30, arg0->unk_380);
    func_08941528(arg0->unk_380, sp30, arg0->unk_3C4);
    func_0894065C(&sp2C, arg0->unk_380);
    func_08941528(arg0->unk_380, sp2C, arg0->unk_3D4);
    return 1;
}
