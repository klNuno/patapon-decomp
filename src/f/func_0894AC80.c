#include "common.h"

typedef struct {
    char *unk_00;
} S;

typedef struct U U;

s32 func_088CEE58(char *arg0);
u8 func_088CEE68(char *arg0);
void func_0894AFEC(S *arg0, U *arg1);

void func_0894AC80(S *arg0, void *arg1, U *arg2)
{
    if (func_088CEE68(arg0->unk_00) == 1 || func_088CEE58(arg0->unk_00) == 0) {
        func_0894AFEC(arg0, arg2);
    }
}
