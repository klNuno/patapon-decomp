#include "common.h"

void func_0880416C(void *);
extern u8 D_08A4489C[];
extern u8 D_08A45598[];
extern u8 D_08A465D0[];

typedef struct {
    u8 *volatile unk_00;
} T;

T *func_088EE10C(T *arg0, s16 arg1) {
    if (arg0 != NULL) {
        arg0->unk_00 = D_08A465D0;
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
