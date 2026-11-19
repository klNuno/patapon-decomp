#include "common.h"

typedef struct T2 T2;
extern T2 *D_08AD2178[];
void *func_08827A50(s32, s32);
T2 *func_0887E280(void *, s32);

T2 *func_089B4F78(s32 arg0) {
    T2 *temp = D_08AD2178[0];
    if (temp != NULL) {
        return temp;
    }
    temp = func_08827A50(0x100, arg0);
    if (temp != NULL) {
        temp = func_0887E280(temp, arg0);
    }
    D_08AD2178[0] = temp;
    if (temp == NULL) {
        temp = NULL;
    }
    return temp;
}
