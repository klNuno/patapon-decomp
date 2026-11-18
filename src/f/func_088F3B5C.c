#include "common.h"

typedef struct N_088F3B5C {
    struct N_088F3B5C *unk_00;
    struct N_088F3B5C *unk_04;
} N_088F3B5C;

void func_088F3B5C(N_088F3B5C **arg0, s32 arg1) {
    s32 n = arg1;
    if (n >= 0) {
        for (; n > 0; n--) {
            *arg0 = (*arg0)->unk_00;
        }
    } else {
        for (; n < 0; n++) {
            *arg0 = (*arg0)->unk_04;
        }
    }
}
