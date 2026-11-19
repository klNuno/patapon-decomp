#include "common.h"

typedef struct N_08946534 N_08946534;

typedef struct {
    N_08946534 *unk_00;
} It_08946534;

typedef struct {
    N_08946534 *unk_00;
    N_08946534 *unk_04;
    N_08946534 *unk_08;
    s32 unk_0C;
} L_08946534;

void func_0880416C(void *);
void func_089468B0(s32 *arg0, s32 arg1);
void func_089468B8(s32 *arg0, s32 *arg1);
It_08946534 func_08946534(L_08946534 *, It_08946534, It_08946534);

L_08946534 *func_089464C0(L_08946534 *arg0, s16 arg1)
{
    if (arg0 != NULL) {
        It_08946534 temp;
        It_08946534 temp1;
        It_08946534 temp2;

        func_089468B8((s32 *)&temp1, (s32 *)arg0);
        func_089468B0((s32 *)&temp2, (s32)arg0);
        temp = func_08946534(arg0, temp1, temp2);
        if (arg1 > 0) {
            func_0880416C(arg0);
        }
    }
    return arg0;
}
