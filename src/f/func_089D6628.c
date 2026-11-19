#include "common.h"

extern u8 D_08A49048[];
extern u8 D_08A46884[];
void func_0880416C(void *);

typedef struct {
    void *volatile unk_00;
} S;

S *func_089D6628(S *arg0, s16 arg1) {
    if (arg0 != NULL) {
        arg0->unk_00 = D_08A49048;
        if (arg0 != NULL) {
            arg0->unk_00 = D_08A46884;
        }
        if (arg1 > 0) {
            func_0880416C(arg0);
        }
    }
    return arg0;
}
