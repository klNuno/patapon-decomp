#include "common.h"

typedef struct {
    u8 pad_00[0x258];
    s32 unk_258;
    s32 unk_25C;
} T089B8094_2;

typedef struct {
    u8 pad_00[0x14A0];
    T089B8094_2 *unk_14A0;
} T089B8094_1;

typedef struct {
    u8 pad_00[0x24];
    s32 unk_24;
} T089B8094_3;

typedef struct {
    u8 pad_00[0x105C];
    void *unk_105C;
    char *unk_1060;
    s32 unk_1064;
    u8 unk_1068;
    u8 unk_1069;
    u8 pad_106A[0x1606];
    u8 unk_2670[0x7F0];
    s32 unk_2E60;
    s32 unk_2E64;
    f32 unk_2E68;
    u8 pad_2E6C[4];
    u8 unk_2E70[0x1058];
    u8 unk_3EC8[0x1058];
    u8 unk_4F20[0x1058];
    u8 unk_5F78[0x40C];
    u8 unk_6384[1];
} T;

T089B8094_3 *func_0885AB7C(s32, s32, s32);
s32 func_088586E8(void);
s32 func_0887744C(T089B8094_1 *, char *, s32);
void func_08878864(s32, s32, s32, f32, f32, f32);
s32 func_0887EDA8(s32, s32);
s32 func_0887EDB8(void *, s32);
void func_089261F8(void *, s32);
s32 func_08947D78(s32);
s32 func_08947E38(s32);
char *func_08995710(char *);
void func_08996808(char *, s8);
void func_089968C8(char *, s8);
extern s32 func_08998D18(s32);
s32 func_08998D28(s32);
void func_0899DB2C(void *, s32);
s32 func_089B53D8(s32);
void func_089B8764(T *, s32);
extern void func_089B88C8(T *, s32);
void func_089BBC08(s32, u8 *, s32, s32);
void func_089BBF38(s32, u32);
s32 func_089BCFE8(s32);
s32 func_089BCFF0(s32);

extern const f32 D_089F2230[];
extern char *D_08A08ACC[];
extern char *D_08A08AE4[];
extern f32 D_08A08C80[];
extern T089B8094_1 *D_08AD1F14[];

void func_089B7490(T *arg0, u32 arg1) {
    f32 temp;
    f32 temp2;
    s32 temp3 = arg0->unk_2E64;
    s32 temp4;

    if (temp3 == 1) {
        f32 temp10 = *(volatile f32 *)&arg0->unk_2E68;
        f32 temp5 = (f32)arg1;
        temp5 /= 4800.0f;
        temp = temp10 - temp5;
        arg0->unk_2E68 = *(D_08A08C80[0] < temp ? &temp : D_08A08C80);
    } else if (temp3 == 2) {
        f32 temp10 = *(volatile f32 *)&arg0->unk_2E68;
        f32 temp5 = (f32)arg1;
        temp5 /= 4800.0f;
        temp2 = temp10 + temp5;
        arg0->unk_2E68 = *(temp2 < D_089F2230[0] ? &temp2 : D_089F2230);
    }
    func_0899DB2C(arg0->unk_2670, arg1);
    func_089261F8(arg0->unk_2E70, arg1);
    func_089261F8(arg0->unk_3EC8, arg1);
    func_089261F8(arg0->unk_4F20, arg1);
    temp4 = func_08998D28(arg0->unk_1064);
    if (arg0->unk_1069 == 0) {
        if (arg0->unk_1068 == 1) {
            if (func_0887EDB8(arg0->unk_105C, 0x10) != 0) {
                s32 temp6 = arg0->unk_2E60 - 1;
                if ((arg0->unk_2E60 = temp6) < 0) {
                    arg0->unk_2E60 = 1;
                }
                func_089B88C8(arg0, arg0->unk_2E60);
                func_08878864(func_089B53D8(func_088586E8()), 1, 2, 1.0f, 0.0f, 0.0f);
            }
            if (func_0887EDB8(arg0->unk_105C, 0x40) != 0) {
                s32 temp6 = arg0->unk_2E60 + 1;
                if ((u32)(arg0->unk_2E60 = temp6) > 1U) {
                    arg0->unk_2E60 = 0;
                }
                func_089B88C8(arg0, arg0->unk_2E60);
                func_08878864(func_089B53D8(func_088586E8()), 1, 2, 1.0f, 0.0f, 0.0f);
            }
            if (func_0887EDA8((s32)arg0->unk_105C, 0x4000) != 0) {
                s32 temp11 = arg0->unk_2E60;
                if (temp11 == 0) {
                    T089B8094_1 *g = D_08AD1F14[0];
                    T089B8094_2 *s = (g != NULL ? g : NULL)->unk_14A0;
                    s32 temp7;
                    s32 temp8;
                    if (s->unk_258 == -1) {
                        temp7 = -1;
                    } else {
                        temp7 = func_0885AB7C(func_0887744C(g != NULL ? g : NULL, D_08A08ACC[0], 1), 0, *(s32 *)&s->unk_258)->unk_24;
                    }
                    temp8 = -1;
                    if (temp7 == -1) {
                        temp8 = func_08947E38(func_08998D18(arg0->unk_1064));
                    }
                    func_089BBC08(temp4, arg0->unk_5F78, temp7, temp8);
                } else if (temp11 == 1) {
                    T089B8094_1 *g = D_08AD1F14[0];
                    T089B8094_2 *s = (g != NULL ? g : NULL)->unk_14A0;
                    s32 temp7;
                    s32 temp8;
                    if (s->unk_25C == -1) {
                        temp7 = -1;
                    } else {
                        temp7 = func_0885AB7C(func_0887744C(g != NULL ? g : NULL, D_08A08AE4[0], 1), 0, *(s32 *)&s->unk_25C)->unk_24;
                    }
                    temp8 = -1;
                    if (temp7 == -1) {
                        temp8 = func_08947D78(func_08998D18(arg0->unk_1064));
                    }
                    func_089BBC08(temp4, arg0->unk_6384, temp7, temp8);
                }
                func_08878864(func_089B53D8(func_088586E8()), 8, 2, 1.0f, 0.0f, 0.0f);
                arg0->unk_1069 = 1;
                func_08996808(func_08995710(arg0->unk_1060), 0);
                func_089968C8(func_08995710(arg0->unk_1060), 0);
            } else if (arg0->unk_2E60 == 1 && func_0887EDA8((s32)arg0->unk_105C, 0x8000) != 0) {
                T089B8094_1 *g = D_08AD1F14[0];
                (g != NULL ? g : NULL)->unk_14A0->unk_25C = -1;
                func_089B88C8(arg0, arg0->unk_2E60);
            }
        }
    } else {
        func_089BBF38(temp4, arg1);
        if ((u8)func_089BCFE8(temp4) == 0) {
            s32 temp9 = func_089BCFF0(temp4);
            if (temp9 != -1) {
                func_089B8764(arg0, temp9);
                func_08878864(func_089B53D8(func_088586E8()), 0x210009, 2, 1.0f, 0.0f, 0.0f);
            } else {
                func_08878864(func_089B53D8(func_088586E8()), 9, 2, 1.0f, 0.0f, 0.0f);
            }
            func_089B88C8(arg0, arg0->unk_2E60);
            arg0->unk_1069 = 0;
            func_08996808(func_08995710(arg0->unk_1060), 1);
            func_089968C8(func_08995710(arg0->unk_1060), 1);
        }
    }
}
