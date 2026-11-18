#include "common.h"

typedef struct {
    u8 pad_00[0xE];
    u16 unk_0E;
} C_088C11CC;

typedef struct {
    u8 pad_00[0xC4];
    C_088C11CC *unk_C4;
} B_088C11CC;

typedef struct {
    u8 pad_00[0x10];
    s32 unk_10;
} D_088C11CC;

typedef struct {
    u8 pad_00[0xC];
    D_088C11CC *unk_0C;
    s32 unk_10;
    B_088C11CC **unk_14;
    s32 unk_18;
} A_088C11CC;

typedef struct {
    u8 pad_00[0x18];
} E_088C11CC;

void func_08813E98(s32);
s32 func_088CB0F8(s32, s32, s32);
void func_08815D9C(s32, s32, s32, s32, s32);
void func_08858260(s32, s32, s32, s32, s32, E_088C11CC *);
E_088C11CC *func_08859B14(s32);
s32 func_088C0938(s32, B_088C11CC *, E_088C11CC *);

void func_088C11CC(s32 arg0, A_088C11CC *arg1) {
    B_088C11CC **list;
    s32 i;
    s32 n;
    E_088C11CC *buf;
    s32 a0;
    s32 a1;
    s32 a2;
    s32 a3;
    s32 t0;
    s32 k;
    s32 j;

    if (arg1->unk_18 <= 0) {
        return;
    }
    list = arg1->unk_14;
    n = 0;
    for (i = arg1->unk_18 - 1; i >= 0; i--) {
        if (list[i]->unk_C4->unk_0E & 0x10) {
            n += 4;
        } else {
            n += 1;
        }
    }
    buf = func_08859B14(n * 0x60);
    if (buf == NULL) {
        return;
    }
    func_08813E98(func_088CB0F8(arg1->unk_0C->unk_10, 0, 0));
    a2 = 3;
    a0 = 0;
    a1 = 2;
    a3 = 0;
    t0 = 0;
    switch (arg1->unk_10) {
    case 0:
        break;
    case 1:
        break;
    case 2:
        a0 = 0;
        a1 = 2;
        a2 = 10;
        a3 = 0;
        t0 = -1;
        break;
    case 3:
        a0 = 2;
        a1 = 2;
        a2 = 10;
        a3 = 0;
        t0 = -1;
        break;
    }
    func_08815D9C(a0, a1, a2, a3, t0);
    k = 0;
    for (j = arg1->unk_18 - 1; j >= 0; j--) {
        k += func_088C0938(arg0, list[j], buf + k);
    }
    func_08858260(4, 0x19F, 4, n, 0, buf);
}
