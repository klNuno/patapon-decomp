#include "common.h"

typedef struct N_08976C30 {
    s32 unk_00;
    s32 unk_04;
    u8 pad_08[4];
    struct N_08976C30 *unk_0C;
    u8 pad_10[0xC];
    void *unk_1C;
} N_08976C30;

void func_0880416C(void *);
void func_0888D93C(N_08976C30 *, N_08976C30 *);
extern u8 D_08A47F94[];

N_08976C30 *func_08976EF4(N_08976C30 *arg0, s16 arg1)
{
    N_08976C30 *temp = arg0;
    N_08976C30 *p;

    if (temp != NULL) {
        temp->unk_1C = D_08A47F94;
        p = temp->unk_0C;
        if (p != NULL) {
            func_0888D93C(p, temp);
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
