#include "common.h"

typedef struct {
    s32 unk_00;
    s32 unk_04;
} Unk;

extern s32 D_089FDE3C[];

void func_088F5BDC(Unk *arg0, s32 arg1) {
    s32 *temp;
    s32 temp2;

    if (arg1 < D_089FDE3C[0]) {
        temp = D_089FDE3C;
    } else {
        temp = &arg1;
    }
    temp2 = *temp;
    arg0->unk_00 = temp2;
    arg0->unk_04 = temp2;
}
