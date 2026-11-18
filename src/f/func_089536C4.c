#include "common.h"

typedef struct {
    u8 pad_00[0xA8];
} E_0895395C;

typedef struct {
    E_0895395C *unk_00;
    s32 unk_04;
} Vec_0895395C;

typedef struct {
    u8 pad_00[4];
    s32 unk_04;
    u8 pad_08[0xFCC - 0x8];
    Vec_0895395C unk_FCC;
    u8 pad_FD4[4];
    u8 unk_FD8[0x38];
    void *unk_1010;
    u8 pad_1014[4];
    f32 unk_1018;
    f32 unk_101C;
    f32 unk_1020;
    f32 unk_1024;
    u8 pad_1028[0x30];
    u8 unk_1058;
    u8 pad_1059[0x3B];
    s32 unk_1094;
    u8 pad_1098[0x1B8];
    u8 unk_1250;
    u8 unk_1251;
} Obj_0895395C;

typedef struct {
    s32 unk_00;
    void *unk_04;
} P_08912AF8;

typedef struct {
    u8 pad_00[0x30];
    s32 unk_30;
    u8 pad_34[0x4];
    P_08912AF8 *unk_38;
    u8 pad_3C[0x4];
    u8 unk_40[0x8];
    f32 unk_48;
    f32 unk_4C;
    f32 unk_50;
    u8 pad_54[0x4];
    u8 unk_58[0x20];
    s32 unk_78;
    s32 unk_7C;
    u8 unk_80;
    u8 pad_81[0x7];
    u8 unk_88[0x20];
    f32 unk_A8;
    f32 unk_AC;
    f32 unk_B0;
    f32 unk_B4;
    u8 pad_B8[0x4];
    s32 unk_BC;
    u8 unk_C0;
} E_08912AF8;

void *func_088D669C(void *, u8 *);
void func_088D68BC(E_08912AF8 *);
void func_08912D8C(Obj_0895395C *);
void func_088D6314(Obj_0895395C *, void *, void *, void *, s32, f32);
extern u8 D_089EA668[];
extern u8 D_089EA6D0[];
extern u8 D_089EA778[];
extern u8 D_089EA820[];
extern u8 D_089EA8C8[];
extern const u32 D_08A04A24[];
extern u8 D_08ADA298[];
extern u8 D_08ADA2C8[];
extern u8 D_08ADA358[];
extern u8 D_08ADA538[];
extern u8 D_08ADA718[];
extern u8 D_08ADA8F8[];

typedef struct {
    u8 unk_00;
    u8 pad_01[3];
} B;

typedef struct {
    u8 unk_00[0x30];
} T;

void func_089536C4(Obj_0895395C *arg0, u32 arg1) {
    B a0, a1, a2, a3, a4, a5;
    u8 b0[8], b1[8], b2[8], b3[8], b4[8], b5[8];
    u32 n = arg1;
    u32 x, y;
    E_0895395C *p;
    Vec_0895395C *v;

    n = *(D_08A04A24[0] < n ? &D_08A04A24[0] : &n);
    x = n % 10U;
    y = (n / 10U) % 10U;
    if (arg0->unk_1251 == 0) {
        p = arg0->unk_FCC.unk_00;
        v = &arg0->unk_FCC;
        if ((u32)p != (u32)(p + arg0->unk_FCC.unk_04)) {
            do {
                p++;
            } while (p != v->unk_00 + arg0->unk_FCC.unk_04);
        }
        arg0->unk_FCC.unk_04 = 0;
        arg0->unk_1094 = 0;
        arg0->unk_04 = 0;
        a0.unk_00 = 0;
        func_088D6314(arg0, D_08ADA298, func_088D669C(b0, &a0.unk_00), D_089EA6D0, 0, 1.0f);
        a1.unk_00 = 0;
        func_088D6314(arg0, D_08ADA2C8, func_088D669C(b1, &a1.unk_00), D_089EA778, 0, 1.0f);
        x *= sizeof(T);
        a2.unk_00 = 0;
        func_088D6314(arg0, D_08ADA358 + x, func_088D669C(b2, &a2.unk_00), D_089EA820, 0, 1.0f);
        a3.unk_00 = 0;
        func_088D6314(arg0, D_08ADA718 + x, func_088D669C(b3, &a3.unk_00), D_089EA8C8, 0, 1.0f);
        if (y != 0) {
            y *= sizeof(T);
            a4.unk_00 = 0;
            func_088D6314(arg0, D_08ADA538 + y, func_088D669C(b4, &a4.unk_00), D_089EA820, 0, 1.0f);
            a5.unk_00 = 0;
            func_088D6314(arg0, D_08ADA8F8 + y, func_088D669C(b5, &a5.unk_00), D_089EA8C8, 0, 1.0f);
        }
        func_088D68BC((E_08912AF8 *)arg0->unk_FD8);
        arg0->unk_1010 = D_089EA668;
        arg0->unk_1058 = 0;
        func_08912D8C(arg0);
        arg0->unk_1024 = 0.0f;
        arg0->unk_1020 = 1.0f;
        arg0->unk_1018 = 126.0f;
        arg0->unk_101C = 64.0f;
    }
}
