#include "common.h"

extern u8 D_08A4436C[];
extern u8 D_08A4435C[];
void func_0880416C(void *);

u8 *volatile *func_08804218(u8 *volatile *arg0, s16 arg1) {
    if (arg0 != NULL) {
        *arg0 = D_08A4436C;
        if (arg0 != NULL) {
            *arg0 = D_08A4435C;
        }
        if (arg1 > 0) {
            func_0880416C((void *)arg0);
        }
    }
    return arg0;
}
