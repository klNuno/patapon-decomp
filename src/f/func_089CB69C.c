#include "common.h"

typedef struct {
    s32 unk_00;
    s32 unk_04;
} T089CB69C;

typedef struct {
    T089CB69C unk_00[2];
} U089CB69C;

typedef struct {
    u8 pad_00[0x180];
    s32 unk_180[100];
} S089CB69C;

extern s32 func_088586E8(void);
extern u32 func_089B5464(s32);
extern T089CB69C D_08A09B78[];
extern T089CB69C D_08A09B80[];

void func_089CB69C(S089CB69C *arg0) {
    U089CB69C t;
    s32 *c;
    T089CB69C *e;
    u32 i;
    s32 x;

    t = *(U089CB69C *)D_08A09B78;
    for (i = 0; i < 100; i++) {
        do {
            e = &t.unk_00[func_089B5464(func_088586E8()) & 1];
            c = &e->unk_04;
        } while (*c == 0);
        x = e->unk_00;
        (*c)--;
        arg0->unk_180[i] = x;
    }
}
