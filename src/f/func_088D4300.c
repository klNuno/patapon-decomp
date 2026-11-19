#include "common.h"

typedef struct {
    u8 *unk_00;
} T;

void func_0880416C(void *);
void func_0892CC4C(T *, s16);
extern u8 D_08A46228[];

T *func_088D4300(T *arg0, s16 arg1) {
    s16 temp = arg1;
    T *temp2 = arg0;

    if (temp2 != NULL) {
        temp2->unk_00 = D_08A46228;
        func_0892CC4C(temp2, 0);
        if (temp > 0) {
            func_0880416C(temp2);
        }
    }
    return temp2;
}
