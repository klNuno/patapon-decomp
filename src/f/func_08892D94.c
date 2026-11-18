#include "common.h"

typedef struct L_08892D94 {
    struct L_08892D94 *unk_00;
    struct L_08892D94 *unk_04;
    u8 pad_08[0x18];
    s32 unk_20;
    u8 pad_24[0x4];
} L_08892D94;

typedef struct N_08892D94 {
    struct N_08892D94 *unk_00;
    void *unk_04;
    s32 *unk_08;
    void *unk_0C;
    u8 pad_10[0x10];
} N_08892D94;

typedef struct {
    u8 pad_00[0x14];
    s32 unk_14;
    s32 unk_18;
    s32 unk_1C[0x40];
    N_08892D94 unk_11C[0x40];
    L_08892D94 unk_91C;
    L_08892D94 unk_944;
} S_08892D94;

void func_08892A08(s32 *, L_08892D94 *);
void func_08892A00(s32 *, L_08892D94 *);
s32 func_08892944(s32 *, s32 *);
void func_0889282C(s32 *, s32 *, s32);
void func_08892998(s32 *, L_08892D94 *, s32);
void func_088924BC(void *, N_08892D94 *);

s32 func_08892D94(S_08892D94 *arg0) {
    s32 it;
    s32 end;
    s32 sp34;
    s32 sp30;
    s32 it2;
    s32 end2;
    s32 sp24;
    s32 sp20;
    s32 i;
    N_08892D94 *e;
    s32 r;
    s32 *q;

    arg0->unk_18 = 0x40;
    arg0->unk_14 = 0;
    func_08892A08(&it, &arg0->unk_91C);
    func_08892A00(&end, &arg0->unk_91C);
    while (func_08892944(&it, &end)) {
        func_0889282C(&sp30, &it, 0);
        func_08892998(&sp34, &arg0->unk_91C, sp30);
    }
    arg0->unk_91C.unk_20 = 0;
    arg0->unk_91C.unk_04 = &arg0->unk_91C;
    arg0->unk_91C.unk_00 = &arg0->unk_91C;
    func_08892A08(&it2, &arg0->unk_944);
    func_08892A00(&end2, &arg0->unk_944);
    while (func_08892944(&it2, &end2)) {
        func_0889282C(&sp20, &it2, 0);
        func_08892998(&sp24, &arg0->unk_944, sp20);
    }
    arg0->unk_944.unk_20 = 0;
    arg0->unk_944.unk_04 = &arg0->unk_944;
    arg0->unk_944.unk_00 = &arg0->unk_944;
    for (i = 0; i < 0x40; i++) {
        q = &arg0->unk_1C[i];
        e = &arg0->unk_11C[i];
        if (e->unk_0C != NULL) {
            func_088924BC(e->unk_0C, e);
        }
        e->unk_0C = NULL;
        e->unk_04 = NULL;
        e->unk_00 = NULL;
        e->unk_08 = q;
        if ((void *)&arg0->unk_944 != (void *)e) {
            if (arg0->unk_944.unk_00 != &arg0->unk_944) {
                e->unk_00 = (N_08892D94 *)arg0->unk_944.unk_00;
                arg0->unk_944.unk_00->unk_04 = (L_08892D94 *)e;
                arg0->unk_944.unk_00 = (L_08892D94 *)e;
                r = 1;
            } else {
                arg0->unk_944.unk_00 = (L_08892D94 *)e;
                arg0->unk_944.unk_04 = (L_08892D94 *)e;
                e->unk_00 = (N_08892D94 *)&arg0->unk_944;
                r = 1;
            }
            e->unk_04 = &arg0->unk_944;
            if (r) {
                e->unk_0C = &arg0->unk_944;
                arg0->unk_944.unk_20++;
            }
        }
    }
    return 1;
}
