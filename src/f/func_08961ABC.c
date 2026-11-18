#include "common.h"

typedef struct {
    u8 pad_00[0x24];
    void *unk_24;
} T_08961ABC;

typedef struct {
    void *unk_00;
    u8 pad_04[0xC];
    s32 unk_10;
    u8 pad_14[0x8];
    s32 unk_1C[0x3E8];
    u8 unk_FBC[0x3E8][0x20];
    T_08961ABC unk_8CBC;
    T_08961ABC unk_8CE4;
} S_08961ABC;

extern u8 D_08A449F4[];
extern u8 D_08A47B38[];
extern u8 D_08A47B44[];
void func_08804000(void *, void (*)(void *, s32), s32, s32);
void func_0880416C(void *);
void func_08961C58(T_08961ABC *, void *);
void func_08961CB0(void *, s32 *);
void func_08961CB8(void *);
void func_0896204C(T_08961ABC *);
void func_0896216C(s32 *);
s32 func_0896217C(T_08961ABC *);
void func_08962690(void *, s32);

S_08961ABC *func_08961ABC(S_08961ABC *arg0, s16 arg1) {
    s32 i;
    void *e;

    if (arg0 != NULL) {
        arg0->unk_00 = D_08A47B44;
        func_0896217C(&arg0->unk_8CE4);
        func_0896217C(&arg0->unk_8CBC);
        func_0896216C(&arg0->unk_10);
        func_0896204C(&arg0->unk_8CBC);
        func_0896204C(&arg0->unk_8CE4);
        for (i = 0; i < 0x3E8; i++) {
            e = arg0->unk_FBC[i];
            func_08961CB8(e);
            func_08961CB0(e, &arg0->unk_1C[i]);
            func_08961C58(&arg0->unk_8CE4, e);
        }
        func_0896217C(&arg0->unk_8CE4);
        if (&arg0->unk_8CE4 != NULL) {
            arg0->unk_8CE4.unk_24 = D_08A47B38;
            func_0896204C(&arg0->unk_8CE4);
            func_08962690(&arg0->unk_8CE4, -1);
        }
        if (&arg0->unk_8CBC != NULL) {
            arg0->unk_8CBC.unk_24 = D_08A47B38;
            func_0896204C(&arg0->unk_8CBC);
            func_08962690(&arg0->unk_8CBC, -1);
        }
        func_08804000(arg0->unk_FBC, func_08962690, 0x20, 0x3E8);
        if (arg0 != NULL) {
            arg0->unk_00 = D_08A449F4;
        }
        if (arg1 > 0) {
            func_0880416C(arg0);
        }
    }
    return arg0;
}
