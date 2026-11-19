#include "common.h"

void *func_08827A50(s32, s32);
void *func_08866E04(void *, s32);
extern void *D_08AD1E28[];

void *func_089B4DB8(s32 arg0) {
    void *temp = D_08AD1E28[0];

    if (temp != NULL) {
        return temp;
    }
    temp = func_08827A50(0xEAB30, arg0);
    if (temp != NULL) {
        temp = func_08866E04(temp, arg0);
    }
    D_08AD1E28[0] = temp;
    if (temp == NULL) {
        return NULL;
    }
    return temp;
}
