#include "common.h"

typedef struct {
    u8 pad_00[0xC];
    s32 unk_0C;
    u8 pad_10[0x4];
    s32 unk_14;
    void *unk_18;
    u8 pad_1C[0x8];
} E_089C54E8;

typedef struct {
    E_089C54E8 *unk_00;
    s32 unk_04;
} V_089C54E8;

typedef struct {
    u8 pad_00[0x1214];
    u8 unk_1214[0x10];
    u8 unk_1224[0x314];
    u8 unk_1538[0x10];
    u8 unk_1548[0x124];
    V_089C54E8 unk_166C;
} A_089C54E8;

void func_0880416C(void *);
void func_0885DE4C(void *);
void func_089C50F4(void *, s32);
void func_089C5280(void *, s32);
void func_089C52F8(void *, s32);
void func_089C5484(void *, s32);
extern u8 D_08A44AD8[];

A_089C54E8 *func_089C54E8(A_089C54E8 *arg0, s16 arg1) {
    E_089C54E8 *p;
    V_089C54E8 *vp;
    s32 *sp;

    if (arg0 != NULL) {
        if (arg0->unk_1548 != NULL) {
            p = arg0->unk_166C.unk_00;
            vp = &arg0->unk_166C;
            if ((u32)p != (u32)(p + arg0->unk_166C.unk_04)) {
                sp = &arg0->unk_166C.unk_04;
                do {
                    if (p != NULL) {
                        if (p != NULL) {
                            p->unk_18 = D_08A44AD8;
                            func_0885DE4C(p);
                            p->unk_0C = 0;
                            p->unk_14 = 0;
                        }
                    }
                    p++;
                } while (p != vp->unk_00 + *sp);
            }
            arg0->unk_166C.unk_04 = 0;
        }
        if (arg0->unk_1224 != NULL) {
            func_089C50F4(arg0->unk_1538, 0);
            func_089C5280(arg0->unk_1224, 0);
        }
        if (arg0 != NULL) {
            func_089C52F8(arg0->unk_1214, 0);
            func_089C5484(arg0, 0);
        }
        if (arg1 > 0) {
            func_0880416C(arg0);
        }
    }
    return arg0;
}
