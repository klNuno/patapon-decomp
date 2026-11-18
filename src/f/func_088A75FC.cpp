#include "common.h"

extern "C" {

typedef struct {
    u8 pad_00[8];
} CB_088A75FC;

class C_088A75FC : public CB_088A75FC {
public:
    virtual void v00();
    virtual void v01();
    virtual void v02();
    virtual void v03();
    virtual void v04();
    virtual void v05();
    virtual void v06();
    virtual void v07();
    virtual void v08();
    virtual void v09();
    virtual void v0A();
    virtual void v0B();
    virtual void v0C();
    virtual void v0D();
    virtual void v0E();
    virtual void v0F();
    virtual void v10();
    virtual void v11();
    virtual void v12();
    virtual void v13();
    virtual void v14();
};

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
    u8 pad_374[0x2C];
    s32 unk_3A0;
    u8 pad_3A4[0xC];
    u8 unk_3B0[0xC];
    s32 unk_3BC;
    s32 unk_3C0;
    u8 pad_3C4[4];
    s32 unk_3C8;
    s32 unk_3CC;
    s32 unk_3D0;
    s32 unk_3D4;
    s32 unk_3D8;
    u8 pad_3DC[0x14];
    s32 unk_3F0;
    u8 pad_3F4[0x10];
    s32 unk_404;
    s32 unk_408;
    s32 unk_40C;
    s32 unk_410;
    s32 unk_414;
    s32 unk_418;
    s32 unk_41C;
    u8 pad_420[0x10];
    s32 unk_430;
    u8 pad_434[0xC];
    u8 unk_440[0x20];
    s32 unk_460;
    f32 unk_464;
    f32 unk_468;
    u8 pad_46C[4];
    u8 unk_470[0x6D4];
    s32 unk_B44;
} Obj_088A75FC;

extern u8 D_08A45A4C[];
extern u8 D_08A45A68[];
extern u8 D_08A45A80[];
extern u8 D_08A45A90[];
extern u8 D_08A45ADC[];

s32 func_0893D430(s32 *);
void func_08969254(Obj_088A75FC *, s32, s32);
void func_088A8600(void *, s32);
void func_0889E978(void *);
void func_088A8BDC(void *, s32, s32, s32, s32);

Obj_088A75FC *func_088A75FC(Obj_088A75FC *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    s32 temp = arg1;
    func_08969254(arg0, arg2, func_0893D430(&temp));
    arg0->unk_08 = D_08A45A4C;
    arg0->unk_58 = D_08A45A68;
    arg0->unk_7C = D_08A45A80;
    arg0->unk_CC = D_08A45A90;
    arg0->unk_370 = D_08A45ADC;
    arg0->unk_3A0 = arg4;
    arg0->unk_3BC = 0;
    arg0->unk_3C0 = 0;
    arg0->unk_3C8 = 0;
    arg0->unk_3CC = 1;
    arg0->unk_3D0 = 2;
    arg0->unk_3D4 = 3;
    arg0->unk_3D8 = 4;
    arg0->unk_3F0 = 0;
    arg0->unk_408 = 0;
    arg0->unk_40C = 0;
    arg0->unk_410 = 0;
    arg0->unk_414 = 0;
    arg0->unk_418 = 0;
    arg0->unk_41C = -1;
    arg0->unk_404 = 0;
    arg0->unk_408 = 0;
    arg0->unk_40C = 0;
    arg0->unk_410 = 0;
    arg0->unk_414 = 0;
    arg0->unk_418 = 0;
    arg0->unk_41C = -1;
    func_088A8600(arg0->unk_3B0, 0);
    arg0->unk_430 = 0;
    func_0889E978(arg0->unk_440);
    func_0889E978(arg0->unk_440);
    arg0->unk_460 = 0;
    arg0->unk_464 = 15.0f;
    arg0->unk_468 = 1.0f;
    func_088A8BDC(arg0->unk_470, arg1, arg2, arg3, arg4);
    arg0->unk_B44 = 0;
    ((C_088A75FC *)arg0)->v14();
    return arg0;
}

}
