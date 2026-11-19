#include "common.h"

typedef struct {
    u32 unk_00;
    u32 unk_04;
} T;

extern void func_0880644C(void *, s16);
void func_08808F28(T *, void *);
void *func_08808F08(T *);
s8 func_08808EE4(void *, void *);

s8 func_08808E90(void *arg0, void *arg1) {
    T temp0;
    s8 temp1;

    func_08808F28(&temp0, arg0);
    temp1 = func_08808EE4(func_08808F08(&temp0), arg1);
    func_0880644C(&temp0, -1);
    return temp1;
}
