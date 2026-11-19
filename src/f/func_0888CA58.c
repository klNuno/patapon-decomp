#include "common.h"

typedef struct L_0888BDAC L_0888BDAC;

typedef struct N_0888BDAC {
    struct N_0888BDAC *unk_00;
    struct N_0888BDAC *unk_04;
    u8 pad_08[4];
    L_0888BDAC *unk_0C;
    u8 pad_10[0xC];
    u8 *unk_1C;
} N_0888BDAC;

extern u8 D_08A45564[];
void func_0880416C(void *);
void func_0888BEC8(L_0888BDAC *, N_0888BDAC *);

void *func_0888CA58(N_0888BDAC *arg0, s16 arg1)
{
    if (arg0 != NULL) {
        arg0->unk_1C = D_08A45564;
        if (arg0->unk_0C != NULL) {
            func_0888BEC8(arg0->unk_0C, arg0);
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
