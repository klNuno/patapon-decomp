#include "common.h"

extern "C" {
typedef struct {
    u8 pad_00[0x10];
    u8 *unk_10;
} T;

typedef struct {
    u8 pad_00[0x890];
    f32 unk_890;
    f32 unk_894;
    u8 pad_898[0x80];
    u8 unk_918;
    u8 pad_919[0xC3];
    u8 unk_9DC;
    u8 pad_9DD[0xC];
    u8 unk_9E9;
    u8 pad_9EA[0xF];
    u8 unk_9F9;
} U;

class V {
public:
    virtual void unk_08();
    virtual void unk_0C(s32, s32 *, void *);
};

typedef struct {
    s32 unk_00;
    V *unk_04;
    U *unk_08;
    s32 *unk_0C;
} S;

typedef struct {
    u8 pad_00[0x4A4];
    u8 unk_4A4[0x7FF8];
    u16 unk_849C[1];
} P_089077A8;

typedef struct T_089077A8 T_089077A8;
typedef struct Obj_func_088719CC Obj_func_088719CC;
typedef struct L_089076A8 L_089076A8;
typedef struct E_089076A8 E_089076A8;

void func_0881F120(void *, void *, s32);
void func_08852F00(void *, s32);
s32 *func_0885356C(void *, s32, s32, s32);
P_089077A8 *func_089077A8(T_089077A8 *arg0, s32 arg1);
void func_088719CC(Obj_func_088719CC *arg0);
void func_08907750(P_089077A8 *, s32);
char *func_08907740(char *arg0, s32 arg1, s32 arg2);
void func_089076A8(L_089076A8 *arg0, E_089076A8 *arg1);
s32 func_089076A0(char *arg0);
typedef struct {
    s8 unk_00;
} W;

void func_08907414(char *, W);
void func_08871B78(char *, char *);
void func_088F0E98(char *arg0, f32 fparg0, f32 fparg1);
s32 func_089A8B74(u8 *, s32);
extern s32 func_088B35A0(s32);
void func_08874714(void *, s32);
extern u8 *D_08AD1F14[];

void func_08907090(T *arg0, void *arg1) {
    S temp;
    s32 temp2;
    s32 temp3;
    char temp4[8];
    s32 *temp5;
    s32 *temp6;
    s32 *temp7;
    s32 *temp8;
    s32 *temp9;
    s32 *temp10;
    s32 *temp11;
    s32 *temp12;
    s32 *temp13;
    s32 *temp14;
    s32 temp15;
    s32 *temp16;
    u8 *temp17;
    P_089077A8 *temp18;
    s32 temp19;
    s32 *temp20;

    temp11 = func_0885356C(arg1, 0, 1, 4);
    temp10 = func_0885356C(arg1, 1, 1, 4);
    temp13 = func_0885356C(arg1, 2, 1, 4);
    temp16 = func_0885356C(arg1, 3, 1, 4);
    temp5 = func_0885356C(arg1, 4, 1, 4);
    temp6 = func_0885356C(arg1, 5, 1, 4);
    temp12 = func_0885356C(arg1, 6, 1, 4);
    temp7 = func_0885356C(arg1, 7, 1, 4);
    temp8 = func_0885356C(arg1, 8, 1, 4);
    temp9 = func_0885356C(arg1, 9, 1, 4);
    temp14 = func_0885356C(arg1, 10, 1, 4);
    temp15 = *temp12;
    temp17 = &arg0->unk_10[0x142690];
    temp18 = func_089077A8((T_089077A8 *)temp17, 0);
    func_088719CC((Obj_func_088719CC *)temp18);
    func_08907750(temp18, 1);
    func_089076A8((L_089076A8 *)&temp17[0x84E74], (E_089076A8 *)func_08907740(temp4, temp15, (s32)temp18));
    func_089076A0((char *)&temp17[0x84E74]);
    {
        W temp24 = { 0 };
        func_08907414((char *)&temp17[0x84E74], temp24);
    }
    func_089076A0((char *)&temp17[0x84E74]);
    func_08871B78((char *)&temp, (char *)temp18);
    func_088F0E98((char *)temp.unk_08, (f32)*temp5, (f32)*temp6);
    {
        f32 temp21 = (f32)*temp13;
        f32 temp22 = (f32)*temp16;
        U *temp23 = temp.unk_08;
        temp23->unk_890 = temp21;
        temp23->unk_894 = temp22;
    }
    temp.unk_08->unk_9E9 = *temp7 != 0;
    temp.unk_08->unk_9DC = *temp8 != 0;
    temp.unk_08->unk_918 = *temp9 != 0;
    temp.unk_08->unk_9F9 = *temp14 != 0;

    temp19 = func_089A8B74(&(D_08AD1F14[0] != NULL ? D_08AD1F14[0] : NULL)[0x2460], *temp10);
    temp2 = 0;
    temp3 = func_088B35A0(temp19);
    temp20 = temp3 < temp2 ? &temp2 : &temp3;
    temp2 = *temp20 + 1;
    if (temp2 > 0) {
        func_0881F120(temp18->unk_4A4 + 0x7FF8, (void *)temp19, temp2 * 2);
    }
    temp18->unk_849C[temp2] = 0;
    *temp11 = (s32)temp18;
    func_08852F00(arg1, 0);
    if (*(U *volatile *)&temp.unk_08 != NULL) {
        --**(s32 *volatile *)&temp.unk_0C;
        temp20 = temp.unk_0C;
        if ((temp20 != NULL ? *temp20 : 0) == 0) {
            temp.unk_04->unk_0C((s32)temp.unk_08, *(s32 *volatile *)&temp.unk_0C, (void *)temp.unk_00);
            func_08874714(temp.unk_08, temp.unk_00);
        }
    }
}
}
