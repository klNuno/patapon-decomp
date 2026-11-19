#include "common.h"

typedef struct {
    u8 pad_00[0x20];
    s32 unk_20;
} T;

s32 func_08880338(void *);

void func_088CE494(T *arg0, s32 *arg1) {
    if (*arg1 != 0) {
        void *temp = arg1 + 1;
        if ((void *)arg0 != temp && func_08880338(temp) != 0) {
            arg0->unk_20--;
        }
    }
    *arg1 = 0;
}
