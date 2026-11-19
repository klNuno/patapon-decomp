#include "common.h"

extern u8 D_08A48D00[];
extern u8 D_08A48D10[];
void func_0880416C(void *);

typedef struct {
    u8 pad_00[8];
    void *unk_08;
} T;

T *func_089C5280(T *arg0, s16 arg1) {
    if (arg0 != NULL) {
        if (arg0 != NULL) {
            arg0->unk_08 = D_08A48D00;
            if (arg0 != NULL) {
                arg0->unk_08 = D_08A48D10;
            }
        }
        if (arg1 > 0) {
            func_0880416C(arg0);
        }
    }
    return arg0;
}
