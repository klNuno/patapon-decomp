#include "common.h"

typedef struct {
    u8 pad_00[0x30];
    u8 *unk_30;
} T;

void func_0880416C(void *);
void func_088CECE8(T *, s16);
extern u8 D_08A45E08[];

T *func_088BA1E8(T *arg0, s16 arg1) {
    s16 temp = arg1;
    T *temp2 = arg0;

    if (temp2 != NULL) {
        temp2->unk_30 = D_08A45E08;
        func_088CECE8(temp2, 0);
        if (temp > 0) {
            func_0880416C(temp2);
        }
    }
    return temp2;
}
