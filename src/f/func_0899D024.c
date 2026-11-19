#include "common.h"

typedef struct {
    f32 unk_00[4];
} V;
typedef struct {
    V unk_00;
    V unk_10;
} T;

T *func_0899D024(T *arg0, const T *arg1)
{
    arg0->unk_00 = arg1->unk_00;
    arg0->unk_10 = arg1->unk_10;
    return arg0;
}
