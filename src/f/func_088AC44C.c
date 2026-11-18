#include "common.h"

typedef struct {
    u8 unk_00;
    u8 unk_01[7];
    u8 *unk_08;
} Str_088AC44C;

typedef struct {
    s32 unk_00;
} S8_088AC44C;

typedef struct {
    u8 pad_00[0x104];
    u8 unk_104[0xC];
    S8_088AC44C unk_110;
    u8 pad_114[0x18];
    u8 unk_12C[0x178];
    s32 unk_2A4;
    u8 pad_2A8[0x84];
    u8 unk_32C;
} Obj_088AC44C;

void func_0880F3C8(Str_088AC44C *, void *);
void func_0880F440(void *, void *);
void func_08810258(Str_088AC44C *, s32);
void func_0885DD94(S8_088AC44C *, void *, void *, s32);
void *func_0886095C(void);
void func_08861924(void *, void *, s32);
void *func_088619B0(void *, s32);
void *func_08861E28(void *, void *, s32);
void func_0886207C(void *, void *, s32);
void *func_088623D4(void *, s32, void *, s32, s32, void *);
u8 *func_088860C0(void *);
void func_088860C8(void *);
void *func_088860D0(void *);
void func_088860F4(Str_088AC44C *, void *);
extern char D_089FB378[];
extern char D_089FB37C[];
extern char D_089FB380[];
extern u8 D_08A88158[];

void func_088AC44C(Obj_088AC44C *arg0) {
    Str_088AC44C a;
    Str_088AC44C b;
    Str_088AC44C c;
    void *t;
    s32 x;

    arg0->unk_2A4 = 1;
    func_0880F440(arg0->unk_104, func_088860C0(arg0->unk_12C) + 0x58);
    if (func_088860C0(arg0->unk_12C) != NULL) {
        func_0880F3C8(&a, func_088619B0(func_0886095C(), -1));
        func_0880F3C8(&b, func_088860D0(arg0->unk_12C));
        func_088860F4(&b, D_089FB378);
        func_088860F4(&b, func_088860C0(arg0->unk_12C) + 0x58);
        func_0880F3C8(&c, func_088619B0(func_0886095C(), -1));
        func_08861924(func_0886095C(), D_089FB37C, -1);
        func_0885DD94(&arg0->unk_110, func_08861E28(func_0886095C(), (*(s32 *)&b.unk_00 & 1) ? b.unk_08 : b.unk_01, -1), D_089FB380, 0x5C);
        x = arg0->unk_110.unk_00;
        t = func_088623D4(func_0886095C(), 1, (*(s32 *)&b.unk_00 & 1) ? b.unk_08 : b.unk_01, x, 0, D_08A88158);
        func_0886207C(func_0886095C(), t, 1);
        func_08861924(func_0886095C(), (*(s32 *)&c.unk_00 & 1) ? c.unk_08 : c.unk_01, -1);
        func_088860C8(arg0->unk_12C);
        func_08810258(&c, -1);
        func_08810258(&b, -1);
        func_08810258(&a, -1);
    }
    arg0->unk_32C = 1;
}
