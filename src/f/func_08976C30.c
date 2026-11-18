#include "common.h"

typedef struct N_08976C30 {
    struct N_08976C30 *unk_00;
    struct N_08976C30 *unk_04;
    void *unk_08;
    struct N_08976C30 *unk_0C;
    u8 pad_10[0x10];
} N_08976C30;

typedef struct T08976E34 {
    struct T08976E34 *unk_00;
    struct T08976E34 *unk_04;
    s32 unk_08;
    s32 unk_0C;
    u8 pad_10[0xC];
    void *unk_1C;
    s32 unk_20;
    void *unk_24;
} T08976E34;

typedef struct E_08976C30 {
    u8 pad_00[0x20];
} E_08976C30;

typedef struct A_08976C30 {
    u8 pad_00[0x14];
    s32 unk_14;
    s32 unk_18;
    u8 pad_1C[4];
    E_08976C30 unk_20[8];
    N_08976C30 unk_120[8];
    T08976E34 unk_220;
    T08976E34 unk_248;
} A_08976C30;

void func_0888D93C(N_08976C30 *, N_08976C30 *);
void func_0888DA68(s32 *, T08976E34 *);
void func_08976C28(s32 *, T08976E34 *);
s32 func_08976BD4(s32 *, s32 *);
void func_08976AC4(s32 *, s32 *, s32);
void func_0888D66C(s32 *, T08976E34 *, s32);

s32 func_08976C30(A_08976C30 *arg0) {
    s32 it;
    s32 end;
    s32 sp34;
    s32 sp30;
    s32 it2;
    s32 end2;
    s32 sp24;
    s32 sp20;
    N_08976C30 *n;
    E_08976C30 *d;
    s32 i;
    s32 r;

    arg0->unk_18 = 8;
    arg0->unk_14 = 0;
    func_0888DA68(&it, &arg0->unk_220);
    func_08976C28(&end, &arg0->unk_220);
    while (func_08976BD4(&it, &end)) {
        func_08976AC4(&sp30, &it, 0);
        func_0888D66C(&sp34, &arg0->unk_220, sp30);
    }
    arg0->unk_220.unk_20 = 0;
    arg0->unk_220.unk_04 = &arg0->unk_220;
    arg0->unk_220.unk_00 = &arg0->unk_220;
    func_0888DA68(&it2, &arg0->unk_248);
    func_08976C28(&end2, &arg0->unk_248);
    while (func_08976BD4(&it2, &end2)) {
        func_08976AC4(&sp20, &it2, 0);
        func_0888D66C(&sp24, &arg0->unk_248, sp20);
    }
    arg0->unk_248.unk_20 = 0;
    arg0->unk_248.unk_04 = &arg0->unk_248;
    arg0->unk_248.unk_00 = &arg0->unk_248;
    for (i = 0; i < 8; i++) {
        d = &arg0->unk_20[i];
        n = &arg0->unk_120[i];
        if (n->unk_0C != NULL) {
            func_0888D93C(n->unk_0C, n);
        }
        n->unk_0C = NULL;
        n->unk_04 = NULL;
        n->unk_00 = NULL;
        n->unk_08 = d;
        if ((N_08976C30 *)&arg0->unk_248 != n) {
            r = 0;
            if (arg0->unk_248.unk_00 != &arg0->unk_248) {
                n->unk_00 = (N_08976C30 *)arg0->unk_248.unk_00;
                ((N_08976C30 *)arg0->unk_248.unk_00)->unk_04 = n;
                arg0->unk_248.unk_00 = (T08976E34 *)n;
                r = 1;
            } else {
                arg0->unk_248.unk_00 = (T08976E34 *)n;
                arg0->unk_248.unk_04 = (T08976E34 *)n;
                n->unk_00 = (N_08976C30 *)&arg0->unk_248;
                r = 1;
            }
            n->unk_04 = (N_08976C30 *)&arg0->unk_248;
            if (r) {
                n->unk_0C = (N_08976C30 *)&arg0->unk_248;
                arg0->unk_248.unk_20++;
            }
        }
    }
    return 1;
}
