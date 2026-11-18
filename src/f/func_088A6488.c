#include "common.h"

typedef struct N_088A6488 {
    struct N_088A6488 *unk_00;
    struct N_088A6488 *unk_04;
} N_088A6488;

void func_088A6488(N_088A6488 **arg0, s32 arg1) {
    s32 n;
    if (arg1 >= 0) {
        for (n = arg1; n > 0; n--) {
            *arg0 = (*arg0)->unk_00;
        }
    } else {
        for (n = arg1; n < 0; n++) {
            *arg0 = (*arg0)->unk_04;
        }
    }
}
