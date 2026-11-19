#include "common.h"

typedef struct {
    u8 pad_00[8];
    void *volatile unk_08;
} Unk_0894C0CC;

extern u8 D_08A47810[];
extern u8 D_08A47800[];
void func_0880416C(void *);

Unk_0894C0CC *func_0894C0CC(Unk_0894C0CC *arg0, s16 arg1)
{
    if (arg0 != NULL) {
        if (arg0 != NULL) {
            arg0->unk_08 = D_08A47800;
            if (arg0 != NULL) {
                arg0->unk_08 = D_08A47810;
            }
        }
        if (arg1 > 0) {
            func_0880416C(arg0);
        }
    }
    return arg0;
}
