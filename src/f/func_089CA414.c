#include "common.h"

typedef struct N_089CA414 {
    s32 unk_00;
    s32 unk_04;
    u8 pad_08[4];
    struct N_089CA414 *unk_0C;
    u8 pad_10[0xC];
    void *unk_1C;
} N_089CA414;

extern u8 D_08A48DE4[];
void func_0880416C(void *);
void func_089CA484(N_089CA414 *, N_089CA414 *);

N_089CA414 *func_089CA414(N_089CA414 *arg0, s16 arg1) {
    if (arg0 != NULL) {
        N_089CA414 *temp;
        arg0->unk_1C = D_08A48DE4;
        temp = arg0->unk_0C;
        if (temp != NULL) {
            func_089CA484(temp, arg0);
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
