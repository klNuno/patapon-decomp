#include "common.h"

typedef struct {
    u8 pad_00[0x54];
    void *unk_54;
} T;

extern void * D_08A44B58[];
void func_0880416C(void *);

T *func_08864BB0(T *arg0, s16 arg1)
{
    if (arg0 != NULL) {
        arg0->unk_54 = D_08A44B58;
        if (arg1 > 0) {
            func_0880416C(arg0);
        }
    }
    return arg0;
}
