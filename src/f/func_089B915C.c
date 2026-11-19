#include "common.h"

typedef struct {
    u8 pad_00[8];
    void *volatile unk_08;
} Unk_089B915C;

extern u8 D_08A48B5C[];
extern u8 D_08A48B4C[];
void func_0880416C(void *);

Unk_089B915C *func_089B915C(Unk_089B915C *arg0, s16 arg1)
{
    if (arg0 != NULL) {
        if (arg0 != NULL) {
            arg0->unk_08 = D_08A48B4C;
            if (arg0 != NULL) {
                arg0->unk_08 = D_08A48B5C;
            }
        }
        if (arg1 > 0) {
            func_0880416C(arg0);
        }
    }
    return arg0;
}
