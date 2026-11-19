#include "common.h"

typedef struct {
    u8 pad_00[0x30];
    u8 *unk_30;
} T;

extern u8 D_08A460FC[];
void func_0880416C(void *);

T *func_088CECE8(T *arg0, s16 arg1) {
    if (arg0 != NULL) {
        arg0->unk_30 = D_08A460FC;
        if (arg1 > 0) {
            func_0880416C(arg0);
        }
    }
    return arg0;
}
