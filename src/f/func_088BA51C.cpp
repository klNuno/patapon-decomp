#include "common.h"

extern "C" {

class T1 {
public:
    virtual s32 *unk_08(void *, s32);
    virtual void unk_0C(void *, s32 *, s32);
};

class T2 {
public:
    u8 pad_00[0x28];
    virtual void unk_08();
    virtual void unk_0C();
    virtual void unk_10();
    virtual void unk_14(s32);
};

struct T3 {
    volatile s32 unk_00;
    T1 *volatile unk_04;
    void *volatile unk_08;
    s32 *volatile unk_0C;
};

struct T4 {
    s32 unk_00;
    u8 pad_04[0x104];
    T3 *unk_108;
    s32 unk_10C;
    u8 pad_110[8];
    s32 unk_118;
    u8 *unk_11C;
};

typedef struct {
    u8 pad_00[0xC];
    s32 unk_0C;
    s32 unk_10;
} H088BBE88;

struct T088BBE88;
struct T088B91C0;
struct U088B91C0;
struct Unk088BD534_01;
struct T;
struct S;
struct U;

void *func_08827A50(s32, s32);
T1 *func_08827AD4();
T088BBE88 *func_088B8770(T088BBE88 *, s32, s32, s32, H088BBE88 *, s32, f32);
T088B91C0 *func_088B91C0(T088B91C0 *, U088B91C0 *, s32);
void func_088BBD9C(T *, S *);
void func_088BBDF0(T *, U *);
void func_088BBE44(char *, char *);
T088BBE88 *func_088BBE88(T088BBE88 *, s32, s32, s32, H088BBE88 *, s32);
s32 func_088BCF70(s32);
s32 func_088BCF94(s32 arg0);
s32 func_088BCFA4(s32);
s32 func_088BCFAC(char *);
T088BBE88 *func_088BD534(T088BBE88 *, s32, s32, Unk088BD534_01 *);
void *func_088BE64C(void *, s32);
extern int func_088CE1EC(s32, char *);
void func_088CF2C0(s32, T3 *);
void *func_088D0BF8(void *, s32, s32);
void *func_089B3750(void *, s32);

static inline s32 unk_00(s32 *arg0) {
    if (arg0 != NULL) {
        return *arg0;
    }
    return 0;
}

static inline void unk_04(T3 *arg0, T4 *arg1, void *arg2) {
    T1 *temp = (arg0->unk_04 = func_08827AD4());
    arg0->unk_08 = arg2;
    s32 *temp2 = temp->unk_08(arg2, arg0->unk_00);
    *temp2 = 1;
    T3 *temp3 = arg1->unk_108 + arg1->unk_10C;
    arg0->unk_0C = temp2;
    if (temp3 != NULL) {
        temp3->unk_00 = arg0->unk_00;
        temp3->unk_04 = arg0->unk_04;
        temp3->unk_08 = arg0->unk_08;
        temp3->unk_0C = temp2;
        if (temp3->unk_08 != NULL) {
            ++*temp3->unk_0C;
        }
    }
    ++arg1->unk_10C;
    if (arg0->unk_08 != NULL) {
        --*arg0->unk_0C;
        if (unk_00(arg0->unk_0C) == 0) {
            T1 *temp4 = arg0->unk_04;
            s32 *temp5 = arg0->unk_0C;
            temp4->unk_0C(arg0->unk_08, temp5, *(s32 *)&arg0->unk_00);
            U *temp7 = (U *)arg0->unk_00;
            func_088BBDF0((T *)arg0->unk_08, temp7);
        }
    }
}

static inline void unk_08(T3 *arg0, T3 *arg1, s32 arg2) {
    func_088BBE44((char *)arg0, (char *)arg1);
    func_088CF2C0(arg2, arg0);
    if (arg0->unk_08 != NULL) {
        --*arg0->unk_0C;
        s32 *temp = arg0->unk_0C;
        if ((temp != NULL ? *temp : 0) == 0) {
            T1 *temp4 = arg0->unk_04;
            s32 *temp5 = arg0->unk_0C;
            temp4->unk_0C(arg0->unk_08, temp5, *(s32 *)&arg0->unk_00);
            S *temp7 = (S *)arg0->unk_00;
            func_088BBD9C((T *)arg0->unk_08, temp7);
        }
    }
}

void func_088BA51C(T4 *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    T3 sp140, sp130, sp120, sp110, sp100, spF0, spE0, spD0, spC0, spB0;
    T3 spA0, sp90, sp80, sp70, sp60, sp50, sp40;
    H088BBE88 *temp4 = (H088BBE88 *)func_088BCFAC((char *)arg1);
    s32 temp3 = func_088BCFA4(arg1);
    s32 temp2 = func_088BCF94(arg1);
    s32 temp1 = func_088BCF70(arg1);
    s32 temp6 = arg0->unk_00;
    void *temp = func_08827A50(0x2D0, temp6);
    if (temp != NULL) {
        temp = func_088B91C0((T088B91C0 *)temp, (U088B91C0 *)temp4, temp2);
    }
    sp140.unk_00 = temp6;
    unk_04(&sp140, arg0, temp);

    temp6 = arg0->unk_00;
    temp = func_08827A50(0x90, temp6);
    if (temp != NULL) {
        temp = func_089B3750(temp, arg3);
    }
    sp130.unk_00 = temp6;
    unk_04(&sp130, arg0, temp);

    temp = func_08827A50(0x4D0, arg0->unk_00);
    if (temp != NULL) {
        temp = func_088BD534((T088BBE88 *)temp, temp2, arg0->unk_00, (Unk088BD534_01 *)temp4);
    }
    sp120.unk_00 = arg0->unk_00;
    unk_04(&sp120, arg0, temp);
    ((T2 *)(0x50 + (u32)temp))->unk_14(0x64);
    if (temp != NULL) {
        temp = (u8 *)temp + 0x50;
    }
    func_088CE1EC(arg2, (char *)temp);

    temp6 = arg0->unk_00;
    temp = func_08827A50(0x4110, temp6);
    if (temp != NULL) {
        temp = func_088BE64C(temp, 0);
    }
    sp110.unk_00 = temp6;
    unk_04(&sp110, arg0, temp);

    temp6 = arg0->unk_00;
    temp = func_08827A50(0x480, temp6);
    if (temp != NULL) {
        temp = func_088B8770((T088BBE88 *)temp, 2, temp2, arg0->unk_00, temp4, temp3, 0.5f);
    }
    sp100.unk_00 = temp6;
    unk_04(&sp100, arg0, temp);

    temp6 = arg0->unk_00;
    temp = func_08827A50(0x480, temp6);
    if (temp != NULL) {
        temp = func_088B8770((T088BBE88 *)temp, 1, temp2, arg0->unk_00, temp4, temp3, 0.8f);
    }
    spF0.unk_00 = temp6;
    unk_04(&spF0, arg0, temp);

    temp6 = arg0->unk_00;
    temp = func_08827A50(0x470, temp6);
    if (temp != NULL) {
        temp = func_088BBE88((T088BBE88 *)temp, 0, temp2, arg0->unk_00, temp4, temp3);
    }
    spE0.unk_00 = temp6;
    unk_04(&spE0, arg0, temp);

    temp6 = arg0->unk_00;
    temp = func_08827A50(0x110, temp6);
    if (temp != NULL) {
        temp = func_088D0BF8(temp, arg0->unk_00, arg4);
    }
    spD0.unk_00 = temp6;
    unk_04(&spD0, arg0, temp);

    temp = func_08827A50(0x4110, arg0->unk_00);
    if (temp != NULL) {
        temp = func_088BE64C(temp, 1);
    }
    spC0.unk_00 = arg0->unk_00;
    unk_04(&spC0, arg0, temp);
    ((T2 *)(0x50 + (u32)temp))->unk_14(0xA);
    if (temp != NULL) {
        temp = (u8 *)temp + 0x50;
    }
    func_088CE1EC(arg2, (char *)temp);

    temp6 = arg0->unk_00;
    temp = func_08827A50(0x470, temp6);
    if (temp != NULL) {
        temp = func_088BBE88((T088BBE88 *)temp, 3, temp2, arg0->unk_00, temp4, temp3);
    }
    spB0.unk_00 = temp6;
    unk_04(&spB0, arg0, temp);

    T3 **sp = &arg0->unk_108;
    unk_08(&spA0, *sp + 0, temp1);
    unk_08(&sp90, *sp + 1, temp1);
    unk_08(&sp80, *sp + 2, temp1);
    unk_08(&sp70, *sp + 3, temp1);
    unk_08(&sp60, *sp + 7, temp1);
    unk_08(&sp50, *sp + 8, temp1);
    unk_08(&sp40, *sp + 4, temp1);
    arg0->unk_118 = *(s32 *)((u8 *)temp4 + temp4->unk_10);
    arg0->unk_11C = (u8 *)temp4 + temp4->unk_10 + 4;
}

}
