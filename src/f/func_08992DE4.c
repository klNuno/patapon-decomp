#include "common.h"

typedef struct {
    u8 unk_00[0x90];
    u8 unk_90[0x90];
} T08992DE4;

void func_08865F78(void *, s32);
void func_0880416C(void *);

T08992DE4 *func_08992DE4(T08992DE4 *arg0, s16 arg1) {
    if (arg0 != NULL) {
        func_08865F78(arg0->unk_90, -1);
        func_08865F78(arg0, -1);
        if (arg1 > 0) {
            func_0880416C(arg0);
        }
    }
    return arg0;
}
