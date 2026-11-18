#include "common.h"

extern "C" {

typedef struct N_0888C784 {
    struct N_0888C784 *unk_00;
    struct N_0888C784 *unk_04;
    void *unk_08;
    struct L_0888C784 *unk_0C;
    u8 pad_10[0x10];
    void set(void *p);
} N_0888C784;

typedef struct L_0888C784 {
    struct N_0888C784 *unk_00;
    struct N_0888C784 *unk_04;
    void *unk_08;
    void *unk_0C;
    u8 pad_10[0x10];
    s32 unk_20;
    u8 pad_24[0x4];
    void push(N_0888C784 *n) {
        s32 f;

        if ((N_0888C784 *)this != n) {
            if (unk_00 != (N_0888C784 *)this) {
                n->unk_00 = unk_00;
                unk_00->unk_04 = n;
                f = 1;
                unk_00 = n;
            } else {
                unk_00 = n;
                unk_04 = n;
                n->unk_00 = (N_0888C784 *)this;
                f = 1;
            }
            n->unk_04 = (N_0888C784 *)this;
            if (f) {
                n->unk_0C = this;
                unk_20++;
            }
        }
    }
} L_0888C784;

void func_0888BEC8(L_0888C784 *, N_0888C784 *);

inline void N_0888C784::set(void *p) {
    if (unk_0C != NULL) {
        func_0888BEC8(unk_0C, this);
    }
    unk_0C = NULL;
    unk_04 = NULL;
    unk_00 = NULL;
    unk_08 = p;
}

typedef struct {
    u8 pad_00[0x14];
    s32 unk_14;
    s32 unk_18;
    s32 unk_1C[0x10];
    N_0888C784 unk_5C[0x10];
    L_0888C784 unk_25C;
    L_0888C784 unk_284;
} S_0888C784;

void func_0888C414(s32 *, L_0888C784 *);
void func_0888C40C(s32 *, L_0888C784 *);
s32 func_0888C350(s32 *, s32 *);
void func_0888C238(s32 *, s32 *, s32);
void func_0888C3A4(s32 *, L_0888C784 *, s32);
s32 func_0888C784(S_0888C784 *arg0) {
    s32 it;
    s32 end;
    s32 r;
    s32 tmp;
    s32 it2;
    s32 end2;
    s32 r2;
    s32 tmp2;
    s32 i;
    s32 *d;
    N_0888C784 *n;

    arg0->unk_18 = 0x10;
    arg0->unk_14 = 0;
    func_0888C414(&it, &arg0->unk_25C);
    func_0888C40C(&end, &arg0->unk_25C);
    while (func_0888C350(&it, &end)) {
        func_0888C238(&tmp, &it, 0);
        func_0888C3A4(&r, &arg0->unk_25C, tmp);
    }
    arg0->unk_25C.unk_20 = 0;
    arg0->unk_25C.unk_04 = (N_0888C784 *)&arg0->unk_25C;
    arg0->unk_25C.unk_00 = (N_0888C784 *)&arg0->unk_25C;
    func_0888C414(&it2, &arg0->unk_284);
    func_0888C40C(&end2, &arg0->unk_284);
    while (func_0888C350(&it2, &end2)) {
        func_0888C238(&tmp2, &it2, 0);
        func_0888C3A4(&r2, &arg0->unk_284, tmp2);
    }
    arg0->unk_284.unk_20 = 0;
    arg0->unk_284.unk_04 = (N_0888C784 *)&arg0->unk_284;
    arg0->unk_284.unk_00 = (N_0888C784 *)&arg0->unk_284;
    for (i = 0; i < 0x10; i++) {
        d = &arg0->unk_1C[i];
        n = &arg0->unk_5C[i];
        n->set(d);
        arg0->unk_284.push(n);
    }
    return 1;
}

}
