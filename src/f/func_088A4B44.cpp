#include "common.h"

extern "C" {

class C_088A4B44 {
public:
    u8 pad_00[8];
    virtual void v08();
    virtual void v0C();
    virtual void v10();
    virtual void v14();
    virtual void v18();
};

typedef struct {
    u8 unk_00[0x80];
} E_088A4B44;

typedef struct {
    E_088A4B44 *unk_00;
    s32 unk_04;
} V_088A4B44;

typedef struct {
    void *unk_00;
    u8 pad_04[0x180];
    V_088A4B44 unk_184;
} M3A4_088A4B44;

typedef struct {
    void *unk_00;
} M1110_088A4B44;

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
    u8 pad_374[0x30];
    M3A4_088A4B44 unk_3A4;
    u8 pad_530[0x10];
    u8 unk_540[0x1110 - 0x540];
    M1110_088A4B44 unk_1110;
    u8 pad_1114[0x122C - 0x1114];
    u8 unk_122C[0x1A2C - 0x122C];
    u8 unk_1A2C[0x28];
    u8 unk_1A54[4];
} S_088A4B44;

extern u8 D_08A456A8[];
extern u8 D_08A459A0[];
extern u8 D_08A459BC[];
extern u8 D_08A459D4[];
extern u8 D_08A459E4[];
extern u8 D_08A45A30[];
void func_08892D94(M1110_088A4B44 *);
void func_0889286C(void *, s32);
void func_08893068(void);
void func_08804000(void *, void (*)(void), s32, s32);
void func_0885BDA0(M1110_088A4B44 *, s32);
void func_088B3A8C(void *, s32);
void func_089692D8(S_088A4B44 *, s32);
void func_0880416C(S_088A4B44 *);

S_088A4B44 *func_088A4B44(S_088A4B44 *arg0, s16 arg1) {
    E_088A4B44 *p;
    V_088A4B44 *v;

    if (arg0 != NULL) {
        arg0->unk_08 = D_08A459A0;
        arg0->unk_58 = D_08A459BC;
        arg0->unk_7C = D_08A459D4;
        arg0->unk_CC = D_08A459E4;
        arg0->unk_370 = D_08A45A30;
        ((C_088A4B44 *)arg0)->v18();
        if (&arg0->unk_1110 != NULL) {
            arg0->unk_1110.unk_00 = D_08A456A8;
            func_08892D94(&arg0->unk_1110);
            func_0889286C(arg0->unk_1A54, -1);
            func_0889286C(arg0->unk_1A2C, -1);
            func_08804000(arg0->unk_122C, func_08893068, 0x20, 0x40);
            func_0885BDA0(&arg0->unk_1110, 0);
        }
        func_088B3A8C(arg0->unk_540, -1);
        if (&arg0->unk_3A4 != NULL) {
            p = arg0->unk_3A4.unk_184.unk_00;
            v = &arg0->unk_3A4.unk_184;
            if ((u32)p != (u32)(p + arg0->unk_3A4.unk_184.unk_04)) {
                do {
                    p++;
                } while (p != v->unk_00 + arg0->unk_3A4.unk_184.unk_04);
            }
            arg0->unk_3A4.unk_184.unk_04 = 0;
        }
        func_089692D8(arg0, 0);
        if (arg1 > 0) {
            func_0880416C(arg0);
        }
    }
    return arg0;
}

}
