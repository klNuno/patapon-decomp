#include "common.h"
typedef struct T0 {
    struct T0 *unk_00;
} T0;

T0 *func_089400B4(T0 *arg0) {
    if (arg0->unk_00 != NULL) {
        arg0->unk_00 = arg0->unk_00->unk_00;
    }
    return arg0;
}
