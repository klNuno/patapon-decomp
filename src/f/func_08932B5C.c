#include "common.h"

typedef struct S S;
struct S {
    S *unk_00;
};

S **func_08932B5C(S **arg0) {
    S *temp = *arg0;

    if (temp != NULL) {
        *arg0 = temp->unk_00;
    }
    return arg0;
}
