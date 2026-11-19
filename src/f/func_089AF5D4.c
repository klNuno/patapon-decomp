#include "common.h"

extern u8 D_08A488C0[];
void func_0880416C(void *);
typedef struct {
    u8 pad_00[0x58];
    void *unk_58;
} S;

void func_089B18B4(S *, s32);


S *func_089AF5D4(S *arg0, s16 arg1) {
    if (arg0 != NULL) {
        arg0->unk_58 = D_08A488C0;
        func_089B18B4(arg0, 0);
        if (arg1 > 0) {
            func_0880416C(arg0);
        }
    }
    return arg0;
}
