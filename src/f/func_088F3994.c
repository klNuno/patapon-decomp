#include "common.h"

typedef struct {
    u8 pad_00[0x10];
} T_088F2F40;

typedef struct {
    u8 pad_00[8];
    T_088F2F40 unk_08;
} T;

void func_088E46C8(T_088F2F40 *, s32);
void func_088F3298(T_088F2F40 *, T_088F2F40 *);
void func_088F39F0(T_088F2F40 *, T_088F2F40 *);

void func_088F3994(T *arg0, T *arg1) {
    T_088F2F40 temp[2];
    T_088F2F40 *temp1;
    T_088F2F40 *temp0;

    temp0 = &arg0->unk_08;
    temp1 = &arg1->unk_08;
    func_088F3298(&temp[1], temp0);
    func_088F39F0(temp0, temp1);
    func_088F39F0(temp1, &temp[1]);
    func_088E46C8(&temp[1], -1);
}
