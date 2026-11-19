#include "common.h"

typedef struct L_0885E390 L_0885E390;
typedef struct N_0885E390 N_0885E390;
struct N_0885E390 {
    s32 unk_00;
    s32 unk_04;
    u8 pad_08[4];
    L_0885E390 *unk_0C;
    u8 pad_10[0xC];
    u8 *unk_1C;
};

void func_0880416C(void *);
void func_0885E4AC(L_0885E390 *, N_0885E390 *);
extern u8 D_08A44A58[];

N_0885E390 *func_0885ED6C(N_0885E390 *arg0, s16 arg1)
{
    if (arg0 != NULL) {
        L_0885E390 *temp;
        arg0->unk_1C = D_08A44A58;
        temp = arg0->unk_0C;
        if (temp != NULL) {
            func_0885E4AC(temp, arg0);
        }
        arg0->unk_0C = NULL;
        arg0->unk_04 = 0;
        arg0->unk_00 = 0;
        if (arg1 > 0) {
            func_0880416C(arg0);
        }
    }
    return arg0;
}
