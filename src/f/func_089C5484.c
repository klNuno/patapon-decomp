#include "common.h"

typedef struct {
    u8 pad_00[8];
    u8 *unk_08;
} T;

extern void func_0880416C(void *);
extern u8 D_08A48D20[];
extern u8 D_08A48D30[];

T *func_089C5484(T *arg0, s16 arg1) {
    if (arg0 != NULL) {
        if (arg0 != NULL) {
            arg0->unk_08 = D_08A48D20;
            if (arg0 != NULL) {
                arg0->unk_08 = D_08A48D30;
            }
        }
        if (arg1 > 0) {
            func_0880416C(arg0);
        }
    }
    return arg0;
}
