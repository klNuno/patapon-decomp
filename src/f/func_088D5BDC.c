#include "common.h"

typedef struct {
    u8 pad_00[8];
    void **unk_08;
} T088D5BDC;

extern void *D_08A4628C[];
extern void *D_08A4629C[];
void func_0880416C(void *);

T088D5BDC *func_088D5BDC(T088D5BDC *arg0, s16 arg1) {
    if (arg0 != NULL) {
        if (arg0 != NULL) {
            arg0->unk_08 = D_08A4628C;
            if (arg0 != NULL) {
                arg0->unk_08 = D_08A4629C;
            }
        }
        if (arg1 > 0) {
            func_0880416C(arg0);
        }
    }
    return arg0;
}
