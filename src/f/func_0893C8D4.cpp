#include "common.h"

extern "C" {

class B_0893C8D4 {
public:
    u8 pad_00[0x50];
    virtual void v08();
    virtual void v0C();
    virtual void v10();
    virtual void v14();
    virtual void v18();
    virtual void v1C();
    virtual void v20();
};

class S_0893C8D4 {
public:
    virtual void v08();
    virtual void v0C();
    virtual void v10();
    virtual void v14();
};

typedef struct {
    u8 pad_00[0x48];
    s32 unk_48;
} M_0893C8D4;

class T_0893C8D4 : public B_0893C8D4 {
public:
    u8 pad_54[0xC];
    M_0893C8D4 unk_60;
    u8 pad_AC[4];
    u8 unk_B0[0x1464];
    u8 unk_1514[0x20];
    S_0893C8D4 unk_1534;
    u8 pad_1538[0x1F68 - 0x1538];
    u8 unk_1F68[0x208C - 0x1F68];
    u8 unk_208C[4];
};

extern u8 D_08A44F44[];
extern u8 D_08A47300[];
extern u8 D_08A48024[];

void func_0880416C(void *);
void func_0885C534(void *, s32);
void func_0886B11C(S_0893C8D4 *, s32);
void func_0886F084(T_0893C8D4 *, s32);
void func_088A3FE4(void *, s32);
void func_0893B120(void *, s32);
void func_0893CBB4(void *, s32);

T_0893C8D4 *func_0893C8D4(T_0893C8D4 *arg0, s16 arg1) {
    if (arg0 != NULL) {
        *(void **)&arg0->pad_00[0x50] = D_08A47300;
        arg0->v20();
        func_088A3FE4(arg0->unk_208C, -1);
        func_0893B120(arg0->unk_1F68, -1);
        if (&arg0->unk_1534 != NULL) {
            *(void **)&arg0->unk_1534 = D_08A48024;
            arg0->unk_1534.v14();
            func_0886B11C(&arg0->unk_1534, 0);
        }
        func_0893CBB4(arg0->unk_1514, -1);
        if (arg0 != NULL) {
            *(void **)&arg0->pad_00[0x50] = D_08A44F44;
            func_0885C534(arg0->unk_B0, -1);
            if (&arg0->unk_60 != NULL) {
                arg0->unk_60.unk_48 = 0;
            }
            func_0886F084(arg0, 0);
        }
        if (arg1 > 0) {
            func_0880416C(arg0);
        }
    }
    return arg0;
}

}
