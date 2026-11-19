#include "common.h"

extern u8 D_08A46B0C[];
void func_0880416C(void *);
typedef struct {
    u8 pad_00[0x28];
    void *unk_28;
} S;

void func_08909B74(S *, s32);


S *func_08918AFC(S *arg0, s16 arg1) {
    if (arg0 != NULL) {
        arg0->unk_28 = D_08A46B0C;
        func_08909B74(arg0, 0);
        if (arg1 > 0) {
            func_0880416C(arg0);
        }
    }
    return arg0;
}
