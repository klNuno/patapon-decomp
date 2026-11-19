#include "common.h"

void func_0880416C(void *);
extern u8 D_08A4489C[];
extern u8 D_08A45598[];
extern u8 D_08A4657C[];
extern u8 D_08A46598[];

typedef struct {
    void *volatile unk_00;
} S;

void *func_088E67FC(S *arg0, s16 arg1) {
    if (arg0 != NULL) {
        arg0->unk_00 = D_08A4657C;
        if (arg0 != NULL) {
            arg0->unk_00 = D_08A46598;
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
