#include "common.h"

typedef struct N_089466A8 {
    struct N_089466A8 *unk_00;
    struct N_089466A8 *unk_04;
} N_089466A8;

void func_089466A8(N_089466A8 **arg0, s32 arg1) {
    if (arg1 >= 0) {
        s32 i; for (i = arg1; i > 0; i--) { *arg0 = (*arg0)->unk_00; }
    } else {
        s32 i; for (i = arg1; i < 0; i++) { *arg0 = (*arg0)->unk_04; }
    }
}
