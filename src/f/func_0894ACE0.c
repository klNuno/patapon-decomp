#include "common.h"

s32 func_088CEE58(char *arg0);
u8 func_088CEE68(char *arg0);

typedef struct {
    char *unk_00;
} T;

void func_0894B264(T *, s32);

void func_0894ACE0(T *arg0, s32 arg1, s32 arg2) {
    if (func_088CEE68(arg0->unk_00) == 1 || func_088CEE58(arg0->unk_00) == 1) {
        func_0894B264(arg0, arg2);
    }
}
