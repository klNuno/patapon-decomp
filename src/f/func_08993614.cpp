#include "common.h"

extern "C" {

class T08993614_E0 {
public:
    u8 pad_00[0x10];
    virtual void vfunc_08();
    virtual void vfunc_0C();
    virtual void vfunc_10();
    virtual void vfunc_14();
    virtual void vfunc_18();
    virtual void vfunc_1C();
    virtual void vfunc_20();
    virtual void vfunc_24();
    virtual void vfunc_28();
    virtual void vfunc_2C();
    virtual void vfunc_30();
    virtual void vfunc_34();
};

class T08993614_E : public T08993614_E0 {
public:
    s32 unk_14;
    s32 unk_18;
};

class T08993614_F {
public:
    virtual void vfunc_08();
    virtual void vfunc_0C();
};

typedef struct T08993614_H {
    u8 pad_00[0x4];
    s32 unk_04;
    s32 unk_08;
} T08993614_H;

typedef struct T08993614_S {
    T08993614_H *unk_00;
    s32 unk_04;
    s32 unk_08;
    T08993614_E unk_0C[3];
    T08993614_F unk_60;
    u8 pad_64[0xD8C];
    s32 unk_DF0;
    s32 unk_DF4;
} T08993614_S;

extern s32 func_088148F0(s32, s32);
void func_089C6138(s32, s32);

void func_08993614(T08993614_S *arg0) {
    u32 i;

    func_088148F0(4, 0);
    for (i = 0; i < 3; i++) {
        arg0->unk_0C[i].vfunc_34();
        arg0->unk_0C[i].unk_14 = 0;
        arg0->unk_0C[i].unk_18 = 0;
    }
    arg0->unk_60.vfunc_0C();
    func_089C6138(arg0->unk_04, arg0->unk_DF4);
    arg0->unk_00->unk_08 = 0;
    arg0->unk_00->unk_04 = 0;
    arg0->unk_08 = 0;
    arg0->unk_DF0 = 0;
    arg0->unk_DF4 = 0;
}

}
