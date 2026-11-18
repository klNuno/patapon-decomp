#include "common.h"

typedef struct {
    u8 pad_00[0x258];
    s32 unk_258;
} T089B8094_2;

typedef struct {
    u8 pad_00[0x14A0];
    T089B8094_2 *unk_14A0;
} T089B8094_1;

typedef struct {
    u8 pad_00[0x24];
    s32 unk_24;
} T089B8094_3;

typedef struct {
    s32 unk_00;
    u8 pad_04[0xC];
} B089B8094;

extern T089B8094_1 *D_08AD1F14[];
extern char *D_08A08ACC[];
extern char D_089F21C0[][0x10];
extern char D_089F2200[];

void func_08854D48(B089B8094 *, char *, s32);
s32 func_0887744C(T089B8094_1 *, char *, s32);
T089B8094_3 *func_0885AB7C(s32, s32, s32);
void func_089B8198(s32, s32, B089B8094 *, s32);

void func_089B8094(s32 arg0, s32 arg1, s32 arg2) {
    B089B8094 a;
    B089B8094 b;
    T089B8094_1 *g;
    T089B8094_2 *s;
    T089B8094_3 *e;

    g = D_08AD1F14[0];
    s = (g != NULL ? g : NULL)->unk_14A0;
    if (s->unk_258 == -1) {
        func_08854D48(&a, D_089F2200, arg2);
        func_089B8198(arg0, arg1, &a, -1);
        return;
    }
    e = func_0885AB7C(func_0887744C(g != NULL ? g : NULL, D_08A08ACC[0], 1), 0, *(s32 *)&s->unk_258);
    func_08854D48(&b, D_089F21C0[s->unk_258], arg2);
    func_089B8198(arg0, arg1, &b, e->unk_24);
}
