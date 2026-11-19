#include "common.h"

void func_0880416C(void *);
extern u8 D_08A47538[];
extern u8 D_08A45598[];
extern u8 D_08A4489C[];

typedef struct {
    void *volatile unk_00;
} Obj;

Obj *func_08942A4C(Obj *arg0, s16 arg1)
{
    if (arg0 != NULL) {
        arg0->unk_00 = D_08A47538;
        if (arg0 != NULL) {
            arg0->unk_00 = D_08A45598;
            if (arg0 != NULL) {
                arg0->unk_00 = D_08A4489C;
            }
        }
        if (arg1 > 0) {
            func_0880416C(arg0);
        }
    }
    return arg0;
}
