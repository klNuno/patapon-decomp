#include "common.h"

typedef struct {
    u8 pad_00[0x04];
    u8 *unk_04;
} T;

extern u8 D_08A47A38[];
void func_0880416C(void *);

T *func_08960A9C(T *arg0, s16 arg1) {
    if (arg0 != NULL) {
        arg0->unk_04 = D_08A47A38;
        if (arg1 > 0) {
            func_0880416C(arg0);
        }
    }
    return arg0;
}
