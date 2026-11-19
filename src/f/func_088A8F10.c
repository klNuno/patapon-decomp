#include "common.h"

typedef struct {
    u8 pad_00[8];
    u8 *unk_08;
} T;

extern void func_0880416C(void *);
extern u8 D_08A45BD0[];
extern u8 D_08A45BE0[];

T *func_088A8F10(T *arg0, s16 arg1) {
    if (arg0 != NULL) {
        if (arg0 != NULL) {
            arg0->unk_08 = D_08A45BD0;
            if (arg0 != NULL) {
                arg0->unk_08 = D_08A45BE0;
            }
        }
        if (arg1 > 0) {
            func_0880416C(arg0);
        }
    }
    return arg0;
}
