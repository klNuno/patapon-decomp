#include "common.h"

typedef struct {
    u8 pad_00[8];
    void *volatile unk_08;
} Unk_08943A18;

extern u8 D_08A473F4[];
extern u8 D_08A4761C[];
void func_0880416C(void *);

Unk_08943A18 *func_08943A18(Unk_08943A18 *arg0, s16 arg1)
{
    if (arg0 != NULL) {
        if (arg0 != NULL) {
            arg0->unk_08 = D_08A4761C;
            if (arg0 != NULL) {
                arg0->unk_08 = D_08A473F4;
            }
        }
        if (arg1 > 0) {
            func_0880416C(arg0);
        }
    }
    return arg0;
}
