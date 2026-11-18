#include "common.h"

extern "C" {

typedef struct {
    f32 unk_00;
    f32 unk_04;
    f32 unk_08;
    f32 unk_0C;
} V;

typedef struct {
    V unk_00[4];
} Mtx;

typedef V U;

typedef struct {
    s32 unk_00;
    s32 unk_04;
} L_0893CEA8;

class T {
public:
    u8 pad_00[0x80];
    virtual void unk_08();
    virtual void unk_0C();
    virtual void unk_10();
};

s32 func_0887C5A8(Mtx *);
char *func_0887C590(char *arg0, f32 fparg0, f32 fparg1, f32 fparg2, f32 fparg3);
void func_08858024(s32);
extern s32 func_088581B0(s32);
f32 func_08856234(f32);
void func_08866B54(Mtx *, s32, void *);
extern int func_08864E80(char *, char *);


typedef struct {
    u8 pad_00[4];
    s32 unk_04;
    u8 pad_08[0x5C78];
    T unk_5C80;
} S;

void func_088576F8(void);
void func_08857D10(f32, f32, f32, f32, f32, f32);
void func_08857E5C(U *, U *, U *);
void func_08864A30(L_0893CEA8 *);
void func_08864A68(L_0893CEA8 *, s32);

void func_0887C360(S *arg0) {
    L_0893CEA8 temp8;
    struct { V unk_00; u8 pad_10[8]; } temp9;
    V temp10;
    V temp11;
    Mtx temp;
    Mtx temp2;
    V temp3;
    V temp4;
    V temp5;
    V temp6;
    f32 temp7;
    f32 temp12;

    if (arg0->unk_04 != 0) {
        func_08858024(0);
        func_088576F8();

        temp9.unk_00.unk_08 = 100.0f;
        temp9.unk_00.unk_0C = 1.0f;
        temp10.unk_0C = 1.0f;
        temp11.unk_04 = 1.0f;
        temp11.unk_0C = 1.0f;
        temp9.unk_00.unk_00 = 0.0f;
        temp9.unk_00.unk_04 = 0.0f;
        temp10.unk_00 = 0.0f;
        temp10.unk_04 = 0.0f;
        temp10.unk_08 = 0.0f;
        temp11.unk_00 = 0.0f;
        temp11.unk_08 = 0.0f;
        temp12 = temp9.unk_00.unk_08 * func_08856234(45.0f);
        func_08857D10((30.0f / 17.0f) * -temp12, (30.0f / 17.0f) * temp12, -temp12, temp12, 0.1f, 1000.0f);

        func_08858024(1);
        func_088576F8();
        func_08857E5C(&temp9.unk_00, &temp10, &temp11);
        func_08858024(2);
        func_08864A30(&temp8);
        func_0887C5A8(&temp2);
        func_08858024(1);
        func_088581B0((s32)&temp2);
        func_08858024(2);
        func_0887C590((char *)&temp3, 0.0f, 0.0f, 0.0f, 1.0f);
        temp7 = -temp2.unk_00[3].unk_08 * func_08856234(45.0f) / 136.0f;
        temp3.unk_00 = -temp2.unk_00[3].unk_00 + (-240.0f * temp7);
        temp3.unk_04 = -temp2.unk_00[3].unk_04 + (136.0f * temp7);
        func_08866B54(&temp, 0, func_0887C590((char *)&temp4, temp7, 0.0f, 0.0f, 0.0f));
        func_08866B54(&temp, 1, func_0887C590((char *)&temp5, 0.0f, temp7, 0.0f, 0.0f));
        func_08866B54(&temp, 2, func_0887C590((char *)&temp6, 0.0f, 0.0f, 1.0f, 0.0f));
        func_08866B54(&temp, 3, &temp3);
        func_08864E80((char *)&arg0->unk_5C80, (char *)&temp);
        arg0->unk_5C80.unk_10();
        func_08864A68(&temp8, -1);
    }
}
}
