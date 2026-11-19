#include "common.h"

extern void *D_08A8812C[];
void *func_08827A50(s32, s32);
void *func_08860348(void *, s32);

void *func_089B4E84(s32 arg0) {
    void *temp = D_08A8812C[0];

    if (temp != NULL) {
        return temp;
    }
    temp = func_08827A50(0x98E0, arg0);
    if (temp != NULL) {
        temp = func_08860348(temp, arg0);
    }
    D_08A8812C[0] = temp;
    if (temp == NULL) {
        temp = NULL;
    }
    return temp;
}
