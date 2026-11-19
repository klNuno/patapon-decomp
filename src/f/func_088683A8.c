#include "common.h"

void func_0880416C(void *);
extern u8 D_08A44BE0[];

typedef struct N_08867CBC N_08867CBC;
void func_08867DD8(N_08867CBC *, N_08867CBC *);

typedef struct {
    s32 unk_00;
    s32 unk_04;
    u8 pad_08[4];
    N_08867CBC *unk_0C;
    u8 pad_10[0xC];
    u8 *unk_1C;
} T;

T *func_088683A8(T *arg0, s16 arg1) {
    if (arg0 != NULL) {
        N_08867CBC *temp;
        arg0->unk_1C = D_08A44BE0;
        temp = arg0->unk_0C;
        if (temp != NULL) {
            func_08867DD8(temp, (N_08867CBC *)arg0);
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
