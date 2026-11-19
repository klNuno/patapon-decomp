#include "common.h"

typedef struct {
    void *volatile unk_00;
} S;

extern u8 D_08A46E70[];
extern u8 D_08A46E8C[];
extern u8 D_08A45598[];
extern u8 D_08A4489C[];
void func_0880416C(void *);

S *func_08924FC0(S *arg0, s16 arg1) {
    if (arg0 != NULL) {
        arg0->unk_00 = D_08A46E70;
        if (arg0 != NULL) {
            arg0->unk_00 = D_08A46E8C;
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
