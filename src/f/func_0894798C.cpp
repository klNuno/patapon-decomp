#include "common.h"

extern "C" {

typedef struct Node_0894798C {
    struct Node_0894798C *unk_00;
    struct Node_0894798C *unk_04;
} Node_0894798C;

void func_0894798C(Node_0894798C **arg0, s32 arg1) {
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

}

