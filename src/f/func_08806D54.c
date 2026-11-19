#include "common.h"

void func_08806D54(void (*arg0)(void), u8 *arg1)
{
    if (*arg1 == 0) {
        arg0();
    }
    *arg1 = 1;
}
