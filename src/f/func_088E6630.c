#include "common.h"

typedef struct {
    u8 pad_00[0x49C];
    s32 unk_49C;
} T;

s32 func_08852BA8(void *);

s32 func_088E6630(T *arg0, s32 arg1) {
    s32 temp = func_08852BA8(arg0);
    if (temp == 0) {
        return 0;
    }
    arg0->unk_49C = temp + arg1;
    return 0;
}
