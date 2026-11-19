#include "common.h"

extern u8 D_08A00490[];
u32 func_08822BC4(char *);
void func_0881F120(void *, void *, s32);

void func_08914BA0(char *arg0) {
    u32 temp;
    if (arg0 != NULL) {
        temp = func_08822BC4(arg0);
        if (temp >= 0x80U) {
            temp = 0x7F;
        }
        func_0881F120(D_08A00490, arg0, temp);
        D_08A00490[temp] = 0;
    }
}
