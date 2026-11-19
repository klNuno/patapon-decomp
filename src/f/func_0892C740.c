#include "common.h"

void func_08990814(void *, void *);

typedef void (*F)(void *, void *);

typedef struct {
    u8 pad_00[0x410];
    F unk_410;
} T;

typedef struct {
    u8 pad_00[0x44];
    F unk_44;
} U;

void func_0892C740(T *arg0, void *arg1, U *arg2)
{
    F temp = arg0->unk_410;
    if (temp != 0) {
        temp(arg1, arg2);
    } else if (arg2->unk_44 != 0) {
        func_08990814(arg1, arg2);
        arg2->unk_44(arg1, arg2);
    }
}
