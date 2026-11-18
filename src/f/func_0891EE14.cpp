#include "common.h"

extern "C" {

typedef struct {
    u32 unk_00;
    u32 unk_04;
    char *unk_08;
} S_0889A664;

class A {
public:
    virtual void unk_08();
    virtual void unk_0C();
    virtual void unk_10();
    virtual void unk_14(f32, f32, s32, char *, u8 *);
};
struct B : A {
    s32 unk_04;
    u8 pad_08[0x6C8];
    u8 unk_6D0;
};
typedef struct {
    u8 pad_00[0x1550];
    u8 unk_1550[0x14C];
    u8 *unk_169C;
    u8 *unk_16A0;
    u8 pad_16A4[0x1C];
    B unk_16C0;
} O;

void func_0880F3C8(S_0889A664 *, s32);
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
extern char D_08A01A6C[];
extern char D_08A01A70[];
extern char D_08A01A74[];
extern char D_08A88158[];

extern char D_089E64A0[];

void func_0891EE14(O *arg0) {
    S_0889A664 t;
    S_0889A664 s;
    S_0889A664 temp;
    u8 *temp2;
    char *data;
    s32 v;
    s32 r;

    arg0->unk_16C0.unk_04 = 1;
    arg0->unk_169C = func_088860C0(arg0->unk_1550) + 0x58;
    if (func_088860C0(arg0->unk_1550) != NULL) {
        func_0880F3C8(&t, func_088619B0(func_0886095C(), -1));
        func_0880F3C8(&s, func_088860D0(arg0->unk_1550));
        func_088860F4(&s, D_08A01A6C);
        func_088860F4(&s, func_088860C0(arg0->unk_1550) + 0x58);
        func_0880F3C8(&temp, func_088619B0(func_0886095C(), -1));
        func_08861924(func_0886095C(), D_08A01A70, -1);
        if (!(s.unk_00 & 1)) {
            data = (char *)&s + 1;
        } else {
            data = s.unk_08;
        }
        func_0885DD94((s32 *)&arg0->unk_16A0, func_08861E28(func_0886095C(), data, -1), D_08A01A74, 0x7A);
        v = (s32)arg0->unk_16A0;
        if (s.unk_00 & 1) {
            data = s.unk_08;
        } else {
            data = (char *)&s + 1;
        }
        r = func_088623D4(func_0886095C(), 1, data, v, 0, D_08A88158);
        func_0886207C(func_0886095C(), r, 1);
        if (!(temp.unk_00 & 1)) {
            data = (char *)&temp + 1;
        } else {
            data = temp.unk_08;
        }
        func_08861924(func_0886095C(), data, -1);
        temp2 = arg0->unk_16A0;
        if ((u32)(*temp2 - 0xFE) < 2U) {
            arg0->unk_16C0.unk_14(0.0f, 0.0f, 0, D_089E64A0, temp2 + 2);
        }
        func_088860C8(arg0->unk_1550);
        func_08810258(&temp, -1);
        func_08810258(&s, -1);
        func_08810258(&t, -1);
    }
    arg0->unk_16C0.unk_6D0 = 0;
}

}

