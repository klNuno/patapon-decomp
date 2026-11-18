#include "common.h"

typedef struct {
    u8 pad_00[0x24];
    void *unk_24;
} L_08966DE4;

typedef struct {
    u8 unk_00[0x10];
} E_08966DE4;

typedef struct {
    void *unk_00;
    u8 pad_04[0xC];
    u8 unk_10[0x10];
    E_08966DE4 unk_20[0x80];
    u8 unk_820[0x80][0x20];
    L_08966DE4 unk_1820;
    L_08966DE4 unk_1848;
} S_08966DE4;

void func_0880416C(void *);
void func_08804000(void *, void (*)(void *, s32), s32, s32);
void func_08966988(void *);
void func_08966978(void *);
void func_08966898(void *);
void func_0896677C(void *);
void func_08966774(void *, E_08966DE4 *);
void func_0896671C(void *, void *);
void func_08966C64(void *, s32);
void func_08966CF8(void *, s32);
extern u8 D_08A47C3C[];
extern u8 D_08A47C30[];
extern u8 D_08A449F4[];

S_08966DE4 *func_08966DE4(S_08966DE4 *arg0, s16 arg1) {
    s32 i;
    u8 *e;

    if (arg0 != NULL) {
        arg0->unk_00 = D_08A47C3C;
        func_08966988(&arg0->unk_1848);
        func_08966988(&arg0->unk_1820);
        func_08966978(arg0->unk_10);
        func_08966898(&arg0->unk_1820);
        func_08966898(&arg0->unk_1848);
        for (i = 0; i < 0x80; i++) {
            e = arg0->unk_820[i];
            func_0896677C(e);
            func_08966774(e, &arg0->unk_20[i]);
            func_0896671C(&arg0->unk_1848, e);
        }
        func_08966988(&arg0->unk_1848);
        if (&arg0->unk_1848 != NULL) {
            arg0->unk_1848.unk_24 = D_08A47C30;
            func_08966898(&arg0->unk_1848);
            func_08966C64(&arg0->unk_1848, -1);
        }
        if (&arg0->unk_1820 != NULL) {
            arg0->unk_1820.unk_24 = D_08A47C30;
            func_08966898(&arg0->unk_1820);
            func_08966C64(&arg0->unk_1820, -1);
        }
        func_08804000(arg0->unk_820, func_08966C64, 0x20, 0x80);
        func_08804000(arg0->unk_20, func_08966CF8, 0x10, 0x80);
        if (arg0 != NULL) {
            arg0->unk_00 = D_08A449F4;
        }
        if (arg1 > 0) {
            func_0880416C(arg0);
        }
    }
    return arg0;
}
