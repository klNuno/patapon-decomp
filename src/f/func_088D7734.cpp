#include "common.h"

extern "C" {

typedef struct {
    s32 unk_00;
    s32 unk_04;
    s32 unk_08;
    s32 unk_0C;
    s32 unk_10;
    s32 unk_14;
    f32 unk_18;
    u8 unk_1C;
} T_088D7734;

typedef struct {
    s32 unk_00;
} K_088D7734;

class B_088D7734 {
public:
    u8 pad_00[0x4C];
    virtual void v08();
    virtual void v0C();
    virtual void v10();
    virtual void v14();
    virtual void v18();
    virtual void v1C();
    virtual void v20();
    virtual void v24();
    virtual void v28(s32);
};

class S_088D7734 : public B_088D7734 {
public:
    u8 pad_50[0x2CF0 - 0x50];
    s32 unk_2CF0;
    s32 unk_2CF4;
    u8 unk_2CF8;
    T_088D7734 unk_2CFC;
    u8 unk_2D1C;
    s32 unk_2D20;
};

void func_088CD948(S_088D7734 *);
s32 func_0882160C(void);
void func_08858D14(K_088D7734 *);
void func_08858D1C(T_088D7734 *, K_088D7734 *, s32);

s32 func_088D7734(S_088D7734 *arg0) {
    K_088D7734 k;
    T_088D7734 t;

    if (arg0->unk_2CF8 != 0) {
        func_088CD948(arg0);
        arg0->unk_2D20 = 0;
        arg0->v28(0);
        arg0->unk_2CF8 = 0;
    }
    if (arg0->unk_2CF0 == 0 && func_0882160C() % 10 == 0) {
        func_08858D14(&k);
        func_08858D1C(&t, &k, arg0->unk_2CF4);
        arg0->unk_2CFC = t;
        if (arg0->unk_2D1C != 0) {
            arg0->unk_2CFC.unk_04 = (arg0->unk_2CFC.unk_04 + 0x3FF) / 1024;
            arg0->unk_2CFC.unk_08 = (arg0->unk_2CFC.unk_08 + 0x3FF) / 1024;
            arg0->unk_2CFC.unk_0C = (arg0->unk_2CFC.unk_0C + 0x3FF) / 1024;
            arg0->unk_2CFC.unk_10 = (arg0->unk_2CFC.unk_10 + 0x3FF) / 1024;
            arg0->unk_2CFC.unk_14 = (arg0->unk_2CFC.unk_14 + 0x3FF) / 1024;
        }
    }
    return 1;
}

}
