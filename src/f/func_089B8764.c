#include "common.h"

typedef struct {
    u8 pad_00[0x258];
    s32 unk_258;
    s32 unk_25C;
} T089B8764_2;

typedef struct {
    u8 pad_00[0x14A0];
    T089B8764_2 *unk_14A0;
} T089B8764_1;

typedef struct {
    u8 pad_00[0x24];
    s32 unk_24;
} T089B8764_3;

typedef struct {
    u8 pad_00[0x2E60];
    s32 unk_2E60;
} A089B8764;

extern T089B8764_1 *D_08AD1F14[];
extern char *D_08A08ACC[];
extern char *D_08A08AE4[];

s32 func_0887744C(T089B8764_1 *, char *, s32);
u32 func_0885AB08(s32, s32);
T089B8764_3 *func_0885AB7C(s32, s32, u32);

void func_089B8764(A089B8764 *arg0, s32 arg1) {
    T089B8764_1 *g;
    T089B8764_2 *s;
    s32 h;
    u32 n;
    u32 i;

    g = D_08AD1F14[0];
    s = (g != NULL ? g : NULL)->unk_14A0;
    if (arg0->unk_2E60 == 0) {
        h = func_0887744C(g != NULL ? g : NULL, D_08A08ACC[0], 1);
        n = func_0885AB08(h, 0);
        for (i = 0; i < n; i++) {
            if (func_0885AB7C(h, 0, i)->unk_24 == arg1) {
                s->unk_258 = i;
            }
        }
    } else if (arg0->unk_2E60 == 1) {
        h = func_0887744C(g != NULL ? g : NULL, D_08A08AE4[0], 1);
        n = func_0885AB08(h, 0);
        for (i = 0; i < n; i++) {
            if (func_0885AB7C(h, 0, i)->unk_24 == arg1) {
                s->unk_25C = i;
            }
        }
    }
}
