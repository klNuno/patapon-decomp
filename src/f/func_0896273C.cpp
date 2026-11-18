#include "common.h"

extern "C" {

class C_0896273C {
public:
    virtual void v08();
    virtual void v0C();
};

typedef struct {
    u8 pad_00[0x8];
    void *unk_08;
    u8 pad_0C[0x2C];
    u8 unk_38[0x24];
    void *unk_5C;
    u8 pad_60[0x10];
    void *unk_70;
    u8 pad_74[0xFB8];
    u8 unk_102C[0x7D00];
    u8 unk_8D2C[0x28];
    u8 unk_8D54[0x28];
} S_0896273C;

void func_08804000(void *, void (*)(void *, s32), s32, s32);
void func_0880416C(void *);
void func_0885BDA0(void *, s32);
void func_0895EFE4(void *, s32);
void func_0895FC58(void *, s32);
void func_0895FCC8(void *);
void func_08962184(void *, s32);
void func_0896232C(void *);
void func_08962D24(S_0896273C *);
void func_08962690(void *, s32);
extern u8 D_08A47974[];
extern u8 D_08A47AD4[];
extern u8 D_08A47B00[];
extern u8 D_08A47B44[];

S_0896273C *func_0896273C(S_0896273C *arg0, s16 arg1) {
    if (arg0 != NULL) {
        arg0->unk_08 = D_08A47B00;
        func_08962D24(arg0);
        ((C_0896273C *)&arg0->unk_70)->v0C();
        if (&arg0->unk_70 != NULL) {
            arg0->unk_70 = D_08A47B44;
            func_0896232C(&arg0->unk_70);
            func_08962184(arg0->unk_8D54, -1);
            func_08962184(arg0->unk_8D2C, -1);
            func_08804000(arg0->unk_102C, func_08962690, 0x20, 0x3E8);
            func_0885BDA0(&arg0->unk_70, 0);
        }
        if (arg0->unk_38 != NULL) {
            arg0->unk_5C = D_08A47AD4;
            func_0895FCC8(arg0->unk_38);
            func_0895FC58(arg0->unk_38, -1);
        }
        if (arg0 != NULL) {
            arg0->unk_08 = D_08A47974;
            func_0895EFE4(arg0, 0);
        }
        if (arg1 > 0) {
            func_0880416C(arg0);
        }
    }
    return arg0;
}

}
