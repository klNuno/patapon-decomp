#include "common.h"

typedef struct {
    u8 pad_00[8];
    u8 *unk_08;
} T;

extern void func_0880416C(void *);
extern u8 D_08A476D4[];
extern u8 D_08A476E4[];

T *func_08947700(T *arg0, s16 arg1) {
    if (arg0 != NULL) {
        if (arg0 != NULL) {
            arg0->unk_08 = D_08A476D4;
            if (arg0 != NULL) {
                arg0->unk_08 = D_08A476E4;
            }
        }
        if (arg1 > 0) {
            func_0880416C(arg0);
        }
    }
    return arg0;
}
