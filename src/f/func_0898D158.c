#include "common.h"

void func_0880416C(void *);
typedef struct L_0898CCCC L_0898CCCC;
typedef struct N_0898CCCC N_0898CCCC;
void func_0898CDE8(L_0898CCCC *, N_0898CCCC *);
extern u8 D_08A48480[];

typedef struct {
    s32 unk_00;
    s32 unk_04;
    u8 pad_08[4];
    L_0898CCCC *unk_0C;
    u8 pad_10[0xC];
    u8 *unk_1C;
} T;

T *func_0898D158(T *arg0, s16 arg1)
{
    if (arg0 != 0) {
        L_0898CCCC *temp;
        arg0->unk_1C = D_08A48480;
        temp = arg0->unk_0C;
        if (temp != 0) {
            func_0898CDE8(temp, (N_0898CCCC *)arg0);
        }
        arg0->unk_0C = 0;
        arg0->unk_04 = 0;
        arg0->unk_00 = 0;
        if (arg1 > 0) {
            func_0880416C(arg0);
        }
    }
    return arg0;
}
