#include "common.h"

extern u8 D_08A4516C[];
extern u8 D_08A45194[];
void func_0880416C(void *);
void func_0887A88C(void *);

void *func_0887A820(u8 *volatile *arg0, s16 arg1)
{
    if (arg0 != NULL) {
        *arg0 = D_08A4516C;
        func_0887A88C((void *)arg0);
        if (arg0 != NULL) {
            *arg0 = D_08A45194;
        }
        if (arg1 > 0) {
            func_0880416C((void *)arg0);
        }
    }
    return (void *)arg0;
}
