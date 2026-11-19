#include "common.h"

typedef struct T {
    struct T *unk_00;
} T;

typedef struct {
    T *unk_00;
} S;

S *func_0891CDFC(S *arg0) {
    arg0->unk_00 = arg0->unk_00->unk_00;
    return arg0;
}
