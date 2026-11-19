#include "common.h"

typedef struct S_0895F0B8 S_0895F0B8;

void *func_08827A50(s32, s32);
extern S_0895F0B8 *func_088D7F74(S_0895F0B8 *, s32);
extern S_0895F0B8 *D_08AD7F44[];

S_0895F0B8 *func_089B4E20(s32 arg0) {
    S_0895F0B8 *temp = D_08AD7F44[0];
    if (temp != NULL) {
        return temp;
    }
    temp = func_08827A50(0x2D20, arg0);
    if (temp != NULL) {
        temp = func_088D7F74(temp, arg0);
    }
    D_08AD7F44[0] = temp;
    if (temp == NULL) {
        temp = NULL;
    }
    return temp;
}
