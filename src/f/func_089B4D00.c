#include "common.h"

extern void *D_08AD8DD8[];
void *func_08827A50(s32, s32);
void *func_0892DFFC(void *, s32);

void *func_089B4D00(s32 arg0) {
    void *temp = D_08AD8DD8[0];
    if (temp != NULL) {
        return temp;
    }
    temp = func_08827A50(0x70, arg0);
    if (temp != NULL) {
        temp = func_0892DFFC(temp, arg0);
    }
    D_08AD8DD8[0] = temp;
    if (temp == NULL) {
        temp = NULL;
    }
    return temp;
}
