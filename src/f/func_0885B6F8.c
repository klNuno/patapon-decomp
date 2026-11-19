#include "common.h"

typedef struct {
    u8 pad_00[0x8];
    void *unk_08;
} T;

extern u8 D_08A44940[];
void func_0880416C(void *);

T *func_0885B6F8(T *arg0, s16 arg1)
{
    if (arg0 != NULL) {
        arg0->unk_08 = D_08A44940;
        if (arg1 > 0) {
            func_0880416C(arg0);
        }
    }
    return arg0;
}
