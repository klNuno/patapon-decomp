#include "common.h"

typedef struct L_0895F6F4 L_0895F6F4;
typedef struct N_0895F6F4 {
    s32 unk_00;
    s32 unk_04;
    u8 pad_08[4];
    L_0895F6F4 *unk_0C;
    u8 pad_10[0xC];
    void *unk_1C;
} N_0895F6F4;

void func_0880416C(void *);
void func_0895F810(L_0895F6F4 *, N_0895F6F4 *);
extern u8 D_08A47AE0[];

N_0895F6F4 *func_0895FC58(N_0895F6F4 *arg0, s16 arg1)
{
    N_0895F6F4 *temp = arg0;
    L_0895F6F4 *p;

    if (temp != NULL) {
        temp->unk_1C = D_08A47AE0;
        p = temp->unk_0C;
        if (p != NULL) {
            func_0895F810(p, temp);
        }
        temp->unk_0C = NULL;
        temp->unk_04 = 0;
        temp->unk_00 = 0;
        if (arg1 > 0) {
            func_0880416C(temp);
        }
    }
    return temp;
}
