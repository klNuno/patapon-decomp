#include "common.h"

typedef struct {
    u8 pad_00[0x24];
    void *unk_24;
} L_08867598;

typedef struct {
    u8 unk_00[0x130];
} E_08867598;

typedef struct {
    void *unk_00;
    u8 pad_04[0xC];
    u8 unk_10[0x10];
    E_08867598 unk_20[0x800];
    u8 unk_98020[0x800][0x20];
    L_08867598 unk_A8020;
    L_08867598 unk_A8048;
} S_08867598;

void func_0880416C(void *);
void func_08804000(void *, void (*)(void *, s32), s32, s32);
void func_0886800C(void *);
void func_08867FFC(void *);
void func_08867F04(void *);
void func_08867CBC(void *);
void func_08867CB4(void *, E_08867598 *);
void func_08867C5C(void *, void *);
void func_088683A8(void *, s32);
void func_0896C9E4(void *, s32);
extern u8 D_08A44BFC[];
extern u8 D_08A44BF0[];
extern u8 D_08A449F4[];

S_08867598 *func_08867598(S_08867598 *arg0, s16 arg1) {
    s32 i;
    u8 *e;

    if (arg0 != NULL) {
        arg0->unk_00 = D_08A44BFC;
        func_0886800C(&arg0->unk_A8048);
        func_0886800C(&arg0->unk_A8020);
        func_08867FFC(arg0->unk_10);
        func_08867F04(&arg0->unk_A8020);
        func_08867F04(&arg0->unk_A8048);
        for (i = 0; i < 0x800; i++) {
            e = arg0->unk_98020[i];
            func_08867CBC(e);
            func_08867CB4(e, &arg0->unk_20[i]);
            func_08867C5C(&arg0->unk_A8048, e);
        }
        func_0886800C(&arg0->unk_A8048);
        if (&arg0->unk_A8048 != NULL) {
            arg0->unk_A8048.unk_24 = D_08A44BF0;
            func_08867F04(&arg0->unk_A8048);
            func_088683A8(&arg0->unk_A8048, -1);
        }
        if (&arg0->unk_A8020 != NULL) {
            arg0->unk_A8020.unk_24 = D_08A44BF0;
            func_08867F04(&arg0->unk_A8020);
            func_088683A8(&arg0->unk_A8020, -1);
        }
        func_08804000(arg0->unk_98020, func_088683A8, 0x20, 0x800);
        func_08804000(arg0->unk_20, func_0896C9E4, 0x130, 0x800);
        if (arg0 != NULL) {
            arg0->unk_00 = D_08A449F4;
        }
        if (arg1 > 0) {
            func_0880416C(arg0);
        }
    }
    return arg0;
}
