#include "common.h"

extern "C" {
class A {
public:
    virtual void unk_08();
    virtual s32 unk_0C();
    virtual s32 unk_10();
};
struct B {
    s32 unk_00, unk_04, unk_08;
    s32 *unk_0C;
    s32 unk_10[1];
};
struct C {
    u8 pad_00[8];
    B *unk_08;
};
struct T {
    u8 pad_00[0x10];
    A unk_10;
    u8 pad_14[0xC];
    s32 unk_20, unk_24;
    u8 pad_28[0x208];
    char unk_230[0x28];
    char unk_258[0x28];
    u8 unk_280;
    u8 pad_281[3];
    f32 unk_284;
};

extern s32 func_0885A680(void);
s32 func_0888DA74(char *);
C *func_0888D610(void *);
s32 func_0888D5A4(void *, C *);
s32 func_0888D59C(char *);
void func_0888D554(A *, f32);

inline B *unk_00(T *arg0) {
    s32 temp = arg0->unk_10.unk_0C();
    if (!(temp < arg0->unk_10.unk_10())) {
        return NULL;
    }
    if (func_0888DA74(arg0->unk_258) != 0) {
        return NULL;
    }
    C *temp2 = func_0888D610(arg0->unk_258);
    if (temp2 == NULL) {
        return NULL;
    }
    if ((u8)func_0888D5A4(arg0->unk_230, temp2) == 0) {
        return NULL;
    }
    arg0->unk_24 = func_0888D59C(arg0->unk_230);
    f32 temp3 = (f32)arg0->unk_24 / (f32)arg0->unk_20;
    if (arg0->unk_280 != 0) {
        f32 temp4 = arg0->unk_284;
        if (temp3 > temp4) {
            func_0888D554(&arg0->unk_10, 0.05f + temp4);
        }
    }
    return temp2->unk_08;
}

void func_08977120(T *arg0, s32 arg1) {
    B *temp = unk_00(arg0);
    if (temp != NULL) {
        temp->unk_0C = temp->unk_10;
        *(volatile s32 *)&temp->unk_04 = 0;
        *(volatile s32 *)&temp->unk_08 = 0;
        temp->unk_00 = 0;
        *(volatile s32 *)&temp->unk_04 = 0;
        *(volatile s32 *)&temp->unk_08 = 0;
        temp->unk_04 = arg1;
        s32 *temp2 = temp->unk_0C;
        *temp2 = func_0885A680();
        temp->unk_00 = 1;
    }
}
}
