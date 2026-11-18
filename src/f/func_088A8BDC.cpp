#include "common.h"

extern "C" {

typedef struct E_088A8BDC {
    struct E_088A8BDC *unk_00;
    struct E_088A8BDC *unk_04;
    u8 pad_08[0x28];
} E_088A8BDC;

typedef struct {
    E_088A8BDC *unk_00;
    E_088A8BDC *unk_04;
} SB_088A8BDC;

class Sub_088A8BDC : public SB_088A8BDC {
public:
    virtual E_088A8BDC *v08();
    virtual u32 v0C();
};

typedef struct {
    E_088A8BDC *unk_00;
    E_088A8BDC *unk_04;
    void *unk_08;
    u8 unk_0C[0x310 - 0xC];
    u32 unk_310;
    void *unk_314;
    void *unk_318;
    void *unk_31C;
    s32 unk_320;
} L_088A8BDC;

typedef struct {
    u8 pad_00[8];
} OB_088A8BDC;

class O_088A8BDC : public OB_088A8BDC {
public:
    virtual void v08();
    virtual void v0C();
    virtual void v10();
    virtual void v14();
    virtual void v18();
    virtual void v1C();
    virtual void v20();
    virtual void v24();
    virtual void v28();
    virtual void v2C();
    virtual void v30();
    virtual void v34();
    virtual void v38();
    virtual void v3C();
    virtual void v40();
    virtual void v44();
    virtual void v48();
    virtual void v4C();
    virtual void v50();
    virtual void v54();
    virtual void v58();
};

typedef struct {
    u8 pad_00[8];
    void *unk_08;
    u8 pad_0C[0x58 - 0xC];
    void *unk_58;
    u8 pad_5C[0x7C - 0x5C];
    void *unk_7C;
    u8 pad_80[0xCC - 0x80];
    void *unk_CC;
    u8 pad_D0[0x370 - 0xD0];
    void *unk_370;
    u8 pad_374[0x3A0 - 0x374];
    s32 unk_3A0;
    s32 unk_3A4;
    L_088A8BDC unk_3A8;
} Obj_0889A33C;

s32 func_0893D430(s32 *);
void func_08969254(Obj_0889A33C *, s32, s32);
extern u8 D_08A45B24[];
extern u8 D_08A45B40[];
extern u8 D_08A45B58[];
extern u8 D_08A45B68[];
extern u8 D_08A45BB4[];
extern u8 D_08A45BE0[];
extern u8 D_08A45BD0[];

Obj_0889A33C *func_088A8BDC(Obj_0889A33C *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    L_088A8BDC *l;
    E_088A8BDC *p;
    E_088A8BDC *prev;
    u32 i;

    func_08969254(arg0, arg2, func_0893D430(&arg1));
    arg0->unk_08 = D_08A45B24;
    arg0->unk_58 = D_08A45B40;
    arg0->unk_7C = D_08A45B58;
    arg0->unk_CC = D_08A45B68;
    arg0->unk_370 = D_08A45BB4;
    arg0->unk_3A0 = arg4;
    arg0->unk_3A4 = 0;
    arg0->unk_3A8.unk_08 = D_08A45BE0;
    l = &arg0->unk_3A8;
    l->unk_08 = D_08A45BD0;
    arg0->unk_3A8.unk_310 = ((u32)l->unk_0C + 3) & ~3;
    p = ((Sub_088A8BDC *)l)->v08();
    l->unk_00 = p;
    l->unk_04 = p + (((Sub_088A8BDC *)l)->v0C() - 1);
    p->unk_04 = (E_088A8BDC *)l;
    l->unk_04->unk_00 = (E_088A8BDC *)l;
    for (i = 1; i < ((Sub_088A8BDC *)l)->v0C(); i++) {
        prev = p;
        p++;
        prev->unk_00 = p;
        p->unk_04 = prev;
    }
    l->unk_31C = l;
    l->unk_320 = 0;
    l->unk_314 = &l->unk_314;
    l->unk_318 = &l->unk_314;
    ((O_088A8BDC *)arg0)->v58();
    return arg0;
}

}
