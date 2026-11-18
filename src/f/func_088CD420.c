#include "common.h"

typedef struct N_088CD420 {
    struct N_088CD420 *unk_00;
    struct N_088CD420 *unk_04;
    void *unk_08;
    struct N_088CD420 *unk_0C;
    u8 pad_10[0x10];
} N_088CD420;

typedef struct T088CD634 {
    struct T088CD634 *unk_00;
    struct T088CD634 *unk_04;
    s32 unk_08;
    s32 unk_0C;
    u8 pad_10[0xC];
    void *unk_1C;
    s32 unk_20;
    void *unk_24;
} T088CD634;

typedef struct E_088CD420 {
    u8 pad_00[0x10];
} E_088CD420;

typedef struct A_088CD420 {
    u8 pad_00[0x14];
    s32 unk_14;
    s32 unk_18;
    u8 pad_1C[4];
    E_088CD420 unk_20[0x80];
    N_088CD420 unk_820[0x80];
    T088CD634 unk_1820;
    T088CD634 unk_1848;
} A_088CD420;

void func_088CD060(N_088CD420 *, N_088CD420 *);
void func_088CCD28(s32 *, T088CD634 *);
void func_088CCD20(s32 *, T088CD634 *);
s32 func_088CCAF0(s32 *, s32 *);
void func_088CCCF8(s32 *, s32 *, s32);
void func_088CCB44(s32 *, T088CD634 *, s32);

s32 func_088CD420(A_088CD420 *arg0) {
    s32 it;
    s32 end;
    s32 sp34;
    s32 sp30;
    s32 it2;
    s32 end2;
    s32 sp24;
    s32 sp20;
    N_088CD420 *n;
    E_088CD420 *d;
    s32 i;
    s32 r;

    arg0->unk_18 = 0x80;
    arg0->unk_14 = 0;
    func_088CCD28(&it, &arg0->unk_1820);
    func_088CCD20(&end, &arg0->unk_1820);
    while (func_088CCAF0(&it, &end)) {
        func_088CCCF8(&sp30, &it, 0);
        func_088CCB44(&sp34, &arg0->unk_1820, sp30);
    }
    arg0->unk_1820.unk_20 = 0;
    arg0->unk_1820.unk_04 = &arg0->unk_1820;
    arg0->unk_1820.unk_00 = &arg0->unk_1820;
    func_088CCD28(&it2, &arg0->unk_1848);
    func_088CCD20(&end2, &arg0->unk_1848);
    while (func_088CCAF0(&it2, &end2)) {
        func_088CCCF8(&sp20, &it2, 0);
        func_088CCB44(&sp24, &arg0->unk_1848, sp20);
    }
    arg0->unk_1848.unk_20 = 0;
    arg0->unk_1848.unk_04 = &arg0->unk_1848;
    arg0->unk_1848.unk_00 = &arg0->unk_1848;
    for (i = 0; i < 0x80; i++) {
        d = &arg0->unk_20[i];
        n = &arg0->unk_820[i];
        if (n->unk_0C != NULL) {
            func_088CD060(n->unk_0C, n);
        }
        n->unk_0C = NULL;
        n->unk_04 = NULL;
        n->unk_00 = NULL;
        n->unk_08 = d;
        if ((N_088CD420 *)&arg0->unk_1848 != n) {
            r = 0;
            if (arg0->unk_1848.unk_00 != &arg0->unk_1848) {
                n->unk_00 = (N_088CD420 *)arg0->unk_1848.unk_00;
                ((N_088CD420 *)arg0->unk_1848.unk_00)->unk_04 = n;
                arg0->unk_1848.unk_00 = (T088CD634 *)n;
                r = 1;
            } else {
                arg0->unk_1848.unk_00 = (T088CD634 *)n;
                arg0->unk_1848.unk_04 = (T088CD634 *)n;
                n->unk_00 = (N_088CD420 *)&arg0->unk_1848;
                r = 1;
            }
            n->unk_04 = (N_088CD420 *)&arg0->unk_1848;
            if (r) {
                n->unk_0C = (N_088CD420 *)&arg0->unk_1848;
                arg0->unk_1848.unk_20++;
            }
        }
    }
    return 1;
}
