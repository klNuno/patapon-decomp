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

void func_0899933C(T *arg0, V *arg1) {
    Mtx temp;
    Mtx temp2;
    V temp3;
    V temp4;
    V temp5;
    V temp6;
    f32 temp7;

    func_0887C5A8(&temp2);
    func_08858024(1);
    func_088581B0((s32)&temp2);
    func_08858024(2);
    func_0887C590((char *)&temp3, 0.0f, 0.0f, 0.0f, 1.0f);
    temp7 = -temp2.unk_00[3].unk_08 * func_08856234(45.0f) / 136.0f;
    temp3.unk_00 = -temp2.unk_00[3].unk_00 + (arg1->unk_00 - 240.0f) * temp7;
    temp3.unk_04 = -temp2.unk_00[3].unk_04 + (136.0f - arg1->unk_04) * temp7;
    func_08866B54(&temp, 0, func_0887C590((char *)&temp4, temp7, 0.0f, 0.0f, 0.0f));
    func_08866B54(&temp, 1, func_0887C590((char *)&temp5, 0.0f, temp7, 0.0f, 0.0f));
    func_08866B54(&temp, 2, func_0887C590((char *)&temp6, 0.0f, 0.0f, 1.0f, 0.0f));
    func_08866B54(&temp, 3, &temp3);
    func_08864E80((char *)arg0, (char *)&temp);
    arg0->unk_10();
}

}
