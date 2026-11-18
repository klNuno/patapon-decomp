#include "common.h"

extern "C" {

typedef struct N_08964290 {
    struct N_08964290 *unk_00;
    struct N_08964290 *unk_04;
    void *unk_08;
    struct L_08964290 *unk_0C;
    u8 pad_10[0x10];
    void set(void *p);
} N_08964290;

typedef struct L_08964290 {
    struct N_08964290 *unk_00;
    struct N_08964290 *unk_04;
    void *unk_08;
    void *unk_0C;
    u8 pad_10[0x10];
    s32 unk_20;
    u8 pad_24[0x4];
    void push(N_08964290 *n) {
        s32 f;

        if ((N_08964290 *)this != n) {
            if (unk_00 != (N_08964290 *)this) {
                n->unk_00 = unk_00;
                unk_00->unk_04 = n;
                f = 1;
                unk_00 = n;
            } else {
                unk_00 = n;
                unk_04 = n;
                n->unk_00 = (N_08964290 *)this;
                f = 1;
            }
            n->unk_04 = (N_08964290 *)this;
            if (f) {
                n->unk_0C = this;
                unk_20++;
            }
        }
    }
} L_08964290;

void func_089634E8(L_08964290 *, N_08964290 *);

inline void N_08964290::set(void *p) {
    if (unk_0C != NULL) {
        func_089634E8(unk_0C, this);
    }
    unk_0C = NULL;
    unk_04 = NULL;
    unk_00 = NULL;
    unk_08 = p;
}

typedef struct {
    u8 pad_00[0x10];
} E_08964290;

typedef struct {
    u8 pad_00[0x14];
    s32 unk_14;
    s32 unk_18;
    u8 pad_1C[0x4];
    E_08964290 unk_20[0x3];
    N_08964290 unk_50[0x3];
    L_08964290 unk_B0;
    L_08964290 unk_D8;
} S_08964290;

void func_08963A34(s32 *, L_08964290 *);
void func_08963A2C(s32 *, L_08964290 *);
s32 func_08963970(s32 *, s32 *);
void func_08963858(s32 *, s32 *, s32);
void func_089639C4(s32 *, L_08964290 *, s32);
s32 func_08964290(S_08964290 *arg0) {
    s32 it;
    s32 end;
    s32 r;
    s32 tmp;
    s32 it2;
    s32 end2;
    s32 r2;
    s32 tmp2;
    s32 i;
    E_08964290 *d;
    N_08964290 *n;

    arg0->unk_18 = 3;
    arg0->unk_14 = 0;
    func_08963A34(&it, &arg0->unk_B0);
    func_08963A2C(&end, &arg0->unk_B0);
    while (func_08963970(&it, &end)) {
        func_08963858(&tmp, &it, 0);
        func_089639C4(&r, &arg0->unk_B0, tmp);
    }
    arg0->unk_B0.unk_20 = 0;
    arg0->unk_B0.unk_04 = (N_08964290 *)&arg0->unk_B0;
    arg0->unk_B0.unk_00 = (N_08964290 *)&arg0->unk_B0;
    func_08963A34(&it2, &arg0->unk_D8);
    func_08963A2C(&end2, &arg0->unk_D8);
    while (func_08963970(&it2, &end2)) {
        func_08963858(&tmp2, &it2, 0);
        func_089639C4(&r2, &arg0->unk_D8, tmp2);
    }
    arg0->unk_D8.unk_20 = 0;
    arg0->unk_D8.unk_04 = (N_08964290 *)&arg0->unk_D8;
    arg0->unk_D8.unk_00 = (N_08964290 *)&arg0->unk_D8;
    for (i = 0; i < 3; i++) {
        d = &arg0->unk_20[i];
        n = &arg0->unk_50[i];
        n->set(d);
        arg0->unk_D8.push(n);
    }
    return 1;
}

}
