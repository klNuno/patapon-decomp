#include "common.h"

extern "C" {

typedef struct {
    f32 unk_00, unk_04;
} V2;

typedef struct {
    f32 unk_00, unk_04, unk_08, unk_0C;
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

class A {
public:
    virtual void unk_08();
    virtual void unk_0C();
    virtual void unk_10();
    virtual void unk_14();
    virtual void unk_18();
    virtual void unk_1C(f32, V2 *, V2 *);
};

struct S {
    u8 pad_00[0x70];
    T unk_70;
    u8 pad_F4[0x1C];
    A unk_110;
    u8 pad_114[0x6CC];
    A unk_7E0;
    u8 pad_7E4[0x6CC];
    s32 unk_EB0;
};

extern f32 D_089F0748[];
extern f32 D_089F0770[];
extern f32 D_089F0774[];
extern f32 D_089F0778[];

void func_08815CD0(s32, s32, s32, s32);
s32 func_0887C5A8(Mtx *);
char *func_0887C590(char *arg0, f32 fparg0, f32 fparg1, f32 fparg2, f32 fparg3);
void func_08858024(s32);
extern s32 func_088581B0(s32);
f32 func_08856234(f32);
void func_08866B54(Mtx *, s32, void *);
extern int func_08864E80(char *, char *);
void func_089B34E8(S *);

void func_089AE97C(S *arg0) {
    V2 temp, temp2, temp3, temp4;
    Mtx temp5, temp6;
    V temp7, temp8, temp9, temp10;
    f32 temp11;

    func_0887C5A8(&temp6);
    func_08858024(1);
    func_088581B0((s32)&temp6);
    func_08858024(2);
    func_0887C590((char *)&temp7, 0.0f, 0.0f, 0.0f, 1.0f);
    temp11 = -temp6.unk_00[3].unk_08 * func_08856234(45.0f) / 136.0f;
    temp7.unk_00 = -temp6.unk_00[3].unk_00 + (D_089F0748[0] - 240.0f) * temp11;
    temp7.unk_04 = -temp6.unk_00[3].unk_04 + (136.0f - D_089F0748[1]) * temp11;
    func_08866B54(&temp5, 0, func_0887C590((char *)&temp8, temp11, 0.0f, 0.0f, 0.0f));
    func_08866B54(&temp5, 1, func_0887C590((char *)&temp9, 0.0f, temp11, 0.0f, 0.0f));
    func_08866B54(&temp5, 2, func_0887C590((char *)&temp10, 0.0f, 0.0f, 1.0f, 0.0f));
    func_08866B54(&temp5, 3, &temp7);
    func_08864E80((char *)&arg0->unk_70, (char *)&temp5);
    arg0->unk_70.unk_10();
    func_08815CD0((s32)D_089F0770[0], (s32)D_089F0774[0], (s32)D_089F0778[0], (s32)D_089F0778[1]);
    temp2.unk_00 = 1.0f;
    temp2.unk_04 = 1.0f;
    f32 temp12 = (f32)(arg0->unk_EB0 * 14);
    temp.unk_00 = 0.0f;
    temp.unk_04 = temp12;
    arg0->unk_110.unk_1C(1.0f, &temp, &temp2);
    temp4.unk_00 = 1.0f;
    temp4.unk_04 = 1.0f;
    f32 temp312 = (f32)(arg0->unk_EB0 * 14);
    temp3.unk_00 = 0.0f;
    temp3.unk_04 = temp312;
    arg0->unk_7E0.unk_1C(1.0f, &temp3, &temp4);
    func_08815CD0(0, 0, 0x1E0, 0x110);
    func_089B34E8(arg0);
}

}
