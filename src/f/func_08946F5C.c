#include "common.h"

typedef struct S_08946F5C {
    struct S_08946F5C *unk_00;
} S_08946F5C;

S_08946F5C **func_08946F5C(S_08946F5C **arg0) {
    *arg0 = (*arg0)->unk_00;
    return arg0;
}
