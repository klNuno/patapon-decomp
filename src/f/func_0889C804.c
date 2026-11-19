#include "common.h"

void func_0880416C(void *);
void func_0889C85C(void *);
extern u8 D_08A45918[];

typedef struct {
    u8 pad_00[0x24];
    void *unk_24;
} T;

T *func_0889C804(T *arg0, s16 arg1) {
    if (arg0 != NULL) {
        arg0->unk_24 = D_08A45918;
        func_0889C85C(arg0);
        if (arg1 > 0) {
            func_0880416C(arg0);
        }
    }
    return arg0;
}
