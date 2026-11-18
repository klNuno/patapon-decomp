#include "common.h"

void func_0880416C(void *);
void func_08919260(void *);
extern u8 D_08A46B28[];
extern u8 D_08A46B38[];

u8 *func_089191D8(u8 *arg0, s16 arg1) {
    u8 *temp_a0;

    if (arg0 != NULL) {
        temp_a0 = arg0 + 0x220;
        if (temp_a0 != NULL) {
            func_08919260(temp_a0);
        }
        if (arg0 != NULL) {
            if (arg0 != NULL) {
                *(void **)(arg0 + 8) = D_08A46B38;
                if (arg0 != NULL) {
                    *(void **)(arg0 + 8) = D_08A46B28;
                }
            }
        }
        if (arg1 > 0) {
            func_0880416C(arg0);
        }
    }
    return arg0;
}
