#include "common.h"

typedef struct {
    void *unk_00;
} T;

void func_0880416C(void *);
extern u8 D_08A46598[];
extern u8 D_08A45598[];
extern u8 D_08A4489C[];

T *func_088E6790(T *arg0, s16 arg1) {
    if (arg0 != NULL) {
        arg0->unk_00 = D_08A46598;
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
