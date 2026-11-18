#include "common.h"

typedef struct {
    s32 unk_00;
    s32 unk_04;
} P;

typedef struct {
    P unk_00[3];
} T;

typedef struct {
    u8 pad_00[0x184];
    s32 unk_184[100];
} S;

s32 func_088586E8(void);
u32 func_089B5464(s32);
extern T D_08A09610[];

void func_089C4800(S *arg0) {
    T t;
    P *e;
    u32 i;
    s32 *c;
    s32 v;

    t = D_08A09610[0];
    for (i = 0; i < 100; i++) {
        do {
            e = &t.unk_00[func_089B5464(func_088586E8()) % 3];
            c = &e->unk_04;
        } while (*c == 0);
        v = e->unk_00;
        (*c)--;
        arg0->unk_184[i] = v;
    }
}
