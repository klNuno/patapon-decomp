#include "common.h"

typedef struct {
    u8 pad_00[0xC];
} T;

extern T D_08A7B9CC[];

T *func_08858BA8(void) {
    return D_08A7B9CC;
}
