#include "common.h"

typedef struct {
    s32 unk_00;
    u8 pad_04[0xC];
    u8 unk_10[0x90];
    u8 unk_A0[0x10];
    s32 unk_B0;
    s32 unk_B4;
    s32 unk_B8;
    s32 unk_BC;
    s32 unk_C0;
    s32 unk_C4;
    s32 unk_C8;
    s32 unk_CC;
    u8 unk_D0[0x10];
    u8 unk_E0;
    u8 pad_E1[3];
    void *unk_E4;
    u8 pad_E8[8];
} E;

typedef struct {
    u8 pad_00[0x3C10];
    E *unk_3C10;
    s32 unk_3C14;
} V;

extern char D_08A484B4[];

void func_0898F5FC(void *, void *);
void func_088E20F4(void *, void *);
void func_0898F5D4(void *, void *);

V *func_0898F4B0(V *arg0, s32 arg1, E *arg2) {
    E *p;
    E **dp;
    s32 *np;

    arg0->unk_3C10 = (E *)(((u32)arg0 & 0xF) + (u32)arg0);
    arg0->unk_3C14 = arg1;
    p = arg0->unk_3C10;
    dp = &arg0->unk_3C10;
    if ((u32)p != (u32)(p + arg1)) {
        np = &arg0->unk_3C14;
        do {
            if (p != NULL) {
                p->unk_E4 = D_08A484B4;
                p->unk_00 = arg2->unk_00;
                func_0898F5FC(p->unk_10, arg2->unk_10);
                func_088E20F4(p->unk_A0, arg2->unk_A0);
                p->unk_B0 = arg2->unk_B0;
                p->unk_B4 = arg2->unk_B4;
                p->unk_B8 = arg2->unk_B8;
                p->unk_BC = arg2->unk_BC;
                p->unk_C0 = arg2->unk_C0;
                p->unk_C4 = arg2->unk_C4;
                p->unk_C8 = arg2->unk_C8;
                p->unk_CC = arg2->unk_CC;
                func_0898F5D4(p->unk_D0, arg2->unk_D0);
                p->unk_E0 = arg2->unk_E0;
            }
            p++;
        } while (p != *dp + *np);
    }
    return arg0;
}
