#include "common.h"

typedef struct { u8 pad_00[8]; } T_088DEFA0;
typedef struct {
    s32 unk_00, unk_04, unk_08;
    u8 unk_0C, unk_0D;
    u8 pad_0E[2];
} E;

typedef struct {
    u8 pad_00[8];
    void *unk_08;
    s32 unk_0C, unk_10, unk_14, unk_18;
    u8 unk_1C[8];
    T_088DEFA0 unk_24;
    s32 unk_2C;
    E unk_30[2];
} S;

extern u8 D_08A48298[], D_08A483EC[];
void func_08980138(S *, s32, s32);
void func_089457D8(void *);
void func_0898B81C(T_088DEFA0 *);
void func_0898AFCC(S *);

S *func_0898AD74(S *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    E *p;
    func_08980138(arg0, arg1, arg2);
    arg0->unk_08 = D_08A48298;
    arg0->unk_0C = 0;
    arg0->unk_10 = arg3;
    arg0->unk_14 = arg4;
    arg0->unk_18 = -1;
    func_089457D8(arg0->unk_1C);
    func_0898B81C(&arg0->unk_24);
    arg0->unk_2C = 0;
    p = arg0->unk_30;
    do {
        p->unk_00 = -1;
        p->unk_04 = 0;
        p->unk_08 = 0;
        p->unk_0C = 0;
        p->unk_0D = 1;
        p++;
    } while (p < &arg0->unk_30[2]);
    arg0->unk_08 = D_08A483EC;
    func_0898AFCC(arg0);
    return arg0;
}
