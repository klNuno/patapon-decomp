#include "common.h"

extern u8 D_08A44B30[];
void func_0885807C(void);

void **func_088649A4(void **arg0) {
    *arg0 = D_08A44B30;
    func_0885807C();
    return arg0;
}
