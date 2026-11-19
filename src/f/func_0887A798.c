#include "common.h"

extern u8 D_08A4516C[];
extern u8 D_08A45194[];
void func_0887AF74(void *);

void *func_0887A798(void *arg0) {
    u8 *volatile *temp = (u8 *volatile *)arg0;

    *temp = D_08A45194;
    *temp = D_08A4516C;
    func_0887AF74(arg0);
    return arg0;
}
