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

void func_08854D48(V *, char *, V *);

void func_089A54C0(T *arg0, V *arg1, V *arg2) {
    Mtx temp;
    V temp8;
    V temp9, temp10, temp11;
    Mtx temp2;
    V temp3;
    V temp4;
    V temp5;
    V temp6;
    f32 temp7, temp12, temp13, temp14, temp15, temp16, temp17;
    temp13 = arg2->unk_04;
    temp12 = arg2->unk_00;
    temp8.unk_00 = temp12;
    temp8.unk_04 = temp13;
    temp8.unk_08 = 1.0f;
    temp8.unk_0C = 1.0f;

    func_0887C5A8(&temp2);
    func_08858024(1);
    func_088581B0((s32)&temp2);
    func_08858024(2);
    func_0887C590((char *)&temp3, 0.0f, 0.0f, 0.0f, 1.0f);
    temp14 = 136.0f;
    temp15 = -temp2.unk_00[3].unk_08 * func_08856234(45.0f);
    temp16 = arg1->unk_00;
    temp7 = temp15 / temp14;
    temp12 = temp2.unk_00[3].unk_00;
    temp13 = temp2.unk_00[3].unk_04;
    temp17 = (temp16 - 240.0f) * temp7;
    temp3.unk_00 = -temp12 + temp17;
    temp17 = temp14 - arg1->unk_04;
    temp17 *= temp7;
    temp3.unk_04 = -temp13 + temp17;
    func_08866B54(&temp, 0, func_0887C590((char *)&temp4, temp7, 0.0f, 0.0f, 0.0f));
    func_08866B54(&temp, 1, func_0887C590((char *)&temp5, 0.0f, temp7, 0.0f, 0.0f));
    func_08866B54(&temp, 2, func_0887C590((char *)&temp6, 0.0f, 0.0f, 1.0f, 0.0f));
    func_08866B54(&temp, 3, &temp3);
    func_08854D48(&temp9, (char *)&temp.unk_00[0], &temp8);
    temp.unk_00[0].unk_00 = temp9.unk_00;
    temp.unk_00[0].unk_04 = temp9.unk_04;
    temp.unk_00[0].unk_08 = temp9.unk_08;
    temp.unk_00[0].unk_0C = temp9.unk_0C;
    func_08854D48(&temp10, (char *)&temp.unk_00[1], &temp8);
    temp.unk_00[1].unk_00 = temp10.unk_00;
    temp.unk_00[1].unk_04 = temp10.unk_04;
    temp.unk_00[1].unk_08 = temp10.unk_08;
    temp.unk_00[1].unk_0C = temp10.unk_0C;
    func_08854D48(&temp11, (char *)&temp.unk_00[2], &temp8);
    temp.unk_00[2].unk_00 = temp11.unk_00;
    temp.unk_00[2].unk_04 = temp11.unk_04;
    temp.unk_00[2].unk_08 = temp11.unk_08;
    temp.unk_00[2].unk_0C = temp11.unk_0C;
    func_08864E80((char *)arg0, (char *)&temp);
    arg0->unk_10();
}

}


