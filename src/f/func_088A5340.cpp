#include "common.h"

extern "C" {

struct A_088901E4;
struct N {
    s32 unk_00;
    N *unk_04;
    A_088901E4 **unk_08;

    s32 func_00(N *arg0) {
        s32 temp = 0;
        if (*(s32 *)&unk_08 == *(s32 *)&arg0->unk_08 && unk_04 == arg0->unk_04) {
            temp = 1;
        }
        return temp;
    }

    s32 func_04(N *arg0) {
        s32 temp = 0;
        if (func_00(arg0) && unk_00 == arg0->unk_00) {
            temp = 1;
        }
        return temp;
    }

    bool func_08(N *arg0) {
        return !(bool)func_04(arg0);
    }
};

struct V {
    u8 pad_00[8];
    f32 unk_08;
};

struct U {
    u8 pad_00[0x10];
    V *unk_10;
};

struct W {
    u8 pad_00[0x114];
    U *unk_114;
    u8 pad_118[0x2A0];
    u8 *unk_3B8;
};

struct E {
    u8 pad_00[0x91C];
    N unk_91C;

    N *func_00() { return &unk_91C; }
};

struct S {
    u8 pad_00[0x3A0];
    E unk_3A0;
    u8 pad_CC8[0x8BE8];
    V *unk_98B0;
};

struct F {
    u8 pad_00[0x2C];
    f32 unk_2C;
};

struct T {
    u8 pad_00[0x3A0];
    S *unk_3A0;
    u8 pad_3A4[0x18C];
    F *unk_530;
};

s32 func_0888F7B4(A_088901E4 *, s32);

inline const f32 &func_00(const f32 &arg0, const f32 &arg1) {
    return arg0 > arg1 ? arg0 : arg1;
}

inline const f32 &func_04(const f32 &arg0, const f32 &arg1) {
    return arg0 < arg1 ? arg0 : arg1;
}

f32 func_088A5340(T *arg0) {
    struct {
        u8 pad_00[0x10];
        f32 unk_10;
        f32 unk_14;
    } temp9;
    f32 temp = 0.0f;
    s32 temp2 = 1;
    struct { N *unk_00; } temp3;
    E *temp4;
    F *temp5 = arg0->unk_530;
    V *temp6;

    if (temp5 != NULL) {
        if (temp5->unk_2C < 0.0f) {
            temp = -temp5->unk_2C;
            temp2 = 0;
        } else {
            temp9.unk_14 = temp;
            temp9.unk_10 = 1000000.0f;
            temp3.unk_00 = arg0->unk_3A0->unk_3A0.unk_91C.unk_04;
            temp4 = &arg0->unk_3A0->unk_3A0;
            goto cmp;
            do {
                W *p = (W *)func_0888F7B4(*temp3.unk_00->unk_08, 1);
                if (p != NULL) {
                    V *q = (V *)(p->unk_3B8 + 0x100);
                    if (p->unk_114 != NULL) {
                        q = p->unk_114->unk_10;
                    }
                    temp9.unk_14 = func_00(q->unk_08, temp9.unk_14);
                    temp9.unk_10 = func_04(q->unk_08, temp9.unk_10);
                    temp2 = 1;
                }
                if (temp3.unk_00 == NULL) goto cmp;
                temp3.unk_00 = temp3.unk_00->unk_04;
            cmp:;
            } while (temp3.unk_00->func_08(temp4->func_00()));
            f32 temp7 = temp9.unk_10;
            f32 temp8 = temp9.unk_14;
            F *p = arg0->unk_530;
            f32 temp10 = temp8 - temp7;
            f32 temp11 = *(volatile f32 *)&p->unk_2C;
            temp = temp7 + temp11 * temp10;
        }
    }
    if (temp2 != 0) {
        temp = 1.0f;
    }
    temp6 = arg0->unk_3A0->unk_98B0;
    if (temp6 != NULL) {
        if (temp6->unk_08 < 0.0f) {
            temp = -temp6->unk_08;
        } else {
            temp *= temp6->unk_08;
        }
    }
    return temp;
}

}
