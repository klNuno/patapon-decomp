#include "common.h"

extern "C" {

class T {
public:
    virtual void unk_08();
    virtual void unk_0C();
    virtual void unk_10();
    virtual void unk_14(void *, s32);
};

typedef struct {
    u8 pad_00[0x20];
    f32 unk_20;
} E;

typedef struct {
    u8 pad_00[0x2C0];
    T unk_2C0;
    u8 pad_2C4[0xD8C];
    void *unk_1050;
    E *unk_1054;
} O;

typedef struct {
    f32 unk_00, unk_04, unk_08, unk_0C;
} S;

typedef struct {
    f32 unk_00, unk_04, unk_08;
    u8 pad_0C[4];
    f32 unk_10, unk_14, unk_18;
    u8 pad_1C[4];
    f32 unk_20, unk_24, unk_28;
} T2;

typedef struct {
    T2 unk_00;
    f32 unk_2C;
    S unk_30;
} M;

void func_08814BB4(s32);
f32 func_08819E94(f32);
f32 func_0885606C(f32);
f32 func_08856234(f32);
void func_088651A4(void *, M *, void *, s32, s32);
void func_0886575C(s32, s32, s32);
extern s32 func_08865870(void);
void func_08866B54(M *, s32, void *);
void func_08926534(const S *, s32, T2 *);

void func_089263B4(O *arg0, S *arg1, void *arg2, s32 arg3) {
    struct { S unk_00; u8 pad_10[0x10]; } a;
    M b;
    S c;
    f32 x;
    f32 y;
    f32 z;
    s32 i;
    E *p;

    func_0886575C(0, 1, 1);
    i = arg3 * sizeof(E);
    p = arg0->unk_1054;
    x = (3.1415927f * ((E *)(i + (u32)p))->unk_20) / 180.0f;
    arg0->unk_2C0.unk_14(arg0->unk_1050, 0);
    func_08814BB4(9);
    x *= 0.5f;
    y = func_08856234(x);
    a.unk_00.unk_0C = func_0885606C(x);
    f32 z0 = 0.0f, z1 = 1.0f;
    a.unk_00.unk_00 = y * z0;
    a.unk_00.unk_04 = y * z0;
    a.unk_00.unk_08 = y * z1;
    c.unk_00 = 0.0f;
    c.unk_04 = 0.0f;
    c.unk_08 = 0.0f;
    c.unk_0C = 1.0f;
    *(f32 *)&b.unk_00.pad_0C[0] = 0.0f;
    *(f32 *)&b.unk_00.pad_1C[0] = 0.0f;
    b.unk_2C = 0.0f;
    func_08866B54(&b, 3, &c);
    func_08926534(&a.unk_00, 0, &b.unk_00);
    z = func_08819E94(arg1->unk_04);
    b.unk_30.unk_00 = func_08819E94(arg1->unk_00);
    b.unk_30.unk_04 = z;
    b.unk_30.unk_08 = 0.0f;
    b.unk_30.unk_0C = 1.0f;
    func_088651A4((u8 *)p + i, &b, arg2, 0, 1);
    func_08865870();
}

}
