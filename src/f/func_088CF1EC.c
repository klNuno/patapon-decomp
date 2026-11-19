#include "common.h"

void func_0880416C(void *);
extern u8 D_08A46124[];
extern u8 D_08A46134[];

typedef struct {
    u8 pad_00[8];
    u8 *unk_08;
} T;

T *func_088CF1EC(T *arg0, s16 arg1) {
    if (arg0 != NULL) {
        if (arg0 != NULL) {
            arg0->unk_08 = D_08A46124;
            if (arg0 != NULL) {
                arg0->unk_08 = D_08A46134;
            }
        }
        if (arg1 > 0) {
            func_0880416C(arg0);
        }
    }
    return arg0;
}
