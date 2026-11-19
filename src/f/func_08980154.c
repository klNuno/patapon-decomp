#include "common.h"

extern u8 D_08A480F0[];
void func_0880416C(void *);
extern s32 func_089801AC(s32);

typedef struct {
    u8 pad_00[8];
    u8 *unk_08;
} T;

T *func_08980154(T *arg0, s16 arg1) {
    if (arg0 != NULL) {
        arg0->unk_08 = D_08A480F0;
        func_089801AC((s32)arg0);
        if (arg1 > 0) {
            func_0880416C(arg0);
        }
    }
    return arg0;
}
