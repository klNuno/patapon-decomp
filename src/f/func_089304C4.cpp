#include "common.h"

extern "C" {
inline void *operator new(unsigned int, void *p) { return p; }

typedef struct {
    u8 pad_00[0x44];
    s32 unk_44;
} H;

typedef struct {
    u8 pad_00[0x90];
    H *unk_90;
    u8 pad_94[4];
    s32 unk_98;
    s32 unk_9C;
} S;

typedef struct {
    u8 pad_00[0x38];
    f32 unk_38;
    u8 pad_3C[4];
} M;

struct E {
    s32 unk_00;
    f32 unk_04;
    s32 unk_08;
    s32 unk_0C;
    E(s32 a, f32 b, s32 c, s32 d) : unk_00(a), unk_04(b), unk_08(c), unk_0C(d) {}
};

typedef struct {
    s32 unk_00;
    s32 unk_04;
    f32 unk_08;
    s32 unk_0C;
} T;

struct V {
    u8 unk_00[0x70];
    u8 pad_70[4];
    E *unk_74;
    u32 unk_78;
};

struct U { s8 unk_00; };

void func_08866120(void *);
void func_088664DC(M *, void *, s32);
void func_08930A1C(E *, E *, U);

void func_089304C4(S *arg0, T *arg1, f32 arg2) {
    V temp;
    s32 i;
    S *temp3;
    E *temp4;
    E *temp5;
    s32 temp6;
    s32 temp8;
    f32 temp7;

    func_08866120(arg0->unk_90);
    temp4 = (E *)&temp.unk_00[(u32)temp.unk_00 & 3];
    *(volatile u32 *)&temp.unk_78 = 0;
    temp.unk_74 = temp4;
    temp8 = temp.unk_78;
    H *temp9 = *(H *volatile *)&arg0->unk_90;
    temp4 += temp8;
    temp6 = *(volatile s32 *)&temp9->unk_44;
    new (temp4) E(temp8, arg2, temp6, -1);
    temp.unk_78++;
    i = 0;
    temp3 = arg0;
    do {
        if (temp3->unk_98 != 0) {
            M temp2 __attribute__((aligned(8)));
            temp6 = temp3->unk_9C;
            func_088664DC(&temp2, arg0->unk_90, temp6);
            temp4 = &temp.unk_74[temp.unk_78];
            temp7 = *(volatile f32 *)&temp2.unk_38;
            new (temp4) E(temp.unk_78, temp7, -1, i);
            temp8 = *(volatile u32 *)&temp.unk_78;
            temp.unk_78 = temp8 + 1;
            goto temp11;
        } else {
        temp11:
            i++;
        }
        temp3 = (S *)((u8 *)temp3 + 0x10);
    } while (i < 6);
    temp5 = temp.unk_74 + temp.unk_78;
    temp4 = *(E *volatile *)&temp.unk_74;
    U temp10 = {0};
    func_08930A1C(temp4, temp5, temp10);
    temp5 = temp.unk_74 + temp.unk_78;
    temp4 = *(E *volatile *)&temp.unk_74;
    if (temp4 != temp5) {
        do {
            arg1->unk_00 = temp4->unk_00;
            arg1->unk_04 = temp4->unk_08;
            arg1->unk_08 = 1.0f;
            arg1->unk_0C = temp4->unk_0C;
            temp4++;
            arg1++;
        } while (temp4 != temp5);
    }
    temp5 = temp.unk_74 + temp.unk_78;
    temp4 = *(E *volatile *)&temp.unk_74;
    if (temp4 != temp5) {
        do {
            temp4++;
        } while (temp4 != temp5);
    }
    *(volatile u32 *)&temp.unk_78 = 0;
}
}
