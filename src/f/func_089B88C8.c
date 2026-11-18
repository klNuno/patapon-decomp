#include "common.h"

typedef struct {
    u8 pad_00[0x258];
    s32 unk_258;
    s32 unk_25C;
} T089B88C8_2;

typedef struct {
    u8 pad_00[0x14A0];
    T089B88C8_2 *unk_14A0;
} T089B88C8_1;

typedef struct {
    u8 pad_00[0x24];
    s32 unk_24;
} T089B88C8_3;

typedef struct {
    u8 pad_00[0x1064];
    s32 unk_1064;
    u8 pad_1068[0x6380 - 0x1068];
    s32 unk_6380;
    u8 pad_6384[0x678C - 0x6384];
    s32 unk_678C;
} A089B88C8;

extern T089B88C8_1 *D_08AD1F14[];
extern char *D_08A08ACC[];
extern char *D_08A08AE4[];

s32 func_0887744C(T089B88C8_1 *, char *, s32);
T089B88C8_3 *func_0885AB7C(s32, s32, s32);
s32 func_08947CA0(s32);
s32 func_08998D18(s32);
void func_08998D30(s32, s32);
void func_089992CC(s32);

inline s32 func_089B88C8_a(void) {
    T089B88C8_1 *g;
    T089B88C8_2 *s;

    g = D_08AD1F14[0];
    s = (g != NULL ? g : NULL)->unk_14A0;
    if (s->unk_258 == -1) {
        return -1;
    }
    return func_0885AB7C(func_0887744C(g != NULL ? g : NULL, D_08A08ACC[0], 1), 0, *(s32 *)&s->unk_258)->unk_24;
}

inline s32 func_089B88C8_b(void) {
    T089B88C8_1 *g;
    T089B88C8_2 *s;

    g = D_08AD1F14[0];
    s = (g != NULL ? g : NULL)->unk_14A0;
    if (s->unk_25C == -1) {
        return -1;
    }
    return func_0885AB7C(func_0887744C(g != NULL ? g : NULL, D_08A08AE4[0], 1), 0, *(s32 *)&s->unk_25C)->unk_24;
}

void func_089B88C8(A089B88C8 *arg0, s32 arg1) {
    if (arg1 == 0) {
        if (arg0->unk_6380 != 0) {
            if (func_089B88C8_a() == -1) {
                func_08998D30(arg0->unk_1064, 0x1D);
            } else {
                func_08998D30(arg0->unk_1064, 0x1E);
            }
        } else {
            func_089992CC(arg0->unk_1064);
        }
    } else if (arg1 == 1) {
        if (arg0->unk_678C != 0) {
            if (func_089B88C8_b() == -1 && func_08947CA0(func_08998D18(arg0->unk_1064)) != 0) {
                func_08998D30(arg0->unk_1064, 0x1F);
            } else {
                func_08998D30(arg0->unk_1064, 0x20);
            }
        } else {
            func_089992CC(arg0->unk_1064);
        }
    }
}
