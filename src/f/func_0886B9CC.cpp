#include "common.h"

extern "C" {

class Unk_0886B9CC {
public:
    u8 pad_00[0x18];
    s32 unk_18;
    u8 pad_1C[0x34];
    virtual void unk_08();
    virtual void unk_0C();
    virtual void unk_10();
    virtual void unk_14();
    virtual void func_18();
    virtual void unk_1C();
    virtual void unk_20();
    virtual void unk_24();
    virtual void unk_28();
    virtual void unk_2C();
    virtual void unk_30();
    virtual void unk_34();
    virtual void unk_38();
    virtual void unk_3C(s32);
};

class V {
public:
    virtual void unk_08();
    virtual void unk_0C(s32);
};

typedef struct {
    u8 pad_00[0x14];
    s32 unk_14;
} A;

typedef struct {
    u8 pad_00[0x1490];
    A *unk_1490;
    u8 pad_1494[0xFCC];
    u8 unk_2460[0x1C];
    s32 unk_247C;
} B;

typedef struct {
    u8 pad_00[0x42820];
    B *unk_42820;
} G;

typedef struct A_0886D70C A_0886D70C;
typedef struct O_089B4374 O_089B4374;
typedef struct T T;
typedef struct Unk_0887BF48 Unk_0887BF48;

struct S_088CE840 : Unk_0886B9CC {
    u8 pad_54[0x14B8];
    u8 unk_150C;
    u8 pad_150D[3];
    u8 unk_1510;
    u8 pad_1511[0xA37];
    u8 unk_1F48;
    u8 unk_1F49;
    u8 pad_1F4A[2];
    s32 unk_1F4C;
    s32 unk_1F50;
    u8 unk_1F54;
};

extern u8 D_089F9050[];
extern char D_089F9074[];
extern char D_089F9084[];
extern char D_089F9094[];
extern G *D_08AD1E28[];
extern u8 *D_08AD1F14[];
extern void *D_08AD2070[];

s32 func_088148F0(s32, s32);
s32 func_088586E8(void);
void *func_0886095C(void);
void func_08864938(O_089B4374 *, s32);
void func_0886891C(void *, s32);
s32 func_08868D9C(void *, s32, char *, s32);
s32 *func_08868E8C(void *, s32, char *);
void func_088698FC(void *, void *, void *, s32, s32, s32, s32, s32, s32);
void func_0886D5F4(void *arg0, s32 arg1);
void func_0886D70C(A_0886D70C *);
s32 func_0886E580(S_088CE840 *, s32);
void func_0886F33C(S_088CE840 *, s32, s32);
void func_0887741C(u8 *, s32);
void func_0887BF48(Unk_0887BF48 *, s32, s32);
s32 func_0887C240(void *, s32);
s32 func_0888B03C(s32 *, char *);
void func_0888382C(void);
void *func_088A88C0(void);
void func_089268F0(s32);
void func_08926A9C(T *);
void func_089A8A7C(s32, s32);
s32 func_089B53E4(s32);
void scePowerSetClockFrequency350(s32, s32, s32);

s32 func_0886B9CC(S_088CE840 *arg0, s32 arg1) {
    s32 temp;
    s32 n;
    G *g;
    B *p;
    A *q;
    s32 a;
    s32 b;

    arg0->unk_1F54 = !(bool)func_0887C240(D_08AD2070[0] != NULL ? D_08AD2070[0] : NULL, arg1);
    if (arg0->unk_150C == 1 && arg0->unk_1F54 != 0) {
        return 0x10000;
    }
    func_0887741C(D_08AD1F14[0] != NULL ? D_08AD1F14[0] : NULL, arg1);
    ((V *)func_088A88C0())->unk_0C(arg1);

    if (arg0->unk_1510 == 0) {
        if (arg0->unk_1F54 != 0) {
            return 0x10000;
        }
        g = D_08AD1E28[0] != NULL ? D_08AD1E28[0] : NULL;
        a = func_08868D9C(g, 1, D_089F9074, 1);
        temp = *func_08868E8C(g, 1, D_089F9084);
        b = func_0888B03C(&temp, D_089F9094);
        func_0887BF48((Unk_0887BF48 *)(D_08AD2070[0] != NULL ? D_08AD2070[0] : NULL), b, a);
        arg0->unk_1510 = 1;
        goto end;
    }
    if (arg0->unk_1F48 == 0) {
        arg0->unk_1F48 = 1;
        func_0886D70C((A_0886D70C *)arg0);
    }
    if (arg0->unk_1F49 == 0) {
        if (arg0->unk_1F54 != 0) {
            return 0x10000;
        }
        func_089268F0(func_089B53E4(func_088586E8()));
        arg0->unk_1F49 = 1;
        n = arg0->unk_1F4C;
        arg0->unk_1F4C = 0x10000;
        arg0->unk_3C(1);
        func_08864938((O_089B4374 *)func_0886095C(), 1);
        scePowerSetClockFrequency350(0xDE, 0xDE, 0x6F);
    } else {
        n = func_0886E580(arg0, arg1);
    }
    if (n != 0x10000 && n != 0x10002) {
        g = D_08AD1E28[0] != NULL ? D_08AD1E28[0] : NULL;
        p = g->unk_42820;
        q = p->unk_1490;
        if (arg0->unk_18 != 0 && q->unk_14 != p->unk_247C) {
            func_089A8A7C((s32)p->unk_2460, q->unk_14);
            p->unk_247C = q->unk_14;
            func_088148F0(4, 0);
            func_08926A9C((T *)func_089B53E4(func_088586E8()));
            func_0886891C(g, 2);
            arg0->unk_34();
            func_08864938((O_089B4374 *)func_0886095C(), 0);
            func_088698FC(g, D_089F9050, (void *)func_0888382C, 2, 0, 0, 0, 0, 1);
            scePowerSetClockFrequency350(0x14D, 0x14D, 0xA6);
            arg0->unk_1F49 = 0;
            arg0->unk_1F4C = n;
            if (arg0->unk_1F50 == 8) {
                arg0->unk_3C(0);
            }
            return 0x10000;
        }
    }
    switch (n) {
    case 0x10000:
        goto end;
    case 0x10001:
        func_0886F33C(arg0, 1, 0);
        break;
    case 0x10002:
        return 0x10001;
    case 0:
        func_0886F33C(arg0, 7, 0);
        break;
    case 1:
        func_0886F33C(arg0, 1, 0);
        break;
    case 2:
        func_0886F33C(arg0, 2, 2);
        break;
    case 3:
        func_0886D5F4(arg0, n);
        func_0886F33C(arg0, 2, 2);
        break;
    case 4:
        func_0886D5F4(arg0, n);
        func_0886F33C(arg0, 2, 2);
        break;
    case 5:
        func_0886D5F4(arg0, n);
        func_0886F33C(arg0, 2, 2);
        break;
    case 6:
        func_0886D5F4(arg0, n);
        func_0886F33C(arg0, 2, 2);
        break;
    case 7:
        func_0886D5F4(arg0, n);
        func_0886F33C(arg0, 2, 2);
        break;
    case 8:
        func_0886D5F4(arg0, n);
        func_0886F33C(arg0, 2, 2);
        break;
    case 9:
        func_0886D5F4(arg0, n);
        func_0886F33C(arg0, 2, 2);
        break;
    case 0xA:
        func_0886F33C(arg0, 3, 3);
        break;
    case 0xE:
        func_0886F33C(arg0, 6, 3);
        break;
    case 0xB:
        func_0886F33C(arg0, 4, 2);
        break;
    case 0xC:
        a = 3;
        if ((u32)(arg0->unk_1F50 - 1) < 2U) {
            a = 2;
        }
        func_0886F33C(arg0, 5, a);
        break;
    case 0xD:
        func_0886F33C(arg0, 8, 3);
        break;
    }
end:
    return 0x10000;
}

}
