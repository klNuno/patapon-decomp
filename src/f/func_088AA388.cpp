#include "common.h"

extern "C" {
void func_08852F00(void *, s32);
s32 *func_0885356C(void *, s32, s32, s32);
s32 func_0888A5A0(s32, s32);
s32 func_088BCF58(s32);
void func_08889030(s32, s32);
s32 func_0893D420(char *, s32);

typedef struct {
    u8 pad_00[0x10];
    s32 unk_10, unk_14;
} T;
typedef struct {
    f32 unk_00, unk_04, unk_08, unk_0C;
} V;

class A {
public:
    u8 pad_00[0x24];
    virtual void unk_08();
    virtual void unk_0C();
    virtual void unk_10();
    virtual void unk_14();
    virtual f32 *unk_18();
};

void func_08931DDC(s32, s32, s32, V *);

void func_088AA388(T *arg0, void *arg1) {
    struct {
        u8 pad_00[0xC];
        s32 unk_0C;
    } temp;
    V temp2;
    s32 *temp3 = func_0885356C(arg1, 0, 1, 4);
    f32 *temp4 = (f32 *)func_0885356C(arg1, 1, 1, 4);
    f32 *temp5 = (f32 *)func_0885356C(arg1, 2, 1, 4);
    s32 *temp6 = func_0885356C(arg1, 3, 1, 4);
    A *temp7 = (A *)func_0888A5A0(func_088BCF58(arg0->unk_10), *temp3);

    if (temp7 == NULL) {
        func_08852F00(arg1, 0);
    } else {
        func_08889030((s32)temp7, *temp6);
        temp.unk_0C = arg0->unk_14;
        f32 temp9, temp8;
        temp8 = *temp5;
        temp9 = *temp4;
        f32 *temp10 = temp7->unk_18();
        f32 temp11 = temp10[1] + temp8;
        f32 temp12 = temp10[0] + temp9;
        temp2.unk_08 = 0.0f;
        temp2.unk_0C = 0.0f;
        temp2.unk_04 = temp11;
        temp2.unk_00 = temp12;
        func_08931DDC(func_0893D420((char *)&temp.unk_0C, 1), 0, *temp6, &temp2);
        func_08852F00(arg1, 0);
    }
}
}
