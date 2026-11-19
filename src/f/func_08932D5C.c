#include "common.h"

typedef struct {
    u8 pad_00[0x78];
    u8 *unk_78;
} T;

extern u8 D_08A47078[];
void func_0880416C(void *);

T *func_08932D5C(T *arg0, s16 arg1) {
    if (arg0 != NULL) {
        arg0->unk_78 = D_08A47078;
        if (arg1 > 0) {
            func_0880416C(arg0);
        }
    }
    return arg0;
}
