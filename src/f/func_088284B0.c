#include "common.h"

void func_0880416C(void *);
extern u8 D_08A44800[];
extern u8 D_08A447A0[];
extern u8 D_08A44770[];

typedef struct {
    void *volatile unk_00;
} Obj;

Obj *func_088284B0(Obj *arg0, s16 arg1)
{
    if (arg0 != NULL) {
        arg0->unk_00 = D_08A44800;
        if (arg0 != NULL) {
            arg0->unk_00 = D_08A447A0;
            if (arg0 != NULL) {
                arg0->unk_00 = D_08A44770;
            }
        }
        if (arg1 > 0) {
            func_0880416C(arg0);
        }
    }
    return arg0;
}
