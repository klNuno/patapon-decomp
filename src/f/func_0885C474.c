#include "common.h"

typedef struct L L;
typedef struct N {
    void *unk_00;
    void *unk_04;
    u8 pad_08[4];
    L *unk_0C;
    u8 pad_10[0xC];
    u8 *unk_1C;
} N;

void func_0880416C(void *);
void func_0885BF64(L *, N *);
extern u8 D_08A449E4[];

N *func_0885C474(N *arg0, s16 arg1) {
    if (arg0 != NULL) {
        arg0->unk_1C = D_08A449E4;
        if (arg0->unk_0C != NULL) {
            func_0885BF64(arg0->unk_0C, arg0);
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
