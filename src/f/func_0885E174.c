#include "common.h"

typedef struct {
    u8 pad_00[0x20];
} E;

typedef struct {
    u8 pad_00[0x110];
} F;

typedef struct {
    u8 pad_00[0x24];
    void *unk_24;
} L;

typedef struct {
    void *unk_00;
    u8 pad_04[0xC];
    u8 unk_10[0x10];
    F unk_20[0x80];
    E unk_8820[0x80];
    L unk_9820;
    L unk_9848;
} S;

extern u8 D_08A44A74[];
extern u8 D_08A44A68[];
extern u8 D_08A449F4[];

void func_0880416C(void *);
void func_08804000(void *, void (*)(void *, s32), s32, s32);
void func_0885E330(void *, void *);
void func_0885E388(void *, void *);
void func_0885E390(void *);
void func_0885E724(void *);
void func_0885E844(void *);
s32 func_0885E854(void *);
void func_0885ED6C(void *, s32);
void func_0885FA00(void *, s32);

S *func_0885E174(S *arg0, s16 arg1) {
    s32 i;
    E *e;

    if (arg0 != NULL) {
        arg0->unk_00 = D_08A44A74;
        func_0885E854(&arg0->unk_9848);
        func_0885E854(&arg0->unk_9820);
        func_0885E844(arg0->unk_10);
        func_0885E724(&arg0->unk_9820);
        func_0885E724(&arg0->unk_9848);
        for (i = 0; i < 0x80; i++) {
            e = &arg0->unk_8820[i];
            func_0885E390(e);
            func_0885E388(e, &arg0->unk_20[i]);
            func_0885E330(&arg0->unk_9848, e);
        }
        func_0885E854(&arg0->unk_9848);
        if (&arg0->unk_9848 != NULL) {
            arg0->unk_9848.unk_24 = D_08A44A68;
            func_0885E724(&arg0->unk_9848);
            func_0885ED6C(&arg0->unk_9848, -1);
        }
        if (&arg0->unk_9820 != NULL) {
            arg0->unk_9820.unk_24 = D_08A44A68;
            func_0885E724(&arg0->unk_9820);
            func_0885ED6C(&arg0->unk_9820, -1);
        }
        func_08804000(arg0->unk_8820, func_0885ED6C, 0x20, 0x80);
        func_08804000(arg0->unk_20, func_0885FA00, 0x110, 0x80);
        if (arg0 != NULL) {
            arg0->unk_00 = D_08A449F4;
        }
        if (arg1 > 0) {
            func_0880416C(arg0);
        }
    }
    return arg0;
}
