#include "common.h"

typedef struct T T;

struct T {
    T *unk_00;
};

typedef struct {
    T *unk_00;
} S;

S *func_08946664(S *arg0) {
    arg0->unk_00 = arg0->unk_00->unk_00;
    return arg0;
}
