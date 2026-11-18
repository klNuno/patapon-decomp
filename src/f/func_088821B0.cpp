#include "common.h"

extern "C" {

class V_088821B0 {
public:
    virtual void vfunc_08();
    virtual void vfunc_0C();
    virtual void vfunc_10(void *);
};

typedef struct {
    u8 pad_00[0x24];
    void *unk_24;
} L_088821B0;

typedef struct {
    void *unk_00;
    u8 pad_04[0x1C];
    u8 unk_20[0x2400];
    u8 unk_2420[0x2000];
    u8 unk_4420[0x28];
    u8 unk_4448[0x28];
} M_088821B0;

typedef struct {
    u8 pad_00[0x24];
    V_088821B0 *unk_24;
    void *unk_28;
    u8 pad_2C[4];
    L_088821B0 unk_30;
    L_088821B0 unk_58;
    u8 pad_80[0x10];
    M_088821B0 unk_90;
} S_088821B0;

extern u8 D_08A45398[];
extern u8 D_08A45350[];

void func_0880416C(void *);
void func_08804000(void *, void (*)(void *, s32), s32, s32);
void func_08827C2C(S_088821B0 *);
void func_08827CAC(S_088821B0 *, void (*)(void), s32);
void func_08827DA8(S_088821B0 *);
void func_08881D58(void);
void func_08882394(S_088821B0 *);
void func_08881D84(M_088821B0 *);
void func_08881BB0(void *, s32);
void func_08882058(void *, s32);
void func_088820EC(void *, s32);
void func_0885BDA0(void *, s32);
void func_0888065C(L_088821B0 *);
void func_088804C0(L_088821B0 *, s32);

S_088821B0 *func_088821B0(S_088821B0 *arg0, s16 arg1) {
    if (arg0 != NULL) {
        func_08882394(arg0);
        if (&arg0->unk_90 != NULL) {
            arg0->unk_90.unk_00 = D_08A45398;
            func_08881D84(&arg0->unk_90);
            func_08881BB0(arg0->unk_90.unk_4448, -1);
            func_08881BB0(arg0->unk_90.unk_4420, -1);
            func_08804000(arg0->unk_90.unk_2420, func_08882058, 0x20, 0x100);
            func_08804000(arg0->unk_90.unk_20, func_088820EC, 0x24, 0x100);
            func_0885BDA0(&arg0->unk_90, 0);
        }
        if (&arg0->unk_58 != NULL) {
            arg0->unk_58.unk_24 = D_08A45350;
            func_0888065C(&arg0->unk_58);
            func_088804C0(&arg0->unk_58, -1);
        }
        if (&arg0->unk_30 != NULL) {
            arg0->unk_30.unk_24 = D_08A45350;
            func_0888065C(&arg0->unk_30);
            func_088804C0(&arg0->unk_30, -1);
        }
        if (arg0 != NULL) {
            if (arg0->unk_28 != NULL) {
                if (arg0->unk_28 != NULL) {
                    func_08827CAC(arg0, func_08881D58, 0);
                    func_08827DA8(arg0);
                }
                func_08827C2C(arg0);
                arg0->unk_24->vfunc_10(arg0->unk_28);
                arg0->unk_28 = NULL;
                arg0->unk_24 = NULL;
            }
        }
        if (arg1 > 0) {
            func_0880416C(arg0);
        }
    }
    return arg0;
}

}
