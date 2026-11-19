#include "common.h"

void func_0880416C(void *);
extern u8 D_08A46F30[];
extern u8 D_08A46F40[];

typedef struct {
    u8 pad_00[8];
    u8 *unk_08;
} T;

T *func_08929268(T *arg0, s16 arg1) {
    if (arg0 != NULL) {
        if (arg0 != NULL) {
            arg0->unk_08 = D_08A46F30;
            if (arg0 != NULL) {
                arg0->unk_08 = D_08A46F40;
            }
        }
        if (arg1 > 0) {
            func_0880416C(arg0);
        }
    }
    return arg0;
}
