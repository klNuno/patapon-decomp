#include "common.h"

typedef struct {
    f32 unk_00;
    f32 unk_04;
} V2_088FCD2C;

typedef struct {
    V2_088FCD2C unk_00;
    V2_088FCD2C unk_08;
} V4_088FCD2C;

typedef struct {
    u8 pad_00[4];
    s32 unk_04;
    u8 pad_08[4];
    u8 unk_0C;
    u8 unk_0D;
    u8 pad_0E[2];
    struct { u8 unk_00[8]; } unk_10;
    void *unk_18;
} T;

extern V2_088FCD2C D_089FE3A0[];
extern V2_088FCD2C D_089FE3A8[];
extern V2_088FCD2C D_089FE3B0[];
extern V2_088FCD2C D_089FE3B8[];
extern V2_088FCD2C D_089FE3C0[];
extern V2_088FCD2C D_089FE3C8[];

void func_089B295C(void *, V4_088FCD2C *, s32);
void func_089B298C(s32, s32, T *, V2_088FCD2C *);
void func_089B2A88(void *);
void func_088FCD2C(void *, void *, u8 *, V4_088FCD2C *, f32);
void func_088FC854(void *, void *, u8 *, s32, V4_088FCD2C *, f32);

void func_088FCE6C(T *arg0, void *arg1) {
    V2_088FCD2C a;
    V2_088FCD2C b;
    V4_088FCD2C c;
    V4_088FCD2C d;
    V4_088FCD2C e;
    s32 temp;

    c.unk_00 = D_089FE3A0[0];
    c.unk_08 = D_089FE3A8[0];
    func_089B295C(arg1, &c, 1);
    a.unk_00 = 1.0f;
    a.unk_04 = 1.0f;
    func_089B298C((s32)arg1, 9, (T *)&arg0->unk_10, &a);
    func_089B2A88(arg1);
    temp = arg0->unk_04;
    if (temp != -1) {
        func_088FC854(arg0->unk_18, arg1, arg0->unk_10.unk_00, temp, NULL, -1.0f);
    } else {
        if (arg0->unk_0D != 0xFF) {
            d.unk_00 = D_089FE3B0[0];
            d.unk_08 = D_089FE3B8[0];
            func_088FCD2C(
                arg0->unk_18, arg1, arg0->unk_10.unk_00, &d, -1.0f);
        } else {
            e.unk_00 = D_089FE3C0[0];
            e.unk_08 = D_089FE3C8[0];
            func_088FC854(arg0->unk_18, arg1, arg0->unk_10.unk_00, arg0->unk_0C, &e, -1.0f);
        }
    }
    func_089B295C(arg1, &c, 1);
    b.unk_00 = 1.0f;
    b.unk_04 = 1.0f;
    func_089B298C((s32)arg1, 6, (T *)&arg0->unk_10, &b);
    func_089B2A88(arg1);
}
