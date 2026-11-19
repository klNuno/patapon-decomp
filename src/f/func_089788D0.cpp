#include "common.h"

extern "C" {
struct V {
    f32 unk_00;
    f32 unk_04;
};

struct C {
    u32 unk_00;
    u32 unk_04;
    u32 unk_08;
    f32 unk_0C;
};

struct T {
    u8 pad_00[0x44];
    s32 unk_44;
    u8 pad_48[0x3C];
};

struct S {
    u8 pad_00[0x470];
    s32 unk_470;
    u8 pad_474[0x109CC];
    T unk_10E40;
    u8 pad_10EC4[0xC];
    T unk_10ED0;
    u8 pad_10F54[0xC];
    T unk_10F60;
    u8 pad_10FE4[0xC];
    T unk_10FF0;
    u8 pad_11074[0xC];
    V unk_11080;
    f32 unk_11088;
    u8 pad_1108C[0x30];
    f32 unk_110BC;
    f32 unk_110C0;
    u8 pad_110C4[0x10];
    u8 unk_110D4;
    u8 pad_110D5[3];
    f32 unk_110D8;
    f32 unk_110DC;
};

struct L {
    C unk_00[7];
    u8 pad_70[8];
    V unk_78[10];
    u8 pad_C8[4];
    f32 unk_CC;
    f32 unk_D0;
    f32 unk_D4;
    u8 pad_D8[0x24];
};

s32 func_08856400(s32);
void func_08979534(T *, V *, f32);

inline s32 func_0(C *arg0, f32 arg1) {
    u8 *temp = (u8 *)(u32)arg0;
    s32 temp2 = 0x10;
    if (temp != NULL) {
        do {
            *temp++ = 0;
        } while (--temp2 != 0);
    }
    arg0->unk_0C = arg1;
    arg0->unk_00 = 0x3F800000;
    arg0->unk_04 = 0x3F800000;
    arg0->unk_08 = 0x3F800000;
    return func_08856400((s32)arg0);
}

inline s32 func_1(C *arg0, f32 arg1) {
    u8 *temp = (u8 *)(u32)arg0;
    s32 temp2 = 0x10;
    if (temp != NULL) {
        do {
            *temp++ = 0;
        } while (--temp2 != 0);
    }
    f32 temp3 = 1.0f - arg1;
    arg0->unk_00 = 0x3F800000;
    arg0->unk_04 = 0x3F800000;
    arg0->unk_08 = 0x3F800000;
    arg0->unk_0C = temp3;
    return func_08856400((s32)arg0);
}

inline void func_2(T *arg0, V *arg1) {
    arg1->unk_00 = 0.0f;
    arg1->unk_04 = 0.0f;
    func_08979534(arg0, arg1, 1.0f);
}

void func_089788D0(S *arg0) {
    u32 *temp4;
    L temp;

    switch (arg0->unk_470) {
    case 2:
    case 3:
        func_2(&arg0->unk_10E40, &temp.unk_78[9]);
        arg0->unk_10FF0.unk_44 = func_0(&temp.unk_00[6], arg0->unk_11088);
        func_2(&arg0->unk_10FF0, &temp.unk_78[8]);
        return;
    case 4: {
        func_2(&arg0->unk_10E40, &temp.unk_78[7]);
        arg0->unk_10FF0.unk_44 = func_0(&temp.unk_00[5], arg0->unk_11088);
        func_2(&arg0->unk_10FF0, &temp.unk_78[6]);
        f32 temp2 = arg0->unk_110C0;
        temp.unk_D4 = temp2;
        u32 temp3 = *(u32 *)&temp.unk_D4;
        temp4 = (u32 *)&temp.unk_D4;
        *(u32 *)&temp.unk_D4 = (temp3 << 1) >> 1;
        f32 temp5 = *(f32 *&)temp4 <= 0.0001f ? 1.0f : arg0->unk_110BC / temp2;
        arg0->unk_10ED0.unk_44 = func_0(&temp.unk_00[4], temp5);
        func_08979534(&arg0->unk_10ED0, &arg0->unk_11080, 1.0f);
        break;
    }
    case 5:
        func_2(&arg0->unk_10E40, &temp.unk_78[5]);
        arg0->unk_10FF0.unk_44 = func_0(&temp.unk_00[3], arg0->unk_11088);
        func_2(&arg0->unk_10FF0, &temp.unk_78[4]);
        func_08979534(&arg0->unk_10ED0, &arg0->unk_11080, 1.0f);
        break;
    case 6:
        func_2(&arg0->unk_10E40, &temp.unk_78[3]);
        arg0->unk_10FF0.unk_44 = func_0(&temp.unk_00[2], arg0->unk_11088);
        func_2(&arg0->unk_10FF0, &temp.unk_78[2]);
        func_08979534(&arg0->unk_10ED0, &arg0->unk_11080, 1.0f);
        break;
    case 7:
    case 8:
    case 9:
        if (arg0->unk_110D4 != 0) {
            f32 temp2 = arg0->unk_110DC;
            temp.unk_D0 = temp2;
            u32 temp3 = *(u32 *)&temp.unk_D0;
            temp4 = (u32 *)&temp.unk_D0;
            *(u32 *)&temp.unk_D0 = (temp3 << 1) >> 1;
            f32 temp5 = *(f32 *&)temp4 <= 0.0001f ? 1.0f : arg0->unk_110D8 / temp2;
            arg0->unk_10ED0.unk_44 = func_1(&temp.unk_00[1], temp5);
            temp2 = arg0->unk_110DC;
            temp.unk_CC = temp2;
            temp3 = *(u32 *)&temp.unk_CC;
            temp4 = (u32 *)&temp.unk_CC;
            *(u32 *)&temp.unk_CC = (temp3 << 1) >> 1;
            temp5 = *(f32 *&)temp4 <= 0.0001f ? 1.0f : arg0->unk_110D8 / temp2;
            arg0->unk_10F60.unk_44 = func_1(&temp.unk_00[0], temp5);
        }
        func_2(&arg0->unk_10E40, &temp.unk_78[1]);
        func_2(&arg0->unk_10F60, &temp.unk_78[0]);
        func_08979534(&arg0->unk_10ED0, &arg0->unk_11080, 1.0f);
        break;
    case 0:
    case 1:
    default:
        break;
    }
}
}
