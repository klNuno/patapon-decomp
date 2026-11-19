#include "common.h"

void func_0880416C(void *);
typedef struct L_08966314 L_08966314;
typedef struct N_08966314 N_08966314;
void func_08966314(L_08966314 *, N_08966314 *);
extern u8 D_08A47C20[];

typedef struct {
    s32 unk_00, unk_04;
    u8 pad_08[4];
    L_08966314 *unk_0C;
    u8 pad_10[0xC];
    void *unk_1C;
} S;

void *func_08966C64(S *arg0, s16 arg1) {
    if (arg0 != NULL) {
        L_08966314 *temp;
        arg0->unk_1C = D_08A47C20;
        temp = arg0->unk_0C;
        if (temp != NULL) {
            func_08966314(temp, (N_08966314 *)arg0);
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
