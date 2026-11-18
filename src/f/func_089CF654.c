#include "common.h"

typedef struct {
    u16 unk_00;
    u16 unk_02;
    u16 unk_04;
    u16 unk_06;
    u16 unk_08;
    u16 unk_0A;
    u32 unk_0C;
} T;

typedef struct {
    T unk_00;
    s32 unk_10;
} B;

typedef struct {
    u8 pad_00[0x1490];
    B *unk_1490;
} A1;

typedef struct {
    u8 pad_00[0x42820];
    A1 *unk_42820;
} G;

typedef struct {
    u8 pad_00[0x10A44];
    u8 unk_10A44[0x10D14 - 0x10A44];
    u8 unk_10D14[0x11551 - 0x10D14];
    u8 unk_11551;
    u8 pad_11552[2];
    s32 unk_11554;
    s32 unk_11558;
} S;

extern G *D_08AD1E28[];

void func_089140B4(void *, s32, s32);
void func_089140C0(void *, s32);
s32 func_08914A74(void *);
s32 func_08914A7C(void *);
s32 func_08914B20(void *);
void func_089B568C(void *, s32);
void func_089CFA44(S *);
s32 func_089CFE94(S *);
T *func_089CFEB4(S *);
void func_089D0408(S *);
void func_089D0470(S *, s32);
s32 func_089D04A8(S *);

s32 func_089CF654(S *arg0) {
    void *s;
    s32 v;
    B *b;

    s = arg0->unk_10D14;
    if (func_089D04A8(arg0) != 0) {
        func_089D0408(arg0);
        func_089CFA44(arg0);
        func_089140B4(s, arg0->unk_11558, arg0->unk_11554);
        func_089140C0(s, 1);
        return 0;
    }
    if (func_08914A74(s) == 0) {
        v = func_08914A7C(s);
        if (v == 0) {
            b = (D_08AD1E28[0] != NULL ? D_08AD1E28[0] : NULL)->unk_42820->unk_1490;
            if (b->unk_10 == 0) {
                b->unk_10 = func_089CFE94(arg0);
                if (func_089CFEB4(arg0) != NULL) {
                    T *t = func_089CFEB4(arg0);
                    b->unk_00.unk_00 = t->unk_00;
                    b->unk_00.unk_02 = t->unk_02;
                    b->unk_00.unk_04 = t->unk_04;
                    b->unk_00.unk_06 = t->unk_06;
                    b->unk_00.unk_08 = t->unk_08;
                    b->unk_00.unk_0A = t->unk_0A;
                    b->unk_00.unk_0C = t->unk_0C;
                }
            } else {
                b->unk_10 = func_089CFE94(arg0);
            }
            func_089D0408(arg0);
            return 1;
        } else if (v == 1) {
            return 1;
        } else if (v == 2) {
            func_089D0470(arg0, 0x1E);
        } else {
            func_089D0408(arg0);
            v = func_08914B20(s);
            switch (v) {
            case (s32)0x80110381:
                func_089D0470(arg0, 0x19);
                break;
            case (s32)0x80110383:
                func_089D0470(arg0, 0x16);
                break;
            default:
                func_089B568C(arg0->unk_10A44, v);
                arg0->unk_11551 = 1;
                func_089D0470(arg0, 0xC);
                break;
            }
        }
    }
    return 0;
}
