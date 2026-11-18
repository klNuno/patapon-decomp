#include "common.h"

extern "C" {

class T {
public:
    virtual void unk_08();
    virtual void unk_0C();
    virtual void unk_10();
    virtual void unk_14(s32, s32);
};

typedef struct {
    u8 pad_00[0xC];
    T unk_0C;
} E;

typedef struct {
    u8 pad_00[0x50];
    E *unk_50, *unk_54;
} S;

typedef struct {
    u8 pad_00[0x10];
    s32 unk_10;
    u8 pad_14[4];
    s32 unk_18;
    u8 pad_1C;
    u8 unk_1D;
    u8 pad_1E[2];
    f32 unk_20, unk_24, unk_28, unk_2C;
    f32 unk_30, unk_34, unk_38, unk_3C;
    u8 pad_40[2];
    u16 unk_42;
} V;

typedef struct {
    f32 unk_00, unk_04, unk_08, unk_0C, unk_10;
} R;

void func_088154E8(s32, s32);
void func_08814E2C(s32, u32, s32, char *, u8 *);
void *func_08859B14(u32);

f32 func_088B0338(S *arg0, V *arg1) {
    f32 temp = arg1->unk_38;
    R *p;

    if (temp <= 0.0f) {
        return temp;
    }
    if (arg1->unk_18 & 0xF) {
        u16 t = arg1->unk_42;
        arg0->unk_54->unk_0C.unk_14(t >> 1, t & 1);
    } else {
        u16 t = arg1->unk_42;
        arg0->unk_50->unk_0C.unk_14(t >> 2, t & 3);
    }
    if (arg1->unk_1D != 0) {
        func_088154E8(1, arg1->unk_10);
    }
    p = (R *)func_08859B14(0x50);
    if (p != NULL) {
        p[0].unk_08 = arg1->unk_20;
        p[0].unk_0C = arg1->unk_24;
        p[0].unk_10 = 0.0f;
        p[0].unk_00 = arg1->unk_30;
        p[0].unk_04 = arg1->unk_34;
        p[1].unk_08 = arg1->unk_20 + arg1->unk_28;
        p[1].unk_0C = arg1->unk_24;
        p[1].unk_10 = 0.0f;
        p[1].unk_00 = arg1->unk_30 + arg1->unk_38;
        p[1].unk_04 = arg1->unk_34;
        p[2].unk_08 = arg1->unk_20;
        p[2].unk_0C = arg1->unk_24 + arg1->unk_2C;
        p[2].unk_10 = 0.0f;
        p[2].unk_00 = arg1->unk_30;
        p[2].unk_04 = arg1->unk_34 + arg1->unk_3C;
        p[3].unk_08 = p[1].unk_08;
        p[3].unk_0C = p[2].unk_0C;
        p[3].unk_10 = 0.0f;
        p[3].unk_00 = p[1].unk_00;
        p[3].unk_04 = p[2].unk_04;
        func_08814E2C(4, 0x800183, 4, NULL, (u8 *)p);
    }
    return arg1->unk_28;
}

}
