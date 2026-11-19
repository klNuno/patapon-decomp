#include "common.h"

void func_0880416C(void *);
extern u8 D_08A45D14[];

typedef struct {
    u8 pad_00[4];
    void *unk_04;
} T;

T *func_088B4960(T *arg0, s16 arg1) {
    if (arg0 != NULL) {
        arg0->unk_04 = D_08A45D14;
        if (arg1 > 0) {
            func_0880416C(arg0);
        }
    }
    return arg0;
}
