#include "common.h"

typedef struct {
    s32 unk_00;
    u8 pad_04[0xC];
    u8 unk_10[0xA0];
    s32 unk_B0;
    void *unk_B4;
} Obj_088B3A04;

typedef struct {
    u8 pad_00[0x8];
    void *unk_08;
    u8 pad_0C[0x4C];
    void *unk_58;
    u8 pad_5C[0x20];
    void *unk_7C;
    u8 pad_80[0x4C];
    void *unk_CC;
    u8 pad_D0[0x2A0];
    void *unk_370;
    u8 pad_374[0x3C];
    u8 unk_3B0[0x5D0];
    Obj_088B3A04 unk_980;
    u8 pad_A38[0x118];
    u8 unk_B50[4];
} T088B3A8C;

void func_0880416C(void *);
void func_08880778(void *, s32);
void func_08880CDC(void *, s32);
void func_088825A4(s32, void *);
void func_0889CB40(void *, s32);
void func_088B4710(T088B3A8C *);
void func_0893C570(void *, s32);
void func_089692D8(void *, s32);
extern u8 D_08A45C5C[];
extern u8 D_08A45C78[];
extern u8 D_08A45C90[];
extern u8 D_08A45CA0[];
extern u8 D_08A45CEC[];
extern u8 D_08A45D08[];

T088B3A8C *func_088B3A8C(T088B3A8C *arg0, s16 arg1) {
    if (arg0 != NULL) {
        arg0->unk_08 = D_08A45C5C;
        arg0->unk_58 = D_08A45C78;
        arg0->unk_7C = D_08A45C90;
        arg0->unk_CC = D_08A45CA0;
        arg0->unk_370 = D_08A45CEC;
        func_088B4710(arg0);
        func_0893C570(arg0->unk_B50, -1);
        if (&arg0->unk_980 != NULL) {
            arg0->unk_980.unk_B4 = D_08A45D08;
            if (arg0->unk_980.unk_00 != 0) {
                func_08880CDC(arg0->unk_980.unk_10, arg0->unk_980.unk_B0);
                arg0->unk_980.unk_B0 = 0;
                func_088825A4(arg0->unk_980.unk_00, arg0->unk_980.unk_10);
            }
            func_08880778(arg0->unk_980.unk_10, -1);
        }
        func_0889CB40(arg0->unk_3B0, -1);
        func_089692D8(arg0, 0);
        if (arg1 > 0) {
            func_0880416C(arg0);
        }
    }
    return arg0;
}
