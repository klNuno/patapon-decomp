#include "common.h"

extern "C" {

struct T08996E74_A {
    virtual void unk_08();
    virtual void unk_0C(s32, s32 *, s32);
};

void func_089994B8(s32, s32);
void func_0880416C(void *);
void func_08997830(void *);
void func_08925D14(void *, s32);
void func_08945EC4(void *, s32);
void func_08865F78(void *, s32);
void func_089C6694(void *, s32);
void func_08992DE4(void *, s32);
void func_089C54E8(void *, s32);
void func_08994F18(void *, s32);
void func_089BB934(void *, s32);
void func_08993358(void *, s32);
extern u8 D_08A485F8[];

struct T08996E74_H {
    s32 unk_00;
    T08996E74_A *unk_04;
    s32 unk_08;
    s32 *unk_0C;
};

struct T08996E74_S {
    u8 pad_00[0x4A5B4];
    T08996E74_H *unk_4A5B4;
    s32 unk_4A5B8;
};

void *func_08996E74(u8 *arg0, s16 arg1) {
    if (arg0 != NULL) {
        *(u8 **)(arg0 + 0x6E344) = D_08A485F8;
        func_08997830(arg0);
        func_08925D14(arg0 + 0x6D2EC, -1);
        func_08945EC4(arg0 + 0x6D2D8, -1);
        func_08865F78(arg0 + 0x6D220, -1);
        func_089C6694(arg0 + 0x5C7D0, -1);
        func_089C6694(arg0 + 0x4BD70, -1);
        func_08992DE4(arg0 + 0x4BC30, -1);
        func_089C54E8(arg0 + 0x4A5BC, -1);
        if (arg0 + 0x4A580 != NULL) {
            T08996E74_S *temp = (T08996E74_S *)arg0;
            T08996E74_H *temp2 = temp->unk_4A5B4;
            T08996E74_H *volatile *temp3 = &temp->unk_4A5B4;
            s32 temp4 = temp->unk_4A5B8;
            if (temp2 != *temp3 + temp4) {
                volatile s32 *temp5 = &temp->unk_4A5B8;
                s32 temp8;
                do {
                    if (temp2 != NULL) {
                        if (temp2 != NULL) {
                            s32 *temp6 = &temp2->unk_08;
                            if (*temp6 != 0) {
                                --**(s32 *volatile *)&temp2->unk_0C;
                                s32 *temp7 = temp2->unk_0C;
                                if ((temp7 != NULL ? *temp7 : 0) == 0) {
                                    temp2->unk_04->unk_0C(*temp6, temp7, temp2->unk_00);
                                    func_089994B8(*temp6, temp2->unk_00);
                                }
                            }
                        }
                    }
                    temp8 = *temp5;
                    ++temp2;
                } while (temp2 != *(T08996E74_H **)temp3 + temp8);
            }
            temp->unk_4A5B8 = 0;
        }
        func_08994F18(arg0 + 0x21E0, -1);
        func_089BB934(arg0 + 0x1B0, -1);
        func_08993358(arg0 + 0x20, -1);
        if (arg1 > 0) {
            func_0880416C(arg0);
        }
    }
    return arg0;
}

}
