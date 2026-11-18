#include "common.h"

typedef struct {
    void *unk_00;
} M_08893114;

typedef struct {
    u8 unk_00[0x28];
} E_08893114;

typedef struct {
    E_08893114 *unk_00;
    s32 unk_04;
} V_08893114;

typedef struct {
    u8 pad_00[0x284];
    V_08893114 unk_284;
} N_08893114;

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
    M_08893114 unk_3A0;
    u8 pad_3A4[0x118];
    u8 unk_4BC[0xCBC - 0x4BC];
    u8 unk_CBC[0x28];
    u8 unk_CE4[0xD40 - 0xCE4];
    M_08893114 unk_D40;
    u8 pad_D44[0x6F60 - 0xD44];
    u8 unk_6F60[0x7760 - 0x6F60];
    u8 unk_7760[0x28];
    u8 unk_7788[0x77E0 - 0x7788];
    u8 unk_77E0[0x30];
    u8 unk_7810[0x9358 - 0x7810];
    N_08893114 unk_9358;
    u8 pad_95E4[0xC];
    u8 unk_95F0[4];
} S_08893114;

extern u8 D_08A455AC[];
extern u8 D_08A455C8[];
extern u8 D_08A455E0[];
extern u8 D_08A455F0[];
extern u8 D_08A4563C[];
extern u8 D_08A45690[];
extern u8 D_08A456A8[];

void func_08894F64(S_08893114 *);
void func_08976FC4(void *, s32);
void func_0893F220(E_08893114 *, s32);
void func_088A4B44(void *, s32);
void func_0889C804(void *, s32);
void func_08892A14(M_08893114 *);
void func_08892034(void *, s32);
void func_08892CE8(void *, s32);
void func_08892D94(M_08893114 *);
void func_0889286C(void *, s32);
void func_08893068(void *, s32);
void func_08804000(void *, void (*)(void *, s32), s32, s32);
void func_0885BDA0(M_08893114 *, s32);
void func_089692D8(S_08893114 *, s32);
void func_0880416C(S_08893114 *);

S_08893114 *func_08893114(S_08893114 *arg0, s16 arg1) {
    E_08893114 *p;
    V_08893114 *v;
    s32 *n;

    if (arg0 != NULL) {
        arg0->unk_08 = D_08A455AC;
        arg0->unk_58 = D_08A455C8;
        arg0->unk_7C = D_08A455E0;
        arg0->unk_CC = D_08A455F0;
        arg0->unk_370 = D_08A4563C;
        func_08894F64(arg0);
        func_08976FC4(arg0->unk_95F0, -1);
        if (&arg0->unk_9358 != NULL) {
            p = arg0->unk_9358.unk_284.unk_00;
            v = &arg0->unk_9358.unk_284;
            if (p != v->unk_00 + arg0->unk_9358.unk_284.unk_04) {
                n = &arg0->unk_9358.unk_284.unk_04;
                do {
                    func_0893F220(p, -1);
                    p++;
                } while (p != v->unk_00 + *n);
            }
            arg0->unk_9358.unk_284.unk_04 = 0;
        }
        func_088A4B44(arg0->unk_7810, -1);
        func_0889C804(arg0->unk_77E0, -1);
        if (&arg0->unk_D40 != NULL) {
            arg0->unk_D40.unk_00 = D_08A45690;
            func_08892A14(&arg0->unk_D40);
            func_08892034(arg0->unk_7788, -1);
            func_08892034(arg0->unk_7760, -1);
            func_08804000(arg0->unk_6F60, func_08892CE8, 0x20, 0x40);
            func_0885BDA0(&arg0->unk_D40, 0);
        }
        if (&arg0->unk_3A0 != NULL) {
            arg0->unk_3A0.unk_00 = D_08A456A8;
            func_08892D94(&arg0->unk_3A0);
            func_0889286C(arg0->unk_CE4, -1);
            func_0889286C(arg0->unk_CBC, -1);
            func_08804000(arg0->unk_4BC, func_08893068, 0x20, 0x40);
            func_0885BDA0(&arg0->unk_3A0, 0);
        }
        func_089692D8(arg0, 0);
        if (arg1 > 0) {
            func_0880416C(arg0);
        }
    }
    return arg0;
}
