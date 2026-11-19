#include "common.h"

extern u8 D_08A4474C[];

typedef struct {
    void *unk_00;
    u8 unk_04;
} T;

extern T *func_0880FE28(T *arg0, char *arg1);

T *func_0880FDF4(T *arg0, char *arg1)
{
    func_0880FE28(arg0, arg1);
    arg0->unk_00 = D_08A4474C;
    return arg0;
}
