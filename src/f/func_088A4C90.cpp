#include "common.h"

extern "C" {

class V_088A4C90 {
public:
    u8 pad_00[8];
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
    virtual void v10();
    virtual void v11();
    virtual void v12();
    virtual void v13();
    virtual void v14();
    virtual void v15();
    virtual void v16();
    virtual void v17();
    virtual void v18();
    virtual void v19();
    virtual void v20();
};

typedef struct {
    u8 pad_00[0x20];
} E_088A4C90;

typedef struct {
    u8 pad_00[0x10];
    u8 unk_10[0xC];
    s32 unk_1C[0x40];
    E_088A4C90 unk_11C[0x40];
} S_088A4C90;

typedef struct {
    u8 pad_00[0x530];
    s32 unk_530;
    u8 pad_534[0x540 - 0x534];
    u8 unk_540[0x10F4 - 0x540];
    u8 unk_10F4;
    u8 pad_10F5[3];
    s32 unk_10F8;
    u8 pad_10FC[4];
    s32 unk_1100;
    u8 unk_1104;
    u8 pad_1105[0x1110 - 0x1105];
    S_088A4C90 unk_1110;
    u8 unk_1A2C[0x28];
    u8 unk_1A54[0x28];
} Obj_088A4C90;

void func_08892340(void *, void *);
void func_08892398(void *, void *);
void func_088923A0(void *);
void func_08892734(void *);
void func_08892854(void *);
void func_08892864(void *);

void func_088A4C90(Obj_088A4C90 *arg0) {
    s32 i;
    S_088A4C90 *t;
    E_088A4C90 *e;

    arg0->unk_530 = 0;
    ((V_088A4C90 *)arg0->unk_540)->v20();
    arg0->unk_10F4 = 0;
    arg0->unk_10F8 = -1;
    func_08892864(arg0->unk_1A54);
    func_08892864(arg0->unk_1A2C);
    func_08892854(arg0->unk_1110.unk_10);
    func_08892734(arg0->unk_1A2C);
    func_08892734(arg0->unk_1A54);
    t = &arg0->unk_1110;
    for (i = 0; i < 0x40; i++) {
        e = &t->unk_11C[i];
        func_088923A0(e);
        func_08892398(e, &t->unk_1C[i]);
        func_08892340(arg0->unk_1A54, e);
    }
    func_08892864(arg0->unk_1A54);
    arg0->unk_1100 = 0;
    arg0->unk_1104 = 0;
}

}
