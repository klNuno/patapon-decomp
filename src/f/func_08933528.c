#include "common.h"

typedef struct {
    u8 pad_00[0x50];
    void *unk_50;
} T;

extern u8 D_08A47098[];
void func_0880416C(void *);

T *func_08933528(T *arg0, s16 arg1)
{
    if (arg0 != NULL) {
        arg0->unk_50 = D_08A47098;
        if (arg1 > 0) {
            func_0880416C(arg0);
        }
    }
    return arg0;
}
