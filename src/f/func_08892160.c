#include "common.h"

s32 func_08891DB0(void *);

typedef struct {
    void *unk_00;
} T0;

typedef struct {
    u8 pad_00[0x20];
    s32 unk_20;
} T1;

typedef struct {
    u8 pad_00[4];
    void *unk_04;
} T2;

void func_08892160(T0 *arg0, T1 *arg1, T2 *arg2) {
    volatile struct {
        T0 unk_00;
        u8 pad_04[4];
    } temp;
    temp.unk_00.unk_00 = arg2;
    if (arg2 != NULL) {
        temp.unk_00.unk_00 = arg2->unk_04;
    }
    if ((void *)arg1 != arg2 && func_08891DB0(arg2) != 0) {
        --arg1->unk_20;
    }
    *arg0 = temp.unk_00;
}
