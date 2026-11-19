#include "common.h"

void func_0880416C(void *);
void func_08866C4C(void *);
extern u8 D_08A44B98[];

typedef struct {
    u8 pad_00[0x16C];
    void *unk_16C;
} T;

T *func_088668A0(T *arg0, s16 arg1) {
    if (arg0 != NULL) {
        arg0->unk_16C = D_08A44B98;
        func_08866C4C(arg0);
        if (arg1 > 0) {
            func_0880416C(arg0);
        }
    }
    return arg0;
}
