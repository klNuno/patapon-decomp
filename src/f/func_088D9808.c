#include "common.h"

typedef struct {
    void *unk_00;
} Obj;

extern u8 D_08A46410[];
void func_088E6040(void *, s32);
void func_0880416C(void *);

Obj *func_088D9808(Obj *arg0, s16 arg1)
{
    if (arg0 != NULL) {
        arg0->unk_00 = D_08A46410;
        func_088E6040(arg0, 0);
        if (arg1 > 0) {
            func_0880416C(arg0);
        }
    }
    return arg0;
}
