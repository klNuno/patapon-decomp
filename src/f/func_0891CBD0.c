#include "common.h"

typedef struct {
    u8 pad_00[4];
    u8 unk_04[0x23C];
    u8 unk_240[1];
} T;

void func_0880416C(void *);
void func_08865F78(u8 *, s32);
u8 *func_0891C7AC(u8 *arg0, s16 arg1);

T *func_0891CBD0(T *arg0, s16 arg1) {
    if (arg0 != NULL) {
        func_08865F78(arg0->unk_240, -1);
        if (arg0 != NULL) {
            func_0891C7AC(arg0->unk_04, -1);
        }
        if (arg1 > 0) {
            func_0880416C(arg0);
        }
    }
    return arg0;
}
