#include "common.h"

extern u8 D_08A443E8[];
extern void func_08808F78(void **arg0);

void **func_088090F0(void **arg0) {
    func_08808F78(arg0);
    *arg0 = D_08A443E8;
    return arg0;
}
