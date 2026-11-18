#include "common.h"

typedef struct {
    u8 pad_00[0x10];
    s32 unk_10;
    u8 pad_14[0x36C];
    u8 unk_380[0x40];
    s32 unk_3C0;
    u8 unk_3C4[0x10];
    u8 unk_3D4[0x10];
    u8 unk_3E4[0x10];
} S;

typedef struct {
    u8 pad_00[0x10];
} H;

void *func_08827A50(s32, s32);
void *func_0888D040(H *, s16);
void func_088E5F98(H *, void *);
void func_088E5FDC(H *, void *, s32);
void *func_088EEA20(void *, s32, s32, s32);
void *func_088FBCE8(void *);
void func_08940544(s32 *, void *, s32, s32);
void func_0894065C(s32 *, void *);
void func_08940664(s32 *, void *);
void func_08941528(void *, s32, void *);
s32 func_0897942C(s32);
s32 func_0897943C(s32);
void *func_08991F88(void *, s32, s32);

s32 func_0898C578(S *arg0) {
    s32 r;
    s32 b;
    s32 e;
    H h1;
    H h2;
    H h3;
    s32 e0;
    s32 e1;
    s32 e2;
    s32 temp;
    void *p;
    void *p2;
    s32 t2;

    func_08940664(&b, arg0->unk_380);
    func_0894065C(&e, arg0->unk_380);
    func_08940544(&r, arg0->unk_380, b, e);
    temp = arg0->unk_10;
    p = func_08827A50(0x10, temp);
    if (p != NULL) {
        p = func_088FBCE8(p);
    }
    func_088E5FDC(&h1, p, temp);
    func_088E5F98(&h1, arg0->unk_3C4);
    func_0888D040(&h1, -1);
    t2 = arg0->unk_10;
    p2 = func_08827A50(0x228, t2);
    if (p2 != NULL) {
        p2 = func_088EEA20(p2, func_0897942C(arg0->unk_3C0), func_0897943C(arg0->unk_3C0), 0);
    }
    func_088E5FDC(&h2, p2, t2);
    func_088E5F98(&h2, arg0->unk_3D4);
    func_0888D040(&h2, -1);
    temp = arg0->unk_10;
    p = func_08827A50(0x18, temp);
    if (p != NULL) {
        p = func_08991F88(p, arg0->unk_10, arg0->unk_3C0);
    }
    func_088E5FDC(&h3, p, temp);
    func_088E5F98(&h3, arg0->unk_3E4);
    func_0888D040(&h3, -1);
    func_0894065C(&e0, arg0->unk_380);
    func_08941528(arg0->unk_380, e0, arg0->unk_3C4);
    func_0894065C(&e1, arg0->unk_380);
    func_08941528(arg0->unk_380, e1, arg0->unk_3D4);
    func_0894065C(&e2, arg0->unk_380);
    func_08941528(arg0->unk_380, e2, arg0->unk_3E4);
    return 1;
}
