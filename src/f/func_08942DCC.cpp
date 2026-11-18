#include "common.h"

extern "C" {

class B_08942DCC {
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

class Del_08942DCC {
public:
    virtual void v08();
    virtual void v0C(s32, s32 *, s32);
};

void func_08891578(s32, s32);

struct Ptr_08942DCC {
    s32 unk_00;
    Del_08942DCC *unk_04;
    s32 unk_08;
    s32 *unk_0C;
    s32 count() { return unk_0C != NULL ? *unk_0C : 0; }
    void release() {
        s32 &p = unk_08;
        if (p != 0) {
            s32 *&c = unk_0C;
            *c -= 1;
            if (count() == 0) {
                unk_04->v0C(p, c, unk_00);
                func_08891578(p, unk_00);
            }
        }
    }
};

typedef struct {
    void *unk_00;
    u8 pad_04[0x14];
    void *unk_18;
    u8 pad_1C[0x3A8];
    Ptr_08942DCC unk_3C4;
} M_16E0_08942DCC;

typedef struct {
    u8 pad_00[8];
    u8 unk_08[0x1B8];
    void *unk_1C0;
    u8 pad_1C4[0xC];
} M_1510_08942DCC;

typedef struct {
    u8 pad_00[0x48];
    s32 unk_48;
} M_60_08942DCC;

class T_08942DCC : public B_08942DCC {
public:
    u8 pad_54[0xC];
    M_60_08942DCC unk_60;
    u8 pad_AC[4];
    u8 unk_B0[0x1460];
    M_1510_08942DCC unk_1510;
    M_16E0_08942DCC unk_16E0;
};

extern u8 D_08A47554[];
extern u8 D_08A47598[];
extern u8 D_08A47660[];
extern u8 D_08A47678[];
extern u8 D_08A474C8[];
extern u8 D_08A44F44[];

void func_0880416C(void *);
void func_0885C534(void *, s32);
void func_0886F084(T_08942DCC *, s32);
void func_08944270(M_16E0_08942DCC *, s32);
void func_089406E0(void *, s32);

T_08942DCC *func_08942DCC(T_08942DCC *arg0, s16 arg1) {
    if (arg0 != NULL) {
        *(void **)&arg0->pad_00[0x50] = D_08A47554;
        arg0->unk_1510.unk_1C0 = D_08A47598;
        arg0->v20();
        if (&arg0->unk_16E0 != NULL) {
            arg0->unk_16E0.unk_00 = D_08A47660;
            arg0->unk_16E0.unk_18 = D_08A47678;
            if (&arg0->unk_16E0.unk_3C4 != NULL) {
                if (&arg0->unk_16E0.unk_3C4 != NULL) {
                    arg0->unk_16E0.unk_3C4.release();
                }
            }
            func_08944270(&arg0->unk_16E0, 0);
        }
        if (&arg0->unk_1510 != NULL) {
            arg0->unk_1510.unk_1C0 = D_08A474C8;
            func_089406E0(arg0->unk_1510.unk_08, -1);
        }
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
