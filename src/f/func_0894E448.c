#include "common.h"

typedef struct N N;
typedef struct {
    N *unk_00;
    N *unk_04;
    N *unk_08;
    s32 unk_0C;
} S;

typedef union {
    N *unk_00;
    f32 unk_00_f;
} I;

typedef struct {
    I unk_00;
} R;

void func_0880416C(void *);
void func_0894E434(s32 *arg0, s32 arg1);
void func_0894E43C(s32 *arg0, s32 *arg1);
R func_0894E4BC(S *arg1, I arg2, I arg3);

S *func_0894E448(S *arg0, s16 arg1)
{
    if (arg0 != NULL) {
        R temp;
        I temp1;
        I temp2;

        func_0894E43C((s32 *)&temp1, (s32 *)arg0);
        func_0894E434((s32 *)&temp2, (s32)arg0);
        temp = func_0894E4BC(arg0, temp1, temp2);
        if (arg1 > 0) {
            func_0880416C(arg0);
        }
    }
    return arg0;
}
