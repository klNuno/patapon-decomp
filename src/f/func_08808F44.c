#include "common.h"

extern u8 D_08A444E4[];
void func_08808F78(void *);

void **func_08808F44(void **arg0) {
    func_08808F78(arg0);
    *arg0 = D_08A444E4;
    return arg0;
}
