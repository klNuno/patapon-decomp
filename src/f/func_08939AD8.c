#include "common.h"

typedef struct T T;

struct T {
    T *unk_00;
};

T **func_08939AD8(T **arg0)
{
    *arg0 = (*arg0)->unk_00;
    return arg0;
}
