#include "common.h"

typedef struct {
    u8 pad_00[0x20];
    s32 unk_20;
} S_0895D2D0;

void func_0880416C(void *);
void func_0895D380(S_0895D2D0 *);
extern int sceKernelDeleteSema(s32);

S_0895D2D0 *func_0895D278(S_0895D2D0 *arg0, s16 arg1) {
    if (arg0 != NULL) {
        func_0895D380(arg0);
        sceKernelDeleteSema(arg0->unk_20);
        if (arg1 > 0) {
            func_0880416C(arg0);
        }
    }
    return arg0;
}
