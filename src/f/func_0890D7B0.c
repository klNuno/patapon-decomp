#include "common.h"

extern u8 D_08A4692C[];
extern u8 D_08A4693C[];
void func_0880416C(void *);

typedef struct {
    u8 pad_00[8];
    void *unk_08;
} T;

T *func_0890D7B0(T *arg0, s16 arg1) {
    if (arg0 != NULL) {
        if (arg0 != NULL) {
            arg0->unk_08 = D_08A4692C;
            if (arg0 != NULL) {
                arg0->unk_08 = D_08A4693C;
            }
        }
        if (arg1 > 0) {
            func_0880416C(arg0);
        }
    }
    return arg0;
}
