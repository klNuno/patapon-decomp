#include "common.h"

extern "C" {
struct A {
    virtual void unk_08();
    virtual void unk_0C(void *, s32 *, s32);
};
struct B {
    s32 *unk_00;
    s32 get() { s32 temp = (s32)unk_00; if (temp != 0) temp = *(s32 *)temp; else temp = 0; return temp; }
    s32 release() { --*unk_00; return get(); }
};
struct C {
    void *unk_00;
    B unk_04;
};
struct D {
    s32 unk_00;
    A *unk_04;
    C unk_08;
};
struct V {
    f32 unk_00, unk_04, unk_08, unk_0C;
};
struct E {
    u8 pad_00[0x40];
    V unk_40;
    u8 pad_50[8];
    char unk_58[0x410];
    s32 unk_468, unk_46C;
    u8 unk_470;
    u8 pad_471[3];
    f32 unk_474;
};
void func_088B8BFC(char *arg0, char *arg1, s32 arg2);
void func_088B5A98(s32, char **);
void func_088B8E4C(E *, D *, V *);

void func_088B8C4C(E *arg0) {
    D temp0, temp1, temp2;
    V temp3, temp4;
    f32 temp5, temp6, temp7, temp8;
    if (arg0->unk_470 == 0) {
        func_088B8BFC((char *)&temp0, arg0->unk_58, arg0->unk_468);
        func_088B8E4C(arg0, &temp0, &arg0->unk_40);
        if (temp0.unk_08.unk_00 != NULL && temp0.unk_08.unk_04.release() == 0) {
            A *temp9 = temp0.unk_04;
            s32 *temp10 = *(s32 *volatile *)&temp0.unk_08.unk_04.unk_00;
            temp9->unk_0C(*(void *volatile *)&temp0.unk_08.unk_00, temp10, temp0.unk_00);
            func_088B5A98((s32)temp0.unk_08.unk_00, *(char **volatile *)&temp0.unk_00);
        }
    } else {
        func_088B8BFC((char *)&temp1, arg0->unk_58, arg0->unk_46C);
        temp8 = arg0->unk_40.unk_0C * arg0->unk_474;
        temp7 = arg0->unk_40.unk_08;
        temp6 = arg0->unk_40.unk_04;
        temp5 = arg0->unk_40.unk_00;
        temp3.unk_00 = temp5;
        temp3.unk_04 = temp6;
        temp3.unk_08 = temp7;
        temp3.unk_0C = temp8;
        func_088B8E4C(arg0, &temp1, &temp3);
        if (temp1.unk_08.unk_00 != NULL && temp1.unk_08.unk_04.release() == 0) {
            A *temp9 = temp1.unk_04;
            s32 *temp10 = *(s32 *volatile *)&temp1.unk_08.unk_04.unk_00;
            temp9->unk_0C(*(void *volatile *)&temp1.unk_08.unk_00, temp10, temp1.unk_00);
            func_088B5A98((s32)temp1.unk_08.unk_00, *(char **volatile *)&temp1.unk_00);
        }
        func_088B8BFC((char *)&temp2, arg0->unk_58, arg0->unk_468);
        temp8 = arg0->unk_40.unk_0C * (1.0f - arg0->unk_474);
        temp7 = arg0->unk_40.unk_08;
        temp6 = arg0->unk_40.unk_04;
        temp5 = arg0->unk_40.unk_00;
        temp4.unk_00 = temp5;
        temp4.unk_04 = temp6;
        temp4.unk_08 = temp7;
        temp4.unk_0C = temp8;
        func_088B8E4C(arg0, &temp2, &temp4);
        if (temp2.unk_08.unk_00 != NULL && temp2.unk_08.unk_04.release() == 0) {
            A *temp9 = temp2.unk_04;
            s32 *temp10 = *(s32 *volatile *)&temp2.unk_08.unk_04.unk_00;
            temp9->unk_0C(*(void *volatile *)&temp2.unk_08.unk_00, temp10, temp2.unk_00);
            func_088B5A98((s32)temp2.unk_08.unk_00, *(char **volatile *)&temp2.unk_00);
        }
    }
}
}




