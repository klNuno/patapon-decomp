#include "common.h"


typedef struct {
    u8 unk_00[16];
} H;
typedef struct {
    u8 pad_00[0x108];
    s32 unk_108;
} N;

typedef struct {
    u8 pad_00[0x1514];
    s32 unk_1514;
    u8 pad_1518[0x1468];
    u8 unk_2980[4];
    u8 pad_2984[0x2219C];
    u8 unk_24B20[4];
    u8 pad_24B24[0x11FE4];
    u8 * unk_36B08;
    u8 pad_36B0C[0x54];
    u8 unk_36B60[4];
    u8 pad_36B64[0xC6EC];
    u8 unk_43250[4];
    u8 pad_43254[0x10A6C];
    u8 unk_53CC0[4];
} P;
typedef struct {
    u8 pad_00[0x10];
    s32 unk_10;
    u8 pad_14[0x36C];
    u8 unk_380[4];
    u8 pad_384[0x3C];
    P * unk_3C0;
    s32 unk_3C4;
    u8 pad_3C8[0x1180];
    H unk_1548[9];
} S;

extern u8 *D_08AD1E28[];
extern char D_08A03B24[];
extern char D_08A03B34[];
extern char D_08A03B4C[];
extern char D_08A03B60[];
void *func_08827A50(s32, s32);
void *func_0888D040(H *, s16);
void *func_088A94B0(void *, s32, s32, s32, s32);
void func_088E5F98(H *, void *);
void func_088E5FDC(H *, void *, s32);
void *func_088E6730(void *, P *, s32);
void *func_088EEA20(void *, s32, s32, s32);
void *func_088FBCE8(void *);
void *func_08911884(void *, s32);
void *func_08922BAC(void *);
void *func_08924EFC(void *, u8 *);
void *func_0892EA5C(void *, s32, u8 *);
void *func_089379F0(void *, u8 *, u8 *);
void func_08940544(s32 *, void *, s32, s32);
void func_0894065C(s32 *, void *);
void func_08940664(s32 *, void *);
void func_08941528(void *, s32, void *);
N *func_0896CE18(void *, char *, s32, s32);

s32 func_08941050(S *arg0) {
    s32 tempCC;
    s32 tempC8;
    s32 tempC4;
    H h0, h1, h2, h3, h4, h5, h6, h7, h8;
    s32 q0, q1, q2, q3, q4, q5, q6, q7, q8;
    s32 n;
    void *p;
    u8 *t;
    N *r;
    s32 k;
    func_08940664(&tempC8, arg0->unk_380);
    func_0894065C(&tempC4, arg0->unk_380);
    func_08940544(&tempCC, arg0->unk_380, tempC8, tempC4);
    t = D_08AD1E28[0];
    r = func_0896CE18((t != NULL ? t : NULL) + 0xEA8D0, D_08A03B24, 0, 1);
    r = func_0896CE18(r, D_08A03B34, 0, 1);
    r = func_0896CE18(r, D_08A03B4C, 1, 0);
    r = func_0896CE18(r, D_08A03B60, 0, 1);
    n = arg0->unk_10;
    k = r->unk_108;
    p = func_08827A50(0x10, n);
    if (p != NULL) {
        p = func_088FBCE8(p);
    }
    func_088E5FDC(&h0, p, n);
    func_088E5F98(&h0, &arg0->unk_1548[0]);
    func_0888D040(&h0, -1);
    n = arg0->unk_10;
    p = func_08827A50(0x20, n);
    if (p != NULL) {
        p = func_08911884(p, 0);
    }
    func_088E5FDC(&h1, p, n);
    func_088E5F98(&h1, &arg0->unk_1548[1]);
    func_0888D040(&h1, -1);
    n = arg0->unk_10;
    p = func_08827A50(0x1C, n);
    if (p != NULL) {
        p = func_088E6730(p, arg0->unk_3C0, k);
    }
    func_088E5FDC(&h2, p, n);
    func_088E5F98(&h2, &arg0->unk_1548[2]);
    func_0888D040(&h2, -1);
    n = arg0->unk_10;
    p = func_08827A50(0x24, n);
    if (p != NULL) {
        p = func_088A94B0(p, arg0->unk_10, (s32)arg0->unk_3C0->unk_36B60, (s32)arg0->unk_3C0, arg0->unk_3C4);
    }
    func_088E5FDC(&h3, p, n);
    func_088E5F98(&h3, &arg0->unk_1548[3]);
    func_0888D040(&h3, -1);
    n = arg0->unk_10;
    p = func_08827A50(0x10, n);
    if (p != NULL) {
        p = func_08922BAC(p);
    }
    func_088E5FDC(&h4, p, n);
    func_088E5F98(&h4, &arg0->unk_1548[4]);
    func_0888D040(&h4, -1);
    n = arg0->unk_10;
    p = func_08827A50(0x18, n);
    if (p != NULL) {
        p = func_089379F0(p, arg0->unk_3C0->unk_2980, arg0->unk_3C0->unk_24B20);
    }
    func_088E5FDC(&h5, p, n);
    func_088E5F98(&h5, &arg0->unk_1548[5]);
    func_0888D040(&h5, -1);
    n = arg0->unk_10;
    p = func_08827A50(0x14, n);
    if (p != NULL) {
        p = func_08924EFC(p, arg0->unk_3C0->unk_36B08 + 0x110);
    }
    func_088E5FDC(&h6, p, n);
    func_088E5F98(&h6, &arg0->unk_1548[6]);
    func_0888D040(&h6, -1);
    n = arg0->unk_10;
    p = func_08827A50(0x14, n);
    if (p != NULL) {
        p = func_0892EA5C(p, arg0->unk_10, arg0->unk_3C0->unk_53CC0);
    }
    func_088E5FDC(&h7, p, n);
    func_088E5F98(&h7, &arg0->unk_1548[7]);
    func_0888D040(&h7, -1);
    n = arg0->unk_10;
    p = func_08827A50(0x228, n);
    if (p != NULL) {
        p = func_088EEA20(p, arg0->unk_3C0->unk_1514, (s32)arg0->unk_3C0->unk_43250, arg0->unk_3C4);
    }
    func_088E5FDC(&h8, p, n);
    func_088E5F98(&h8, &arg0->unk_1548[8]);
    func_0888D040(&h8, -1);
    func_0894065C(&q0, arg0->unk_380);
    func_08941528(arg0->unk_380, q0, &arg0->unk_1548[0]);
    func_0894065C(&q1, arg0->unk_380);
    func_08941528(arg0->unk_380, q1, &arg0->unk_1548[1]);
    func_0894065C(&q2, arg0->unk_380);
    func_08941528(arg0->unk_380, q2, &arg0->unk_1548[2]);
    func_0894065C(&q3, arg0->unk_380);
    func_08941528(arg0->unk_380, q3, &arg0->unk_1548[3]);
    func_0894065C(&q4, arg0->unk_380);
    func_08941528(arg0->unk_380, q4, &arg0->unk_1548[4]);
    func_0894065C(&q5, arg0->unk_380);
    func_08941528(arg0->unk_380, q5, &arg0->unk_1548[5]);
    func_0894065C(&q6, arg0->unk_380);
    func_08941528(arg0->unk_380, q6, &arg0->unk_1548[6]);
    func_0894065C(&q7, arg0->unk_380);
    func_08941528(arg0->unk_380, q7, &arg0->unk_1548[7]);
    func_0894065C(&q8, arg0->unk_380);
    func_08941528(arg0->unk_380, q8, &arg0->unk_1548[8]);
    return 1;
}

