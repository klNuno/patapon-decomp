#include "common.h"

inline void *operator new(unsigned int, void *p) { return p; }

extern "C" {

typedef struct {
    f32 unk_00;
    f32 unk_04;
    f32 unk_08;
} V;

extern f32 D_089F8A80[];
extern f32 D_089F8A88[];
extern f32 D_089F8A8C[];
extern u8 D_08A44A8C[];
extern u8 D_08A44A98[];
extern u8 D_08A44AA4[];

struct E {
    void *unk_00;
    V unk_04;
    void *unk_10;

    E(const volatile V &arg0, void *arg1) {
        *(void *volatile *)&unk_00 = D_08A44AA4;
        unk_00 = D_08A44A8C;
        unk_04 = *(const V *)(u32)&arg0;
        unk_10 = arg1;
    }

    E(void *arg0, volatile V &b) {
        b.unk_00 = D_089F8A80[1];
        b.unk_04 = D_089F8A88[0];
        b.unk_08 = D_089F8A8C[0];
        *(void *volatile *)&unk_00 = D_08A44AA4;
        unk_00 = D_08A44A98;
        unk_04 = *(const V *)(u32)&b;
        unk_10 = arg0;
    }
};

typedef struct {
    E *unk_00;
    void *unk_04;
    E unk_08;
} H;

typedef struct {
    u8 unk_00;
    u8 pad_01[3];
    u8 unk_04[0x14];
    s32 unk_18;
    u8 unk_1C[0x10];
} P;

typedef struct {
    void *unk_00;
    u8 unk_04[0x68];
    char unk_6C[0x44];
    s32 unk_B0;
    s32 unk_B4;
    u8 unk_B8;
    u8 pad_B9[3];
    u8 unk_BC[0x14];
    s32 unk_D0;
    u8 unk_D4[0x10];
    H unk_E4;
} S;

extern f32 D_089F8A78[];
extern f32 D_089F8A80[];
extern f32 D_089F8A88[];
extern f32 D_089F8A8C[];
extern u8 D_08A44A8C[];
extern u8 D_08A44A98[];
extern u8 D_08A44AA4[];
void func_0881F120(void *, void *, s32);
void func_08822B3C(char *, char *);
void func_0885FD6C(void *, void *);
void func_0885FE68(void *, void *);

void func_0885FBA8(S *arg0, void *arg1, char *arg2, s32 arg3, s32 arg4, P *arg5, H *arg6) {
    volatile V a;
    volatile V b;

    arg0->unk_00 = arg0->unk_04;
    if (arg1 != NULL) {
        arg0->unk_00 = arg1;
    }
    if (arg2 != NULL) {
        func_08822B3C(arg0->unk_6C, arg2);
    }
    arg0->unk_B0 = arg3;
    arg0->unk_B4 = arg4;
    arg0->unk_B8 = arg5->unk_00;
    func_0885FE68(arg0->unk_BC, arg5->unk_04);
    arg0->unk_D0 = arg5->unk_18;
    func_0885FD6C(arg0->unk_D4, arg5->unk_1C);
    if (arg6 != NULL) {
        if (arg6 == &arg0->unk_E4) {
            return;
        }
        if (arg6->unk_00 != NULL) {
            if (arg6->unk_04 != NULL) {
                arg0->unk_E4.unk_04 = arg6->unk_04;
                arg0->unk_E4.unk_00 = new (&arg0->unk_E4.unk_08) E(&arg0->unk_E4.unk_04, b);
            } else {
                func_0881F120(&arg0->unk_E4.unk_08, &arg6->unk_08, 0x14);
                arg0->unk_E4.unk_00 = &arg0->unk_E4.unk_08;
            }
        } else {
            arg0->unk_E4.unk_00 = NULL;
            arg0->unk_E4.unk_04 = NULL;
        }
    } else {
        a.unk_00 = D_089F8A78[0];
        a.unk_04 = D_089F8A78[1];
        a.unk_08 = D_089F8A80[0];
        arg0->unk_E4.unk_04 = NULL;
        arg0->unk_E4.unk_00 = new (&arg0->unk_E4.unk_08) E(a, arg0);
    }
}

}
