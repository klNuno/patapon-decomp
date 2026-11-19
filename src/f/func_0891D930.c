#include "common.h"

typedef struct T {
    struct T *unk_00;
} T;

T *func_0891D930(T *arg0) {
    arg0->unk_00 = arg0->unk_00->unk_00;
    return arg0;
}
