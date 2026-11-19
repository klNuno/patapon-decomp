#include "common.h"

typedef struct N_08881800 N_08881800;
s32 func_0888192C(N_08881800 *);

typedef struct {
    N_08881800 *unk_00;
} T0;

typedef struct {
    u8 pad_00[0x20];
    s32 unk_20;
} T1;

typedef struct {
    u8 pad_00[4];
    N_08881800 *unk_04;
} T2;

void func_08881CDC(T0 *arg0, T1 *arg1, T2 *arg2) {
    volatile struct {
        T0 unk_00;
        u8 pad_04[4];
    } temp;
    temp.unk_00.unk_00 = (N_08881800 *)arg2;
    if (arg2 != NULL) {
        temp.unk_00.unk_00 = arg2->unk_04;
    }
    if ((void *)arg1 != arg2 && func_0888192C((N_08881800 *)arg2) != 0) {
        --arg1->unk_20;
    }
    *arg0 = temp.unk_00;
}
