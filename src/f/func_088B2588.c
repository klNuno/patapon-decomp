#include "common.h"

typedef struct {
    u8 pad_00[8];
    u8 unk_08[0x714];
    u8 unk_71C[1];
} T;

void func_0880416C(void *);
void *func_088B2398(void *, s16);
void *func_088B2524(void *, s16);

T *func_088B2588(T *arg0, s16 arg1) {
    if (arg0 != NULL) {
        if (arg0->unk_08 != NULL) {
            func_088B2398(arg0->unk_71C, 0);
            func_088B2524(arg0->unk_08, 0);
        }
        if (arg1 > 0) {
            func_0880416C(arg0);
        }
    }
    return arg0;
}
