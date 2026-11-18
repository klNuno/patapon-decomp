#include "common.h"

extern "C" {

class Al {
public:
    virtual void v0();
    virtual void v1();
    virtual void v2(void *);
};

typedef struct {
    u8 pad_00[0x10];
} E10;

typedef struct {
    u8 pad_00[0x168];
} E168;

typedef struct {
    E10 *unk_00;
    u32 unk_04;
    Al *unk_08;
} V10;

typedef struct {
    E168 *unk_00;
    u32 unk_04;
    Al *unk_08;
} V168;

typedef struct {
    u8 pad_00[0x28];
    V10 unk_28;
    u8 pad_34[8];
} W;

typedef struct {
    u8 pad_00[0x18];
    s32 unk_18;
    s32 unk_1C;
    s32 unk_20;
    s32 unk_24;
    u8 pad_28[0xB4];
    V168 unk_DC;
    u8 unk_E8[4];
    u8 unk_EC[0x614];
    u8 unk_700[0x10];
    W unk_710;
    u8 unk_74C[0x82C];
    u8 unk_F78[0x2D0];
    u8 unk_1248[4];
} S;

extern char D_089F8B20[];
void func_0880416C(void *);
void func_08860FF4(void *, s32);
void func_08861180(void *, s32);
void func_08861624(S *);
void func_08913F9C(void *, s32);
void func_0896970C(void *, s32);
void func_089B55EC(void *, s32);
int sceIoDevctl(const char *, u32, void *, s32, void *, s32);
int sceKernelDeleteCallback(s32);
int sceKernelDeleteEventFlag(s32);
int sceUmdUnRegisterUMDCallBack(s32);

S *func_0886135C(S *arg0, s16 arg1) {
    if (arg0 != NULL) {
        if (arg0->unk_18 > 0) {
            sceUmdUnRegisterUMDCallBack(arg0->unk_18);
            sceKernelDeleteCallback(arg0->unk_18);
            arg0->unk_18 = 0;
        }
        if (arg0->unk_1C > 0) {
            sceKernelDeleteCallback(arg0->unk_1C);
            arg0->unk_1C = 0;
        }
        if (arg0->unk_20 > 0) {
            sceKernelDeleteEventFlag(arg0->unk_20);
            arg0->unk_20 = 0;
        }
        if (arg0->unk_24 > 0) {
            s32 cb = arg0->unk_24;
            sceIoDevctl(D_089F8B20, 0x02415822, &cb, 4, NULL, 0);
            arg0->unk_24 = 0;
        }
        func_08861624(arg0);
        func_0896970C(arg0->unk_1248, -1);
        func_089B55EC(arg0->unk_F78, -1);
        func_08913F9C(arg0->unk_74C, -1);
        if (&arg0->unk_710 != NULL) {
            if (&arg0->unk_710.unk_28 != NULL && *(volatile u32 *)&arg0->unk_710.unk_28.unk_04 != 0) {
                E10 *p = arg0->unk_710.unk_28.unk_00;
                E10 *e = p + arg0->unk_710.unk_28.unk_04;
                E10 *q = p;
                do {
                    q++;
                } while (q != e);
                arg0->unk_710.unk_28.unk_08->v2(p);
            }
        }
        if ((void *)arg0->unk_EC != NULL) {
            func_08860FF4(arg0->unk_700, 0);
            func_08861180(arg0->unk_EC, 0);
        }
        if (&arg0->unk_DC != NULL && *(volatile u32 *)&arg0->unk_DC.unk_04 != 0) {
            E168 *p = arg0->unk_DC.unk_00;
            E168 *e = p + arg0->unk_DC.unk_04;
            E168 *q = p;
            do {
                q++;
            } while (q != e);
            arg0->unk_DC.unk_08->v2(p);
        }
        if (arg1 > 0) {
            func_0880416C(arg0);
        }
    }
    return arg0;
}

}
