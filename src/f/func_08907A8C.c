#include "common.h"

typedef struct T {
    struct T *unk_00;
} T;

T *func_08907A8C(T *arg0) {
    arg0->unk_00 = arg0->unk_00->unk_00;
    return arg0;
}
