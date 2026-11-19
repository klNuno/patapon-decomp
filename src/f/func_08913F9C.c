#include "common.h"

typedef struct {
    void *volatile unk_00;
} T;

extern u8 D_08A469FC[];
extern u8 D_08A46A0C[];
void func_0880416C(void *);

T *func_08913F9C(T *arg0, s16 arg1) {
    if (arg0 != NULL) {
        arg0->unk_00 = D_08A469FC;
        if (arg0 != NULL) {
            arg0->unk_00 = D_08A46A0C;
        }
        if (arg1 > 0) {
            func_0880416C(arg0);
        }
    }
    return arg0;
}
