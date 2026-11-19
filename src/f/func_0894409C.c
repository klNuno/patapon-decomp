#include "common.h"

typedef struct N_08943B54 {
    s32 unk_00;
    s32 unk_04;
    u8 pad_08[4];
    struct N_08943B54 *unk_0C;
    u8 pad_10[0xC];
    void *unk_1C;
} N_08943B54;

extern u8 D_08A47638[];
void func_0880416C(void *);
void func_08943C70(N_08943B54 *, N_08943B54 *);

N_08943B54 *func_0894409C(N_08943B54 *arg0, s16 arg1) {
    if (arg0 != NULL) {
        N_08943B54 *temp;
        arg0->unk_1C = D_08A47638;
        temp = arg0->unk_0C;
        if (temp != NULL) {
            func_08943C70(temp, arg0);
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
