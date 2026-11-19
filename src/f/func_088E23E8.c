#include "common.h"

void func_0880416C(void *);
void func_088CE530(void *, s32);
void func_08923AC0(void *, s32);
void func_08923C88(void *);
extern u8 D_08A46504[];

typedef struct {
    u8 pad_00[0x28];
    u8 *unk_28;
    u8 pad_2C[8];
    u8 unk_34[1];
} T;

T *func_088E23E8(T *arg0, s16 arg1)
{
    if (arg0 != 0) {
        arg0->unk_28 = D_08A46504;
        func_08923C88(arg0->unk_34);
        func_08923AC0(arg0->unk_34, -1);
        func_088CE530(arg0, 0);
        if (arg1 > 0) {
            func_0880416C(arg0);
        }
    }
    return arg0;
}
