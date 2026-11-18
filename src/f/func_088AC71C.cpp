#include "common.h"

extern "C" {
typedef struct Obj_08885980 Obj_08885980;
typedef struct {
    u8 pad_00[0x104];
    u32 unk_104;
    u8 pad_108[4];
    void *unk_10C;
    void *unk_110;
    s32 unk_114;
    u8 pad_118[0x14];
    u8 unk_12C[0x174];
    u8 unk_2A0[0x8C];
    u8 unk_32C;
    u8 pad_32D[7];
    u8 unk_334;
} S;

s32 func_08814C0C(s32);
void func_08814E2C(s32, u32, s32, char *, u8 *);
void func_0881F120(void *, void *, u32);
void func_0881F5C0(void *, s32, s32);
void func_08858F88(void *, s32, s32, void *, ...);
void func_0886575C(s32, s32, s32);
extern s32 func_08865870(void);
void func_08885980(Obj_08885980 *, s32, s32, void *);
void func_088AE388(void *, void *, f32 *, u8 *, f32, f32);
void func_088AE9E0(void *, f32 *, u8 *, f32, f32);
extern char D_089FB45C[], D_089FB460[];
extern u8 D_089FB42C[];
extern u8 D_089FB39C[], D_089FB3C0[], D_089FB3E4[], D_089FB408[], D_089FB490[], D_089FB49C[];
extern f32 D_089FB470[], D_089FB478[], D_089FB480[], D_089FB488[], D_089FB48C[];

void func_088AC71C(S *arg0) {
    u8 a[0x4000];
    f32 b[4], c[4];
    u8 e[0x10];
    u32 t;
    u8 *p;
    f32 x, y, z, w;
    void *q;

    if (arg0->unk_32C != 0) {
        b[0] = D_089FB470[0];
        b[1] = D_089FB470[1];
        b[2] = D_089FB478[0];
        b[3] = D_089FB478[1];
        func_0886575C((s32)b, 1, 1);
        func_08814C0C(9);
        func_08814E2C(2, 0x800980, 2, D_089FB45C, D_089FB42C);
        func_08814E2C(2, 0x800980, 2, D_089FB460, D_089FB42C);
        func_08865870();
        func_0881F5C0(a, 0, 0x4000);
        func_0881F120(a, arg0->unk_110, arg0->unk_114);
        x = D_089FB480[0];
        p = a;
        t = *(volatile u8 *)p - 0xFE;
        y = D_089FB480[1];
        c[0] = x;
        z = D_089FB488[0];
        c[1] = y;
        c[2] = z;
        c[3] = D_089FB48C[0];
        if (t < 2U) {
            func_088AE388(e, arg0->unk_2A0, c, p + 2, 240.0f, 48.0f);
        } else {
            func_088AE9E0(arg0->unk_2A0, c, p, 240.0f, 48.0f);
        }
        q = (arg0->unk_104 & 1) ? arg0->unk_10C : (u8 *)&arg0->unk_104 + 1;
        func_08858F88(arg0, 5, 1, D_089FB490, q);
        if (arg0->unk_334 != 0) {
            func_08858F88(arg0, 0xC, 0x18, D_089FB39C);
            func_08858F88(arg0, 0xC, 0x19, D_089FB3C0);
            func_08858F88(arg0, 0xC, 0x1A, D_089FB3E4);
            func_08858F88(arg0, 0xC, 0x1B, D_089FB3C0);
            func_08858F88(arg0, 0xC, 0x1C, D_089FB408);
        }
    } else {
        func_08885980((Obj_08885980 *)arg0->unk_12C, 5, 1, D_089FB49C);
    }
}
}
