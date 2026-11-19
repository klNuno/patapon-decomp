#include "common.h"

typedef struct {
    s32 unk_00;
    s32 unk_04;
} L_0893CEA8;

typedef struct {
    f32 unk_00, unk_04;
} V;

typedef struct {
    f32 unk_00, unk_04, unk_08, unk_0C;
} R;

typedef struct {
    R unk_00[4];
    u8 pad_40[8];
} M;

typedef struct {
    u8 pad_00[4];
    s32 unk_04;
} T;

extern f32 D_08A038B0[];
extern f32 D_08A038B8[];
extern f32 D_08A038C0[];
extern f32 D_08A038C8[];
extern f32 D_089E8608[];

void func_08814BB4(s32);
s32 func_08814C0C(s32);
void func_08815514(s32);
void func_088157AC(s32, s32, s32, s32);
void func_088157E8(s32, s32);
void func_08815814(s32, s32);
void func_088159A8(s32, s32, s32, s32, s32);
void func_08815A6C(void);
void func_08864A30(L_0893CEA8 *);
void func_08864A68(L_0893CEA8 *, s32);
void func_088651A4(void *, M *, void *, s32, s32);
void func_0886575C(s32, s32, s32);
extern s32 func_08865870(void);
void func_08866B54(M *, s32, void *);

void func_08939DCC(T *arg0, f32 arg1, V *arg2, void *arg3) {
    L_0893CEA8 a;
    volatile f32 b[8];
    M c;
    R d, e, f, g;
    f32 x, y, z, t;
    u32 i;

    func_08864A30(&a);
    b[0] = D_08A038B0[0];
    b[1] = D_08A038B0[1];
    b[2] = D_08A038B8[0];
    b[3] = D_08A038B8[1];
    b[4] = D_08A038C0[0];
    b[5] = D_08A038C0[1];
    b[6] = D_08A038C8[0];
    t = arg1;
    b[7] = D_08A038C8[1];
    x = D_089E8608[0];
    z = *(volatile f32 *)D_089E8608;
    b[2] = z;
    b[6] = z;
    func_0886575C(0, 1, 1);
    func_08815514(-1);
    func_08815A6C();
    func_08814BB4(9);
    func_08815814(0, 0);
    func_088157E8(7, 1);
    func_088157AC(1, 0, 0, 0);
    func_088159A8(0, 0x200, 0x200, 0x200, arg0->unk_04);
    z = arg2->unk_04;
    y = arg2->unk_00;
    g.unk_00 = y;
    g.unk_04 = z;
    *(u32 *)&g.unk_0C = 0x3F800000;
    g.unk_08 = 0.0f;
    f.unk_00 = 0.0f;
    f.unk_04 = 0.0f;
    f.unk_08 = t;
    f.unk_0C = 0.0f;
    e.unk_00 = 0.0f;
    e.unk_04 = t;
    d.unk_00 = t;
    e.unk_08 = 0.0f;
    e.unk_0C = 0.0f;
    d.unk_04 = 0.0f;
    d.unk_08 = 0.0f;
    d.unk_0C = 0.0f;
    func_08866B54(&c, 0, &d);
    func_08866B54(&c, 1, &e);
    func_08866B54(&c, 2, &f);
    func_08866B54(&c, 3, &g);
    func_08814BB4(5);
    i = 0;
    do {
        func_088651A4((void *)b, &c, arg3, 0, 1);
        y = b[0] + x;
        z = b[4] + x;
        b[0] = y;
        b[4] = z;
        ++i;
    } while (i < 8U);
    func_08814C0C(5);
    func_08865870();
    func_08864A68(&a, -1);
}
