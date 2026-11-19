#include "common.h"

typedef struct {
    u8 pad_00[0x36B18];
    char **unk_36B18;
} T;

void *func_08944CD8(char **arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4);

void *func_08873BA4(T *arg0, s32 arg1, s32 arg2, s32 arg3) {
    return func_08944CD8(arg0->unk_36B18, arg1, arg2, arg3, 0);
}
