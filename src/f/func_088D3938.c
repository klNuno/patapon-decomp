#include "common.h"

typedef struct {
    u8 unk_00;
    u8 unk_01[7];
    u8 *unk_08;
} Str_088D3938;

typedef struct {
    u8 *unk_00;
} S8_088D3938;

typedef struct {
    u8 pad_00[0x1510];
    u8 unk_1510;
    u8 pad_1511[3];
    u8 unk_1514[0x14C];
    S8_088D3938 unk_1660;
    u8 pad_1664[0x1C];
    u8 unk_1680[0x8F0];
    f32 unk_1F70;
} Obj_088D3938;

void func_0880F3C8(Str_088D3938 *, void *);
void func_08810258(Str_088D3938 *, s32);
void func_0885DD94(S8_088D3938 *, void *, void *, s32);
void *func_0886095C(void);
void func_08861924(void *, void *, s32);
void *func_088619B0(void *, s32);
void *func_08861E28(void *, void *, s32);
void func_0886207C(void *, void *, s32);
void *func_088623D4(void *, s32, void *, u8 *, s32, void *);
u8 *func_088860C0(void *);
void func_088860C8(void *);
void *func_088860D0(void *);
void func_088860F4(Str_088D3938 *, void *);
void func_088D43FC(void *, u8 *, f32);
void func_088D4448(void *, u8 *, f32);
extern char D_089FBAC0[];
extern char D_089FBAC4[];
extern char D_089FBAC8[];
extern u8 D_08A88158[];

void func_088D3938(Obj_088D3938 *arg0) {
    Str_088D3938 a;
    Str_088D3938 b;
    Str_088D3938 c;
    void *t;
    u8 *x;
    u8 *p;
    u8 v;

    if (func_088860C0(arg0->unk_1514) != NULL) {
        func_0880F3C8(&a, func_088619B0(func_0886095C(), -1));
        func_0880F3C8(&b, func_088860D0(arg0->unk_1514));
        func_088860F4(&b, D_089FBAC0);
        func_088860F4(&b, func_088860C0(arg0->unk_1514) + 0x58);
        func_0880F3C8(&c, func_088619B0(func_0886095C(), -1));
        func_08861924(func_0886095C(), D_089FBAC4, -1);
        func_0885DD94(&arg0->unk_1660, func_08861E28(func_0886095C(), (*(s32 *)&b.unk_00 & 1) ? b.unk_08 : b.unk_01, -1), D_089FBAC8, 0x61);
        x = arg0->unk_1660.unk_00;
        t = func_088623D4(func_0886095C(), 1, (*(s32 *)&b.unk_00 & 1) ? b.unk_08 : b.unk_01, x, 0, D_08A88158);
        func_0886207C(func_0886095C(), t, 1);
        func_08861924(func_0886095C(), (*(s32 *)&c.unk_00 & 1) ? c.unk_08 : c.unk_01, -1);
        func_088860C8(arg0->unk_1514);
        p = arg0->unk_1660.unk_00;
        v = *p;
        if (v != 0xFF && v != 0xFE) {
            func_088D43FC(arg0->unk_1680, p, arg0->unk_1F70);
            arg0->unk_1510 = 0;
        } else {
            func_088D4448(arg0->unk_1680, p, arg0->unk_1F70);
            arg0->unk_1510 = 0;
        }
        func_08810258(&c, -1);
        func_08810258(&b, -1);
        func_08810258(&a, -1);
    }
}
