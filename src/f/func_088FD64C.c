#include "common.h"

typedef struct {
    void *volatile unk_00;
} Obj;

extern u8 D_08A46894[];
extern u8 D_08A4489C[];
void func_0880416C(void *);

Obj *func_088FD64C(Obj *arg0, s16 arg1)
{
    if (arg0 != NULL) {
        arg0->unk_00 = D_08A46894;
        if (arg0 != NULL) {
            arg0->unk_00 = D_08A4489C;
        }
        if (arg1 > 0) {
            func_0880416C(arg0);
        }
    }
    return arg0;
}
