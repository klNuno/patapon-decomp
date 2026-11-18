#include "common.h"

typedef struct N {
    struct N *unk_00;
    struct N *unk_04;
} N;

typedef struct {
    N *unk_00;
} I;

void func_08949D50(I *arg0, s32 arg1) {
    s32 n;

    if (arg1 >= 0) {
        for (n = arg1; n > 0; n--) {
            arg0->unk_00 = arg0->unk_00->unk_00;
        }
    } else {
        for (n = arg1; n < 0; n++) {
            arg0->unk_00 = arg0->unk_00->unk_04;
        }
    }
}
