#include "common.h"

typedef struct N_0890AEB8 N_0890AEB8;

typedef struct {
    N_0890AEB8 *unk_00;
} It_0890AEB8;

typedef struct {
    N_0890AEB8 *unk_00;
    N_0890AEB8 *unk_04;
    N_0890AEB8 *unk_08;
    s32 unk_0C;
} L_0890AEB8;

void func_0880416C(void *);
void func_0890AE30(s32 *, s32);
void func_0890AE38(s32 *, s32 *);
It_0890AEB8 func_0890AEB8(L_0890AEB8 *, It_0890AEB8, It_0890AEB8);

L_0890AEB8 *func_0890AE44(L_0890AEB8 *arg0, s16 arg1)
{
    if (arg0 != NULL) {
        It_0890AEB8 temp;
        It_0890AEB8 temp1;
        It_0890AEB8 temp2;

        func_0890AE38((s32 *)&temp1, (s32 *)arg0);
        func_0890AE30((s32 *)&temp2, (s32)arg0);
        temp = func_0890AEB8(arg0, temp1, temp2);
        if (arg1 > 0) {
            func_0880416C(arg0);
        }
    }
    return arg0;
}
