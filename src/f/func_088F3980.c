#include "common.h"

typedef struct S_088F3980 {
    struct S_088F3980 *unk_00;
} S_088F3980;

S_088F3980 **func_088F3980(S_088F3980 **arg0) {
    *arg0 = (*arg0)->unk_00;
    return arg0;
}
