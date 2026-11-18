#include "common.h"

typedef struct N_089470D4 {
    struct N_089470D4 *unk_00;
    struct N_089470D4 *unk_04;
} N_089470D4;

void func_089470D4(N_089470D4 **arg0, s32 arg1) {
    s32 i;
    if (arg1 >= 0) {
        for (i = arg1; i > 0; i--) {
            *arg0 = (*arg0)->unk_00;
        }
    } else {
        for (i = arg1; i < 0; i++) {
            *arg0 = (*arg0)->unk_04;
        }
    }
}
