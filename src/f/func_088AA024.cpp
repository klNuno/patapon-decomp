#include "common.h"

extern "C" {
void func_08852F00(void *, s32);
s32 *func_0885356C(void *, s32, s32, s32);
s32 func_0888A5A0(s32, s32);
s32 func_088BCF58(s32);

typedef struct {
    u8 pad_00[0x10];
    s32 unk_10;
} Unk;

class Unk24 {
public:
    u8 pad_00[0x24];
    virtual void unk_08();
    virtual void unk_0C();
    virtual void unk_10();
    virtual void unk_14();
    virtual void unk_18();
    virtual void unk_1C();
    virtual void unk_20();
    virtual void unk_24();
    virtual void unk_28();
    virtual void unk_2C();
    virtual void unk_30();
    virtual void unk_34();
    virtual void unk_38();
    virtual void unk_3C();
    virtual void unk_40();
    virtual void unk_44();
    virtual void unk_48();
    virtual void unk_4C();
    virtual void unk_50();
    virtual void unk_54();
    virtual void unk_58();
    virtual void unk_5C();
    virtual void unk_60();
    virtual void unk_64();
    virtual void unk_68();
    virtual void unk_6C();
    virtual void *unk_70(s32);
};

typedef struct {
    f32 unk_00[16];
} Mtx;

void func_088664DC(Mtx *, void *, s32);

void func_088AA024(Unk *arg0, void *arg1) {
    Mtx u;
    s32 *temp = func_0885356C(arg1, 0, 1, 4);
    s32 *temp2 = func_0885356C(arg1, 1, 1, 4);
    s32 *temp6 = func_0885356C(arg1, 2, 1, 4);
    f32 *temp3 = (f32 *)func_0885356C(arg1, 3, 1, 4);
    f32 *temp4 = (f32 *)func_0885356C(arg1, 4, 1, 4);
    Unk24 *temp5;

    if ((temp5 = (Unk24 *)func_0888A5A0(func_088BCF58(arg0->unk_10), *temp)) == NULL) {
        func_08852F00(arg1, 0);
    } else {
        func_088664DC(&u, temp5->unk_70(*temp2), *temp6);
        *temp3 = u.unk_00[12];
        *temp4 = u.unk_00[13];
        func_08852F00(arg1, 0);
    }
}
}
