#include "common.h"

extern "C" {

struct N_0893BD38 {
    N_0893BD38 *unk_00;
    N_0893BD38 *unk_04;
    s32 unk_08;
    void *unk_0C;
    u8 pad_10[0x10];
};

typedef struct {
    s32 unk_00;
    s32 unk_04;
    s32 unk_08;
} P_0893BD38;

struct E_0893BD38 : N_0893BD38 {
    P_0893BD38 *unk_20;
};

s32 func_08880338(void *);

struct L_0893BD38 {
    N_0893BD38 unk_00;
    s32 unk_20;
    u8 pad_24[4];
    s32 link(N_0893BD38 *n) {
        s32 ret;
        if (unk_00.unk_00 != &unk_00) {
            n->unk_00 = unk_00.unk_00;
            unk_00.unk_00->unk_04 = n;
            unk_00.unk_00 = n;
            ret = 1;
        } else {
            unk_00.unk_00 = n;
            unk_00.unk_04 = n;
            n->unk_00 = &unk_00;
            ret = 1;
        }
        n->unk_04 = &unk_00;
        return ret;
    }
    void remove(N_0893BD38 *n) {
        if (&unk_00 != n) {
            if (func_08880338(n)) {
                unk_20--;
            }
        }
    }
};

typedef struct {
    u8 pad_00[0x8];
    E_0893BD38 *unk_08;
} H_0893BD38;

typedef struct {
    H_0893BD38 *unk_00;
    s32 unk_04;
} A_0893BD38;

typedef struct {
    u8 pad_00[0xA38];
    L_0893BD38 unk_A38;
    L_0893BD38 unk_A60;
} T_0893BD38;

void func_0893BD38(T_0893BD38 *arg0, A_0893BD38 *arg1) {
    E_0893BD38 *e;

    if (arg1->unk_04 != 0) {
        e = arg1->unk_00->unk_08;
        arg0->unk_A38.remove(e);
        if (&arg0->unk_A60.unk_00 != e) {
            if (arg0->unk_A60.link(e)) {
                e->unk_0C = &arg0->unk_A60;
                arg0->unk_A60.unk_20++;
            }
        }
        e->unk_20->unk_04 = 0;
        e->unk_20->unk_00 = 0;
        e->unk_20->unk_08 = 0;
        e->unk_20 = NULL;
    }
}

}
