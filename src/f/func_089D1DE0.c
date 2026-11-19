#include "common.h"

typedef struct {
    u8 pad_00[8];
    void *volatile unk_08;
} S;

extern u8 D_08A48EAC[];
extern u8 D_08A48F0C[];
void func_0880416C(void *);

S *func_089D1DE0(S *arg0, s16 arg1) {
    if (arg0 != NULL) {
        arg0->unk_08 = D_08A48EAC;
        if (arg0 != NULL) {
            arg0->unk_08 = D_08A48F0C;
        }
        if (arg1 > 0) {
            func_0880416C(arg0);
        }
    }
    return arg0;
}
