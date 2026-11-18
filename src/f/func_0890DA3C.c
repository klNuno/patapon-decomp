#include "common.h"

typedef struct {
    s32 unk_00;
    s32 unk_04;
} K_0890DA3C;

typedef struct {
    u8 pad_00[0x74];
} E_0890DA3C;

typedef struct {
    E_0890DA3C *unk_00;
    s32 unk_04;
} V_0890DA3C;

typedef struct {
    u8 pad_00[0x74A4];
    V_0890DA3C unk_74A4;
    u8 pad_74AC[0x7E264 - 0x74AC];
    s32 unk_7E264;
} T_0890DA3C;

extern void func_0890E52C(T_0890DA3C *, K_0890DA3C *, char *, s32, s32);
extern char D_08A000C8[];
extern char D_08A000CC[];
extern char D_08A000D0[];
extern char D_08A000D4[];
extern char D_08A000D8[];
extern char D_08A000DC[];
extern char D_08A000E0[];
extern char D_08A000E4[];

void func_0890DA3C(T_0890DA3C *arg0) {
    V_0890DA3C *vp;
    E_0890DA3C *p;
    K_0890DA3C k0;
    K_0890DA3C k1;
    K_0890DA3C k2;
    K_0890DA3C k3;
    K_0890DA3C k4;
    K_0890DA3C k5;
    K_0890DA3C k6;
    K_0890DA3C k7;

    p = arg0->unk_74A4.unk_00;
    vp = &arg0->unk_74A4;
    if ((u32)p != (u32)(p + arg0->unk_74A4.unk_04)) {
        do {
            p++;
        } while (p != vp->unk_00 + arg0->unk_74A4.unk_04);
    }
    arg0->unk_74A4.unk_04 = 0;
    arg0->unk_7E264 = 0;
    k0.unk_00 = 0;
    k0.unk_04 = 0;
    func_0890E52C(arg0, &k0, D_08A000C8, 1, 1);
    k1.unk_00 = 1;
    k1.unk_04 = 0;
    func_0890E52C(arg0, &k1, D_08A000CC, 1, 1);
    k2.unk_00 = 2;
    k2.unk_04 = 0;
    func_0890E52C(arg0, &k2, D_08A000D0, 1, 1);
    k3.unk_00 = 3;
    k3.unk_04 = 0;
    func_0890E52C(arg0, &k3, D_08A000D4, 1, 1);
    k4.unk_00 = 4;
    k4.unk_04 = 0;
    func_0890E52C(arg0, &k4, D_08A000D8, 1, 1);
    k5.unk_00 = 0;
    k5.unk_04 = 1;
    func_0890E52C(arg0, &k5, D_08A000DC, 1, 1);
    k6.unk_00 = 1;
    k6.unk_04 = 1;
    func_0890E52C(arg0, &k6, D_08A000E0, 1, 1);
    k7.unk_00 = 2;
    k7.unk_04 = 1;
    func_0890E52C(arg0, &k7, D_08A000E4, 1, 1);
}
