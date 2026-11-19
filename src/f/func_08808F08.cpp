#include "common.h"

extern "C" {
s32 func_0880C624(void *, s8);

typedef struct {
    s8 unk_00;
} S;

typedef struct {
    u32 unk_00;
    u32 unk_04;
} T;

void *func_08808F08(T *arg0)
{
    S temp = { 0 };
    return (void *)func_0880C624(arg0, temp.unk_00);
}
}
