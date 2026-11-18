#include "common.h"

typedef struct {
    u8 pad_00[0x20];
} E;

typedef struct {
    u8 pad_00[0x100];
} F;

typedef struct {
    u8 pad_00[0x24];
    void *unk_24;
} L;

typedef struct {
    void *unk_00;
    u8 pad_04[0xC];
    u8 unk_10[0x10];
    F unk_20[0x82];
    E unk_8220[0x82];
    L unk_9260;
    L unk_9288;
} S;

extern u8 D_08A45094[];
extern u8 D_08A45088[];
extern u8 D_08A449F4[];

void func_0880416C(void *);
void func_08804000(void *, void (*)(void *, s32), s32, s32);
void func_0886FDE4(void *, void *);
void func_0886FE3C(void *, void *);
void func_0886FE44(void *);
void func_088701D8(void *);
void func_088702F8(void *);
void func_08870308(void *);
void func_08870DBC(void *, s32);

S *func_0886FC40(S *arg0, s16 arg1) {
    s32 i;
    E *e;

    if (arg0 != NULL) {
        arg0->unk_00 = D_08A45094;
        func_08870308(&arg0->unk_9288);
        func_08870308(&arg0->unk_9260);
        func_088702F8(arg0->unk_10);
        func_088701D8(&arg0->unk_9260);
        func_088701D8(&arg0->unk_9288);
        for (i = 0; i < 0x82; i++) {
            e = &arg0->unk_8220[i];
            func_0886FE44(e);
            func_0886FE3C(e, &arg0->unk_20[i]);
            func_0886FDE4(&arg0->unk_9288, e);
        }
        func_08870308(&arg0->unk_9288);
        if (&arg0->unk_9288 != NULL) {
            arg0->unk_9288.unk_24 = D_08A45088;
            func_088701D8(&arg0->unk_9288);
            func_08870DBC(&arg0->unk_9288, -1);
        }
        if (&arg0->unk_9260 != NULL) {
            arg0->unk_9260.unk_24 = D_08A45088;
            func_088701D8(&arg0->unk_9260);
            func_08870DBC(&arg0->unk_9260, -1);
        }
        func_08804000(arg0->unk_8220, func_08870DBC, 0x20, 0x82);
        if (arg0 != NULL) {
            arg0->unk_00 = D_08A449F4;
        }
        if (arg1 > 0) {
            func_0880416C(arg0);
        }
    }
    return arg0;
}
