#include "common.h"

typedef struct {
    void *volatile unk_00;
} Obj;

extern u8 D_08A47100[];
extern u8 D_08A4711C[];
extern u8 D_08A45598[];
extern u8 D_08A4489C[];
void func_0880416C(void *);

Obj *func_08935CC0(Obj *arg0, s16 arg1)
{
    if (arg0 != NULL) {
        arg0->unk_00 = D_08A47100;
        if (arg0 != NULL) {
            arg0->unk_00 = D_08A4711C;
            if (arg0 != NULL) {
                arg0->unk_00 = D_08A45598;
                if (arg0 != NULL) {
                    arg0->unk_00 = D_08A4489C;
                }
            }
        }
        if (arg1 > 0) {
            func_0880416C(arg0);
        }
    }
    return arg0;
}
