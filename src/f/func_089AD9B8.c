#include "common.h"

void func_0880416C(void *);
extern u8 D_08A487E0[];

typedef struct {
    u8 *unk_00;
} S;

S *func_089AD9B8(S *arg0, s16 arg1) {
    if (arg0 != NULL) {
        arg0->unk_00 = D_08A487E0;
        if (arg1 > 0) {
            func_0880416C(arg0);
        }
    }
    return arg0;
}
