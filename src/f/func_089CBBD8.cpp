#include "common.h"

extern "C" {

class Sub089CBBD8 {
public:
    virtual void unk_08();
    virtual void unk_0C();
    virtual void unk_10();
    virtual void unk_14();
};

typedef struct {
    u8 pad_00[0x48];
    s32 unk_48;
} M60_089CBBD8;

class V089CBBD8 {
public:
    u8 pad_00[0x50];
    virtual void unk_08();
    virtual void unk_0C();
    virtual void unk_10();
    virtual void unk_14();
    virtual void unk_18();
    virtual void unk_1C();
    virtual void unk_20();
};

typedef struct {
    void *unk_00;
} SubR089CBBD8;

typedef struct S089CBBD8 {
    u8 pad_00[0x50];
    void *unk_50;
    u8 pad_54[0xC];
    M60_089CBBD8 unk_60;
    u8 pad_AC[0x4];
    u8 unk_B0[0x1470];
    u8 unk_1520[0xF20];
    SubR089CBBD8 unk_2440;
} S089CBBD8;

extern u8 D_08A48E00[];
extern u8 D_08A48024[];
extern u8 D_08A44F44[];

void func_0880416C(void *);
void func_0885C534(void *, s32);
void func_0886B11C(void *, s32);
void func_0886F084(void *, s32);
void func_089CC00C(void *, s32);

S089CBBD8 *func_089CBBD8(S089CBBD8 *arg0, s16 arg1) {
    if (arg0 != NULL) {
        arg0->unk_50 = D_08A48E00;
        ((V089CBBD8 *)arg0)->unk_20();
        if (&arg0->unk_2440 != NULL) {
            arg0->unk_2440.unk_00 = D_08A48024;
            ((Sub089CBBD8 *)&arg0->unk_2440)->unk_14();
            func_0886B11C(&arg0->unk_2440, 0);
        }
        func_089CC00C(arg0->unk_1520, -1);
        if (arg0 != NULL) {
            arg0->unk_50 = D_08A44F44;
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
