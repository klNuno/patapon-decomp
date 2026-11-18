#include "common.h"

typedef struct {
    u32 unk_00;
    u32 unk_04;
    char *unk_08;
} S_08887950;

typedef struct {
    u8 pad_00[0x30];
    s32 unk_30;
    u8 pad_34[0xC];
    s32 unk_40;
} H_08887950;

typedef struct {
    H_08887950 *unk_00;
    u8 pad_04[0x1C];
    u8 unk_20[0xFB4 - 0x20];
    u8 unk_FB4[4];
} O_08887950;

void func_0880F3C8(S_08887950 *, s32);
void func_08810258(void *, s32);
void func_0885DD94(O_08887950 *, s32, char *, s32);
s32 func_0886095C(void);
void func_08861924(s32, char *, s32);
s32 func_088619B0(s32, s32);
s32 func_08861E28(s32, char *, s32);
void func_0886207C(s32, s32, s32);
s32 func_088623D4(s32, s32, char *, H_08887950 *, s32, char *);
u8 *func_088860C0(void *);
void func_088860C8(void *);
s32 func_088860D0(void *);
void func_088860F4(S_08887950 *, void *);
void func_0887FE50(void *, void *, void **, s32);
void func_0887FE38(void *, s32);
void func_0887FE40(void *);
extern char D_089FA1E0[];
extern char D_089FA1E4[];
extern char D_089FA1E8[];
extern char D_08A88158[];

void func_08887950(O_08887950 *arg0) {
    S_08887950 t;
    S_08887950 s;
    struct {
        void *unk_00;
        s32 unk_04;
    } p;
    char *data;
    H_08887950 *v;
    s32 r;

    if (func_088860C0(arg0->unk_FB4) != NULL) {
        func_0880F3C8(&t, func_088619B0(func_0886095C(), -1));
        func_0880F3C8(&s, func_088860D0(arg0->unk_FB4));
        func_088860F4(&s, D_089FA1E0);
        func_088860F4(&s, func_088860C0(arg0->unk_FB4) + 0x58);
        func_08861924(func_0886095C(), D_089FA1E4, -1);
        if (!(s.unk_00 & 1)) {
            data = (char *)&s + 1;
        } else {
            data = s.unk_08;
        }
        func_0885DD94(arg0, func_08861E28(func_0886095C(), data, -1), D_089FA1E8, 0x29);
        v = arg0->unk_00;
        if (!(s.unk_00 & 1)) {
            data = (char *)&s + 1;
        } else {
            data = s.unk_08;
        }
        r = func_088623D4(func_0886095C(), 1, data, v, 0, D_08A88158);
        func_0886207C(func_0886095C(), r, 1);
        func_088860C8(arg0->unk_FB4);
        func_08810258(&s, -1);
        func_08810258(&t, -1);
    }
    v = arg0->unk_00;
    p.unk_00 = v->unk_40 == 0 ? NULL : (u8 *)v + v->unk_40;
    func_0887FE50(arg0->unk_20, v->unk_30 == 0 ? NULL : (u8 *)v + v->unk_30, &p.unk_00, 0);
    func_0887FE38(arg0->unk_20, 1);
    func_0887FE40(arg0->unk_20);
}
