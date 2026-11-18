#include "common.h"

typedef struct {
    u8 pad_00[0x20];
} E;

typedef struct {
    u8 pad_00[0x24];
    void *unk_24;
} L;

typedef struct {
    void *unk_00;
    u8 pad_04[0xC];
    u8 unk_10[0xC];
    s32 unk_1C[0x40];
    E unk_11C[0x40];
    L unk_91C;
    L unk_944;
} S;

extern u8 D_08A456A8[];
extern u8 D_08A45668[];
extern u8 D_08A449F4[];

void func_0880416C(void *);
void func_08804000(void *, void (*)(void *, s32), s32, s32);
void func_08892340(void *, void *);
void func_08892398(void *, void *);
void func_088923A0(void *);
void func_08892734(void *);
void func_08892854(void *);
void func_08892864(void *);
void func_08893068(void *, s32);

S *func_088921DC(S *arg0, s16 arg1) {
    s32 i;
    E *e;

    if (arg0 != NULL) {
        arg0->unk_00 = D_08A456A8;
        func_08892864(&arg0->unk_944);
        func_08892864(&arg0->unk_91C);
        func_08892854(arg0->unk_10);
        func_08892734(&arg0->unk_91C);
        func_08892734(&arg0->unk_944);
        for (i = 0; i < 0x40; i++) {
            e = &arg0->unk_11C[i];
            func_088923A0(e);
            func_08892398(e, &arg0->unk_1C[i]);
            func_08892340(&arg0->unk_944, e);
        }
        func_08892864(&arg0->unk_944);
        if (&arg0->unk_944 != NULL) {
            arg0->unk_944.unk_24 = D_08A45668;
            func_08892734(&arg0->unk_944);
            func_08893068(&arg0->unk_944, -1);
        }
        if (&arg0->unk_91C != NULL) {
            arg0->unk_91C.unk_24 = D_08A45668;
            func_08892734(&arg0->unk_91C);
            func_08893068(&arg0->unk_91C, -1);
        }
        func_08804000(arg0->unk_11C, func_08893068, 0x20, 0x40);
        if (arg0 != NULL) {
            arg0->unk_00 = D_08A449F4;
        }
        if (arg1 > 0) {
            func_0880416C(arg0);
        }
    }
    return arg0;
}
