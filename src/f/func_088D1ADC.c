#include "common.h"

typedef struct {
    u8 pad_00[0x24];
    void *unk_24;
} T;

extern u8 D_08A46184[];
void func_0880416C(void *);

T *func_088D1ADC(T *arg0, s16 arg1)
{
    if (arg0 != NULL) {
        arg0->unk_24 = D_08A46184;
        if (arg1 > 0) {
            func_0880416C(arg0);
        }
    }
    return arg0;
}
