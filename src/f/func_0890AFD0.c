#include "common.h"

typedef struct {
    u8 pad_00[8];
    void *volatile unk_08;
} Unk_0890AFD0;

extern u8 D_08A4691C[];
extern u8 D_08A4690C[];
void func_0880416C(void *);

Unk_0890AFD0 *func_0890AFD0(Unk_0890AFD0 *arg0, s16 arg1)
{
    if (arg0 != NULL) {
        if (arg0 != NULL) {
            arg0->unk_08 = D_08A4690C;
            if (arg0 != NULL) {
                arg0->unk_08 = D_08A4691C;
            }
        }
        if (arg1 > 0) {
            func_0880416C(arg0);
        }
    }
    return arg0;
}
