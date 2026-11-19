#include "common.h"

typedef struct {
    u8 pad_00[0x28];
    u8 *unk_28;
} T;

void func_0880416C(void *);
void func_08909B74(T *, s16);
extern u8 D_08A470B0[];

T *func_08933948(T *arg0, s16 arg1) {
    s16 temp = arg1;
    T *temp2 = arg0;

    if (temp2 != NULL) {
        temp2->unk_28 = D_08A470B0;
        func_08909B74(temp2, 0);
        if (temp > 0) {
            func_0880416C(temp2);
        }
    }
    return temp2;
}
