#include "common.h"

typedef struct {
    u8 pad_00[0x4C];
    s32 *unk_4C;
    u8 pad_50[0x1450 - 0x50];
    s32 *unk_1450;
    u8 pad_1454[0x1C];
    u8 unk_1470[0x800];
    u8 unk_1C70[0x1000];
    u8 unk_2C70[0x28];
    u8 unk_2C98[0x10];
} S_088CD874;

void func_08804000(void *, void (*)(void *, s32), s32, s32);
void func_0880416C(void *);
void func_0885BDA0(void *, s32);
void func_0885C534(void *, s32);
void func_088CCA18(void *, s32);
void func_088CD420(void *);
void func_088CD948(S_088CD874 *);
void func_088CD6F4(void *, s32);
void func_088CD788(void *, s32);
extern s32 D_08A45FEC[];
extern s32 D_08A46030[];

S_088CD874 *func_088CD874(S_088CD874 *arg0, s16 arg1) {
    if (arg0 != NULL) {
        arg0->unk_4C = D_08A45FEC;
        func_088CD948(arg0);
        if (&arg0->unk_1450 != NULL) {
            arg0->unk_1450 = D_08A46030;
            func_088CD420(&arg0->unk_1450);
            func_088CCA18(arg0->unk_2C98, -1);
            func_088CCA18(arg0->unk_2C70, -1);
            func_08804000(arg0->unk_1C70, func_088CD6F4, 0x20, 0x80);
            func_08804000(arg0->unk_1470, func_088CD788, 0x10, 0x80);
            func_0885BDA0(&arg0->unk_1450, 0);
        }
        func_0885C534(arg0, 0);
        if (arg1 > 0) {
            func_0880416C(arg0);
        }
    }
    return arg0;
}
