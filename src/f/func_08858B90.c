#include "common.h"

typedef struct {
    u8 pad_00[0xC];
} T;

extern T D_08A7B9B4[];

T *func_08858B90(void) {
    return D_08A7B9B4;
}
