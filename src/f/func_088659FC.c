#include "common.h"

typedef struct {
    u8 pad_00[0x18];
} E_088C11CC;

typedef struct {
    s32 unk_00;
    s32 unk_04;
} L_0893CEA8;

typedef struct {
    u32 unk_00;
    u8 pad_04[8];
} T;

typedef struct {
    T unk_00[6];
} U;

extern U D_089F8C60[];

void func_08814BB4(s32);
s32 func_08814C0C(s32);
void func_088155E4(s32);
void func_0881F120(void *, void *, s32);
void func_088581F4(s32, s32, s32, s32, E_088C11CC *);
E_088C11CC *func_08859B14(s32);
void func_08864A30(L_0893CEA8 *);
void func_08864A68(L_0893CEA8 *, s32);

void func_088659FC(f32 arg0, f32 arg1, f32 arg2, f32 arg3, f32 arg4) {
    U a;
    L_0893CEA8 b;
    f32 h = 0.5f, z = 0.0f, o = 1.0f;
    f32 x, y;
    u32 u;
    u32 v;
    E_088C11CC *t;

    x = arg4 * h;
    u = (u32)(255.0f * (h + x)) << 24;
    y = arg4 * o;
    v = (u32)(255.0f * (z + y)) << 24;

    a = D_089F8C60[0];
    a.unk_00[0].unk_00 = u;
    a.unk_00[1].unk_00 = u;
    a.unk_00[2].unk_00 = v;
    a.unk_00[3].unk_00 = v;
    a.unk_00[4].unk_00 = v;
    a.unk_00[5].unk_00 = v;

    t = func_08859B14(sizeof(a));
    if (t != NULL) {
        func_0881F120(t, &a, sizeof(a));
        func_08864A30(&b);
        func_088155E4(1);
        func_08814C0C(9);
        func_08814C0C(0xA);
        func_08814C0C(0xB);
        func_08814C0C(1);
        func_08814C0C(0);
        func_08814C0C(1);
        func_08814BB4(4);
        func_088581F4(4, 0x80011C, 6, 0, t);
        func_08864A68(&b, -1);
    }
}
