#include "common.h"

typedef struct L_08881D84 L_08881D84;

typedef struct N_08881D84 {
    struct N_08881D84 *unk_00;
    struct N_08881D84 *unk_04;
    u8 pad_08[4];
    L_08881D84 *unk_0C;
    u8 pad_10[0xC];
    u8 *unk_1C;
} N_08881D84;

extern u8 D_08A4537C[];
void func_0880416C(void *);
void func_08881800(L_08881D84 *, N_08881D84 *);

void *func_08882058(N_08881D84 *arg0, s16 arg1)
{
    if (arg0 != NULL) {
        arg0->unk_1C = D_08A4537C;
        if (arg0->unk_0C != NULL) {
            func_08881800(arg0->unk_0C, arg0);
        }
        arg0->unk_0C = NULL;
        arg0->unk_04 = NULL;
        arg0->unk_00 = NULL;
        if (arg1 > 0) {
            func_0880416C(arg0);
        }
    }
    return arg0;
}
