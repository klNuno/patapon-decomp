#include "common.h"

extern "C" {

struct V0892B21C {
    u8 pad_00[0x16C];
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
    virtual void vfunc_38();
    virtual void vfunc_3C();
    virtual void vfunc_40();
    virtual void vfunc_44();
    virtual void vfunc_48();
    virtual void vfunc_4C();
    virtual void vfunc_50();
    virtual void vfunc_54();
    virtual void vfunc_58();
    virtual void vfunc_5C();
    virtual void vfunc_60();
    virtual void vfunc_64();
    virtual void vfunc_68();
};

typedef struct S0 {
    u8 pad_00[0x1C];
    void *unk_1C;
} S0;

typedef struct T0 {
    u8 pad_00[0x16C];
    void *unk_16C;
    u8 unk_170[0x78];
    void *unk_1E8;
    u8 unk_1EC[4];
    u8 unk_1F0[0x50];
    void *unk_240;
    u8 pad_244[0xC];
    u8 unk_250[0x28];
    void *unk_278;
    u8 pad_27C[4];
    S0 unk_280;
    u8 pad_2A0[0x60];
    u8 unk_300[0x288];
    u8 unk_588[4];
} T0;

extern u8 D_08A46F50[];
extern u8 D_08A46F68[];
extern u8 D_08A46F88[];
extern u8 D_08A46FA0[];
extern u8 D_08A4535C[];

void func_089D4684(void *, s32);
void func_08865F78(void *, s32);
void func_08880160(S0 *);
void func_088CE530(void *, s32);
void func_08933528(void *, s32);
void func_08932D5C(void *, s32);
void func_0893236C(void *, s32);
void func_0880416C(void *);

T0 *func_0892B21C(T0 *arg0, s16 arg1) {
    if (arg0 != NULL) {
        arg0->unk_16C = D_08A46F50;
        arg0->unk_1E8 = D_08A46F68;
        arg0->unk_240 = D_08A46F88;
        arg0->unk_278 = D_08A46FA0;
        ((V0892B21C *)arg0)->vfunc_68();
        func_089D4684(arg0->unk_588, -1);
        func_08865F78(arg0->unk_300, -1);
        if (&arg0->unk_280 != NULL) {
            arg0->unk_280.unk_1C = D_08A4535C;
            func_08880160(&arg0->unk_280);
        }
        func_088CE530(arg0->unk_250, 0);
        func_08933528(arg0->unk_1F0, 0);
        func_08932D5C(arg0->unk_170, 0);
        func_0893236C(arg0, 0);
        if (arg1 > 0) {
            func_0880416C(arg0);
        }
    }
    return arg0;
}

}
