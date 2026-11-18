#include "common.h"

typedef struct {
    u8 pad_00[0x24];
    void *unk_24;
} L_088CC89C;

typedef struct {
    u8 unk_00[0x10];
} E_088CC89C;

typedef struct {
    void *unk_00;
    u8 pad_04[0xC];
    u8 unk_10[0x10];
    E_088CC89C unk_20[0x80];
    u8 unk_820[0x80][0x20];
    L_088CC89C unk_1820;
    L_088CC89C unk_1848;
} S_088CC89C;

void func_0880416C(void *);
void func_08804000(void *, void (*)(void *, s32), s32, s32);
void func_088CD418(void *);
void func_088CD408(void *);
void func_088CD328(void *);
void func_088CD20C(void *);
void func_088CD204(void *, E_088CC89C *);
void func_088CD1AC(void *, void *);
void func_088CD6F4(void *, s32);
void func_088CD788(void *, s32);
extern u8 D_08A46030[];
extern u8 D_08A46024[];
extern u8 D_08A449F4[];

S_088CC89C *func_088CC89C(S_088CC89C *arg0, s16 arg1) {
    s32 i;
    u8 *e;

    if (arg0 != NULL) {
        arg0->unk_00 = D_08A46030;
        func_088CD418(&arg0->unk_1848);
        func_088CD418(&arg0->unk_1820);
        func_088CD408(arg0->unk_10);
        func_088CD328(&arg0->unk_1820);
        func_088CD328(&arg0->unk_1848);
        for (i = 0; i < 0x80; i++) {
            e = arg0->unk_820[i];
            func_088CD20C(e);
            func_088CD204(e, &arg0->unk_20[i]);
            func_088CD1AC(&arg0->unk_1848, e);
        }
        func_088CD418(&arg0->unk_1848);
        if (&arg0->unk_1848 != NULL) {
            arg0->unk_1848.unk_24 = D_08A46024;
            func_088CD328(&arg0->unk_1848);
            func_088CD6F4(&arg0->unk_1848, -1);
        }
        if (&arg0->unk_1820 != NULL) {
            arg0->unk_1820.unk_24 = D_08A46024;
            func_088CD328(&arg0->unk_1820);
            func_088CD6F4(&arg0->unk_1820, -1);
        }
        func_08804000(arg0->unk_820, func_088CD6F4, 0x20, 0x80);
        func_08804000(arg0->unk_20, func_088CD788, 0x10, 0x80);
        if (arg0 != NULL) {
            arg0->unk_00 = D_08A449F4;
        }
        if (arg1 > 0) {
            func_0880416C(arg0);
        }
    }
    return arg0;
}
