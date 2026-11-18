#include "common.h"

typedef struct {
    u8 pad_00[0x10];
} E_08966990;

typedef struct L_08966990 {
    struct L_08966990 *unk_00;
    struct L_08966990 *unk_04;
    u8 pad_08[0x18];
    s32 unk_20;
    u8 pad_24[0x4];
} L_08966990;

typedef struct N_08966990 {
    struct N_08966990 *unk_00;
    void *unk_04;
    E_08966990 *unk_08;
    void *unk_0C;
    u8 pad_10[0x10];
} N_08966990;

typedef struct {
    u8 pad_00[0x14];
    s32 unk_14;
    s32 unk_18;
    u8 pad_1C[0x4];
    E_08966990 unk_20[0x80];
    N_08966990 unk_820[0x80];
    L_08966990 unk_1820;
    L_08966990 unk_1848;
} S_08966990;

void func_08966298(s32 *, L_08966990 *);
void func_08966290(s32 *, L_08966990 *);
s32 func_08966060(s32 *, s32 *);
void func_08966268(s32 *, s32 *, s32);
void func_089660B4(s32 *, L_08966990 *, s32);
void func_08966314(void *, N_08966990 *);

s32 func_08966990(S_08966990 *arg0) {
    s32 it;
    s32 end;
    s32 sp34;
    s32 sp30;
    s32 it2;
    s32 end2;
    s32 sp24;
    s32 sp20;
    s32 i;
    N_08966990 *e;
    s32 r;
    E_08966990 *q;

    arg0->unk_18 = 0x80;
    arg0->unk_14 = 0;
    func_08966298(&it, &arg0->unk_1820);
    func_08966290(&end, &arg0->unk_1820);
    while (func_08966060(&it, &end)) {
        func_08966268(&sp30, &it, 0);
        func_089660B4(&sp34, &arg0->unk_1820, sp30);
    }
    arg0->unk_1820.unk_20 = 0;
    arg0->unk_1820.unk_04 = &arg0->unk_1820;
    arg0->unk_1820.unk_00 = &arg0->unk_1820;
    func_08966298(&it2, &arg0->unk_1848);
    func_08966290(&end2, &arg0->unk_1848);
    while (func_08966060(&it2, &end2)) {
        func_08966268(&sp20, &it2, 0);
        func_089660B4(&sp24, &arg0->unk_1848, sp20);
    }
    arg0->unk_1848.unk_20 = 0;
    arg0->unk_1848.unk_04 = &arg0->unk_1848;
    arg0->unk_1848.unk_00 = &arg0->unk_1848;
    for (i = 0; i < 0x80; i++) {
        q = &arg0->unk_20[i];
        e = &arg0->unk_820[i];
        if (e->unk_0C != NULL) {
            func_08966314(e->unk_0C, e);
        }
        e->unk_0C = NULL;
        e->unk_04 = NULL;
        e->unk_00 = NULL;
        e->unk_08 = q;
        if ((void *)&arg0->unk_1848 != (void *)e) {
            if (arg0->unk_1848.unk_00 != &arg0->unk_1848) {
                e->unk_00 = (N_08966990 *)arg0->unk_1848.unk_00;
                arg0->unk_1848.unk_00->unk_04 = (L_08966990 *)e;
                arg0->unk_1848.unk_00 = (L_08966990 *)e;
                r = 1;
            } else {
                arg0->unk_1848.unk_00 = (L_08966990 *)e;
                arg0->unk_1848.unk_04 = (L_08966990 *)e;
                e->unk_00 = (N_08966990 *)&arg0->unk_1848;
                r = 1;
            }
            e->unk_04 = &arg0->unk_1848;
            if (r) {
                e->unk_0C = &arg0->unk_1848;
                arg0->unk_1848.unk_20++;
            }
        }
    }
    return 1;
}
