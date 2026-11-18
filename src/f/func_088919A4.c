#include "common.h"

typedef struct {
    u8 pad_00[0x24];
    void *unk_24;
} L088919A4;

typedef struct {
    u8 pad_00[0x20];
} E088919A4;

typedef struct {
    u8 pad_00[0x188];
} F088919A4;

typedef struct {
    void *unk_00;
    u8 pad_04[0xC];
    u8 unk_10[0x10];
    F088919A4 unk_20[0x40];
    E088919A4 unk_6220[0x40];
    L088919A4 unk_6A20;
    L088919A4 unk_6A48;
} T088919A4;

extern u8 D_08A45690[];
extern u8 D_08A45684[];
extern u8 D_08A449F4[];

void func_0889202C(L088919A4 *);
void func_0889201C(void *);
void func_08891EFC(L088919A4 *);
void func_08891B68(E088919A4 *);
void func_08891B60(E088919A4 *, F088919A4 *);
void func_08891B08(L088919A4 *, E088919A4 *);
void func_08892CE8(void *, s32);
void func_08804000(void *, void (*)(void *, s32), s32, s32);
void func_0880416C(void *);

T088919A4 *func_088919A4(T088919A4 *arg0, s16 arg1) {
    s32 i;
    E088919A4 *e;

    if (arg0 != NULL) {
        arg0->unk_00 = D_08A45690;
        func_0889202C(&arg0->unk_6A48);
        func_0889202C(&arg0->unk_6A20);
        func_0889201C(arg0->unk_10);
        func_08891EFC(&arg0->unk_6A20);
        func_08891EFC(&arg0->unk_6A48);
        for (i = 0; i < 0x40; i++) {
            e = &arg0->unk_6220[i];
            func_08891B68(e);
            func_08891B60(e, &arg0->unk_20[i]);
            func_08891B08(&arg0->unk_6A48, e);
        }
        func_0889202C(&arg0->unk_6A48);
        if (&arg0->unk_6A48 != NULL) {
            arg0->unk_6A48.unk_24 = D_08A45684;
            func_08891EFC(&arg0->unk_6A48);
            func_08892CE8(&arg0->unk_6A48, -1);
        }
        if (&arg0->unk_6A20 != NULL) {
            arg0->unk_6A20.unk_24 = D_08A45684;
            func_08891EFC(&arg0->unk_6A20);
            func_08892CE8(&arg0->unk_6A20, -1);
        }
        func_08804000(arg0->unk_6220, func_08892CE8, 0x20, 0x40);
        if (arg0 != NULL) {
            arg0->unk_00 = D_08A449F4;
        }
        if (arg1 > 0) {
            func_0880416C(arg0);
        }
    }
    return arg0;
}
