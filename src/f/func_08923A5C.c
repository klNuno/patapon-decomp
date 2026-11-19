#include "common.h"

extern u8 D_08A46DD8[];
extern u8 D_08A46DE8[];
void func_0880416C(void *);

typedef struct {
    u8 pad_00[8];
    void *unk_08;
} T;

T *func_08923A5C(T *arg0, s16 arg1) {
    if (arg0 != NULL) {
        if (arg0 != NULL) {
            arg0->unk_08 = D_08A46DD8;
            if (arg0 != NULL) {
                arg0->unk_08 = D_08A46DE8;
            }
        }
        if (arg1 > 0) {
            func_0880416C(arg0);
        }
    }
    return arg0;
}
