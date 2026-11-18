#include "common.h"

extern "C" {

class C_088686FC {
public:
    u8 pad_00[0x8];
    virtual void v08();
    virtual void v0C();
    virtual void v10();
    virtual void v14();
    virtual void v18();
};

typedef struct {
    void *unk_00;
    u8 pad_04[0x1C];
    u8 unk_20[0x98020 - 0x20];
    u8 unk_98020[0xA8020 - 0x98020];
    u8 unk_A8020[0x28];
    u8 unk_A8048[0x28];
} M_088686FC;

typedef struct {
    u8 pad_00[0x8];
    void *unk_08;
    u8 pad_0C[0x14];
    u8 unk_20[0xE020 - 0x20];
    u8 unk_E020[0x1C020 - 0xE020];
    u8 unk_1C020[0x2A020 - 0x1C020];
    u8 unk_2A020[0x42830 - 0x2A020];
    M_088686FC unk_42830;
    u8 pad_EA8A0[0xEA8D0 - 0xEA8A0];
    u8 unk_EA8D0[0xEAA00 - 0xEA8D0];
    u8 unk_EAA00[0x10];
} S_088686FC;

extern u8 D_08A44BC4[];
extern u8 D_08A44BFC[];
void func_0896C9E4(void *, s32);
void func_08868014(M_088686FC *);
void func_08867784(void *, s32);
void func_088683A8(void *, s32);
void func_0885F9A4(void *, s32);
void func_08868480(void *, s32);
void func_08868554(void *, s32);
void func_08868628(void *, s32);
void func_08804000(void *, void (*)(void *, s32), s32, s32);
void func_0885BDA0(void *, s32);
void func_0895EFE4(void *, s32);
void func_0880416C(void *);

S_088686FC *func_088686FC(S_088686FC *arg0, s16 arg1) {
    if (arg0 != NULL) {
        arg0->unk_08 = D_08A44BC4;
        ((C_088686FC *)arg0)->v18();
        func_0896C9E4(arg0->unk_EAA00, -1);
        func_0896C9E4(arg0->unk_EA8D0, -1);
        if (&arg0->unk_42830 != NULL) {
            arg0->unk_42830.unk_00 = D_08A44BFC;
            func_08868014(&arg0->unk_42830);
            func_08867784(arg0->unk_42830.unk_A8048, -1);
            func_08867784(arg0->unk_42830.unk_A8020, -1);
            func_08804000(arg0->unk_42830.unk_98020, func_088683A8, 0x20, 0x800);
            func_08804000(arg0->unk_42830.unk_20, func_0896C9E4, 0x130, 0x800);
            func_0885BDA0(&arg0->unk_42830, 0);
        }
        func_08804000(arg0->unk_2A020, func_0885F9A4, 0x1C, 0xE00);
        func_08804000(arg0->unk_1C020, func_08868480, 0x10, 0xE00);
        func_08804000(arg0->unk_E020, func_08868554, 0x10, 0xE00);
        func_08804000(arg0->unk_20, func_08868628, 0x10, 0xE00);
        func_0895EFE4(arg0, 0);
        if (arg1 > 0) {
            func_0880416C(arg0);
        }
    }
    return arg0;
}

}
