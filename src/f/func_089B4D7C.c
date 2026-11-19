#include "common.h"

typedef struct T {
    struct T *unk_00;
} T;

T *func_089B4D7C(T *arg0) {
    arg0->unk_00 = arg0->unk_00->unk_00;
    return arg0;
}
