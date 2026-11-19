#include "common.h"

extern "C" {
typedef struct S {
    u8 pad_00[0x918];
    u8 unk_918;
    u8 pad_919[7];
    s32 unk_920;
    u8 pad_924[0x44];
    u8 unk_968, unk_969, unk_96A;
    u8 pad_96B[0x81];
    S *unk_9EC;
    u8 pad_9F0[0xA];
    u8 unk_9FA;
} S;
typedef struct C C;
typedef struct {
    s32 unk_00;
    u8 unk_04[0x200];
    u8 unk_204[0x200];
    u8 unk_404[0x20];
} E;
typedef struct {
    u8 pad_00[0x8484];
    E *unk_8484;
    s32 unk_8488;
    u8 pad_848C[8];
    S *unk_8494;
    u8 pad_8498[4];
    u8 unk_849C[1];
} V;
typedef struct {
    u8 pad_00[0x10];
    V *unk_10;
    u8 pad_14[8];
    s32 unk_1C;
} T;
class A {
public:
    virtual void unk_08();
    virtual void unk_0C(S *, s32 *, s32);
};
typedef struct {
    s32 unk_00;
    A *unk_04;
    S *unk_08;
    s32 *unk_0C;
} R;

void func_08852C5C(void *, s32, s32);
s32 func_08852EB8(void *);
void func_08852EDC(void *, s32);
void func_08852F00(void *, s32);
s32 *func_0885356C(void *, s32, s32, s32);
void func_08871B78(char *arg0, char *arg1);
void func_08874714(void *, s32);
extern void func_088F1980(s32);
void func_088F1A78(S *, s32);
void func_088F1C7C(S *);
void func_088F1DB4(S *arg0, s32 arg1, s32 arg2, s32 arg3, C *arg4);
void func_088F2104(s32 arg0, s32 arg1);
extern S *D_08AD8134[];

inline void func_088EF750_00(volatile R &arg0) {
    if (arg0.unk_08 != NULL) {
        --*arg0.unk_0C;
        s32 *temp = arg0.unk_0C;
        s32 temp2 = temp != NULL ? *temp : 0;
        if (temp2 == 0) {
            A *temp3 = arg0.unk_04;
            s32 *temp4 = arg0.unk_0C;
            temp3->unk_0C(arg0.unk_08, temp4, ((const R &)arg0).unk_00);
            s32 temp6 = arg0.unk_00;
            func_08874714(arg0.unk_08, temp6);
        }
    }
}

inline s32 func_088EF750_01(V *arg0, u8 arg1, s32 arg2) {
    if (arg0->unk_8488 == 0) {
        return 0;
    }
    S **temp = (S **)&arg0->unk_8494;
    func_088F2104((s32)*temp, (s32)arg0->unk_849C);
    func_088F1C7C(*temp);
    E *temp2 = arg0->unk_8484;
    E *temp3 = temp2 + arg0->unk_8488;
    if (temp2 != temp3) {
        S **temp4 = &arg0->unk_8494;
        do {
            func_088F1DB4(*temp4, (s32)temp2->unk_04, (s32)temp2->unk_204,
                          (s32)temp2, (C *)temp2->unk_404);
        } while (++temp2 != temp3);
    }
    S *temp5 = *temp;
    temp5->unk_969 = 0;
    temp5->unk_968 = 0;
    temp5->unk_96A = arg1;
    func_088F1A78(temp5, arg2);
    return 1;
}

void func_088EF750(T *arg0, void *arg1) {
    R temp, temp2;
    s32 temp8;
    u8 temp20;
    s32 temp3 = func_08852EB8(arg1);
    if (temp3 == 0) {
        s32 *temp4 = func_0885356C(arg1, 0, 0, 4);
        s32 *temp5 = func_0885356C(arg1, 1, 0, 4);
        s32 temp6 = *temp4;
        arg0->unk_1C = temp6;
        V *temp7 = arg0->unk_10;
        temp8 = -(*temp5 == 0);
        temp20 = temp6 != 0;
        if (!func_088EF750_01(temp7, temp20, temp8)) {
            func_088F1980((s32)arg0->unk_10->unk_8494);
            func_08852F00(arg1, 0);
            return;
        }
        func_08871B78((char *)&temp, (char *)arg0->unk_10);
        temp.unk_08->unk_918 = 0;
        func_088EF750_00(temp);
        func_08871B78((char *)&temp2, (char *)arg0->unk_10);
        temp2.unk_08->unk_9FA = 1;
        func_088EF750_00(temp2);
        S *temp9 = arg0->unk_10->unk_8494;
        S *temp10 = D_08AD8134[0];
        if (temp10 != temp9) {
            temp9->unk_9EC = temp10;
            D_08AD8134[0] = temp9;
        }
        temp9->unk_969 = 0;
        temp9->unk_968 = 0;
        func_08852EDC(arg1, temp3 + 1);
    }
    V *temp11 = arg0->unk_10;
    S **temp21 = (S **)((u32)&temp11->pad_00[0x8494]);
    S *temp12 = *(S * volatile *)temp21;
    u8 temp13 = temp12->unk_969;
    if (temp13 != 0) {
        s32 temp14 = temp12->unk_920 < 0;
        if (temp14 != 0) {
            temp14 = temp13 != 0;
        }
        s32 temp15;
        if (temp14) {
            temp15 = arg0->unk_1C;
        } else {
            E *temp16;
            s32 temp17;
            if (*(volatile u8 *)&temp12->unk_969 && (temp17 = *(volatile s32 *)&temp12->unk_920) >= 0) {
                temp16 = temp11->unk_8484 + temp17;
            } else {
                temp16 = NULL;
            }
            temp15 = temp16->unk_00;
        }
        E *temp18 = temp11->unk_8484;
        E *temp19 = *(E *volatile *)((E **)((u32)&temp11->pad_00[0x8484]));
        if (temp18 != temp19 + temp11->unk_8488) {
            E *temp22 = temp19 + *(volatile s32 *)((s32 *)((u32)&temp11->pad_00[0x8488]));
            do {
                ++temp18;
            } while (temp18 != temp22);
        }
        temp11->unk_8488 = 0;
        if (temp11->unk_8494 != NULL) {
            func_088F1C7C(temp11->unk_8494);
        }
        func_088F1980((s32)arg0->unk_10->unk_8494);
        func_08852C5C(arg1, temp15, 0);
        func_08852F00(arg1, 0);
    }
}
}
