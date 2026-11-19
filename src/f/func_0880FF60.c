#include "common.h"

extern u8 D_08A4472C[];

typedef struct {
    void *unk_00;
    u8 unk_04;
} T;

T *func_0880FE28(T *, char *);

T *func_0880FF60(T *arg0, char *arg1)
{
    func_0880FE28(arg0, arg1);
    arg0->unk_00 = D_08A4472C;
    return arg0;
}
