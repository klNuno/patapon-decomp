#include "common.h"

void func_0880416C(void *);
void func_088D9270(void *);
extern u8 D_08A463A0[];
extern u8 D_08A463B0[];

u8 *func_088D9460(u8 *arg0, s16 arg1) {
    u8 *temp_a0;

    if (arg0 != NULL) {
        temp_a0 = arg0 + 0x20;
        if (temp_a0 != NULL) {
            func_088D9270(temp_a0);
        }
        if (arg0 != NULL) {
            if (arg0 != NULL) {
                *(void **)(arg0 + 8) = D_08A463B0;
                if (arg0 != NULL) {
                    *(void **)(arg0 + 8) = D_08A463A0;
                }
            }
        }
        if (arg1 > 0) {
            func_0880416C(arg0);
        }
    }
    return arg0;
}
