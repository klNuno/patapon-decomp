#include "common.h"

typedef struct {
    u8 unk_00[4];
} T;

typedef struct {
    u8 pad_00[0xC];
    T unk_0C;
} S;

void func_088FD018(S *arg0, const T *arg1) {
    arg0->unk_0C = *arg1;
}
