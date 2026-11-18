#include "common.h"

typedef struct {
    u32 unk_00;
    u32 unk_04;
    char *unk_08;
} S_0889A664;

typedef struct {
    u8 pad_00[0x104];
    u8 unk_104[0x668];
    u8 unk_76C[4];
} O_0889A664;

void func_0880F3C8(S_0889A664 *, s32);
void func_0880F440(void *, u8 *);
void func_08810258(void *, s32);
void func_0885DD94(s32 *, s32, char *, s32);
s32 func_0886095C(void);
void func_08861924(s32, char *, s32);
s32 func_088619B0(s32, s32);
s32 func_08861E28(s32, char *, s32);
void func_0886207C(s32, s32, s32);
s32 func_088623D4(s32, s32, char *, s32, s32, char *);
u8 *func_088860C0(void *);
void func_088860C8(void *);
s32 func_088860D0(void *);
void func_088860F4(S_0889A664 *, void *);
extern char D_089FA5E0[];
extern char D_089FA5E4[];
extern char D_089FA5E8[];
extern char D_08A88158[];

void func_0889A664(O_0889A664 *arg0, s32 *arg1) {
    S_0889A664 t;
    S_0889A664 s;
    char *data;
    s32 v;
    s32 r;

    func_0880F440(arg0->unk_104, func_088860C0(arg0->unk_76C) + 0x58);
    if (func_088860C0(arg0->unk_76C) != NULL) {
        func_0880F3C8(&t, func_088619B0(func_0886095C(), -1));
        func_0880F3C8(&s, func_088860D0(arg0->unk_76C));
        func_088860F4(&s, D_089FA5E0);
        func_088860F4(&s, func_088860C0(arg0->unk_76C) + 0x58);
        func_08861924(func_0886095C(), D_089FA5E4, -1);
        if (!(s.unk_00 & 1)) {
            data = (char *)&s + 1;
        } else {
            data = s.unk_08;
        }
        func_0885DD94(arg1, func_08861E28(func_0886095C(), data, -1), D_089FA5E8, 0x3A);
        v = *arg1;
        if (!(s.unk_00 & 1)) {
            data = (char *)&s + 1;
        } else {
            data = s.unk_08;
        }
        r = func_088623D4(func_0886095C(), 1, data, v, 0, D_08A88158);
        func_0886207C(func_0886095C(), r, 1);
        func_088860C8(arg0->unk_76C);
        func_08810258(&s, -1);
        func_08810258(&t, -1);
    }
}
