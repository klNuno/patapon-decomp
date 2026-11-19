#include "common.h"
void func_0880416C(void *);
extern u8 D_08A44970[];

typedef struct {
    u8 pad_00[0x8];
    u8 *unk_08;
} T;

T *func_0885B740(T *arg0, s16 arg1) {
    if (arg0 != NULL) {
        arg0->unk_08 = D_08A44970;
        if (arg1 > 0) {
            func_0880416C(arg0);
        }
    }
    return arg0;
}
