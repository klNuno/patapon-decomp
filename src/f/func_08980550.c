#include "common.h"

typedef struct Elem {
    u8 pad_00[0x50];
} Elem;

typedef struct Vec {
    Elem *unk_00;
    s32 unk_04;
} Vec;

typedef struct M {
    u8 pad_00[0xA04];
    Vec unk_A04;
} M;

typedef struct S {
    u8 pad_00[0x8];
    M unk_08;
    u8 pad_A14[0x38];
    u8 unk_A4C[4];
} S;

extern void func_0880416C(void *);
extern void func_088D6DAC(void *, s32);

S *func_08980550(S *arg0, s16 arg1) {
    Vec *vp;
    Elem *p;
    s32 n;

    if (arg0 != NULL) {
        func_088D6DAC(arg0->unk_A4C, -1);
        if (&arg0->unk_08 != NULL) {
            n = arg0->unk_08.unk_A04.unk_04;
            p = arg0->unk_08.unk_A04.unk_00;
            vp = &arg0->unk_08.unk_A04;
            if ((u32)p != (u32)(p + n)) {
                do {
                    p++;
                } while (p != vp->unk_00 + n);
            }
            arg0->unk_08.unk_A04.unk_04 = 0;
        }
        if (arg1 > 0) {
            func_0880416C(arg0);
        }
    }
    return arg0;
}
