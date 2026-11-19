#include "common.h"

void func_0880416C(void *);
extern u8 D_08A46C64[];
extern u8 D_08A46C74[];

typedef struct {
    u8 pad_00[8];
    u8 *unk_08;
} T;

T *func_0891F564(T *arg0, s16 arg1) {
    if (arg0 != NULL) {
        if (arg0 != NULL) {
            arg0->unk_08 = D_08A46C64;
            if (arg0 != NULL) {
                arg0->unk_08 = D_08A46C74;
            }
        }
        if (arg1 > 0) {
            func_0880416C(arg0);
        }
    }
    return arg0;
}
